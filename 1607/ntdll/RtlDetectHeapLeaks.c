/*
 * XREFs of RtlDetectHeapLeaks @ 0x180007560
 * Callers:
 *     LdrShutdownProcess @ 0x180006F20 (LdrShutdownProcess.c)
 * Callees:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpInitializeLeakDetection @ 0x1800ED618 (RtlpInitializeLeakDetection.c)
 *     RtlpReadProcessHeaps @ 0x1800ED9DC (RtlpReadProcessHeaps.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800EDC90 (RtlpScanProcessVirtualMemory.c)
 */

void RtlDetectHeapLeaks(void)
{
  struct _PEB *v0; // rbx
  struct _PEB *v1; // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x2000000) == 0
    && (qword_180150BE8 || (RtlpShutdownProcessFlags & 3) != 0) )
  {
    RtlpLeaksCount = 0;
    RtlpLeakHeap = RtlCreateHeap(3u, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( RtlpLeakHeap )
    {
      v0 = NtCurrentPeb();
      if ( v0->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Inspecting leaks at process shutdown ...\n");
      if ( (unsigned __int8)RtlpInitializeLeakDetection() )
      {
        RtlpLeakHeapAddress = (__int64)v0->ProcessHeaps[v0->NumberOfHeaps - 1];
        RtlpReadProcessHeaps();
        RtlpScanProcessVirtualMemory();
        RtlDestroyHeap(RtlpLeakHeap);
        RtlpLeakHeap = 0LL;
        v1 = NtCurrentPeb();
        if ( RtlpLeaksCount )
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
          if ( (RtlpShutdownProcessFlags & 2) != 0 )
            __debugbreak();
        }
        else
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("No leaks detected.\n");
        }
      }
      else
      {
        RtlDestroyHeap(RtlpLeakHeap);
      }
    }
  }
}
