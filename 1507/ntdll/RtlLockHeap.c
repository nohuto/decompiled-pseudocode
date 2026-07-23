/*
 * XREFs of RtlLockHeap @ 0x180027440
 * Callers:
 *     RtlpValidateHeapInternal @ 0x180038748 (RtlpValidateHeapInternal.c)
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpHpHeapLock @ 0x18002A3CC (RtlpHpHeapLock.c)
 *     RtlpEnterCriticalSectionContended @ 0x180035210 (RtlpEnterCriticalSectionContended.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     RtlpLockHeapInternal @ 0x1800D9540 (RtlpLockHeapInternal.c)
 *     RtlpHpVirtGetProcessHeap @ 0x1800EAC9C (RtlpHpVirtGetProcessHeap.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  _WORD *ProcessHeap; // rdi
  char *v2; // rsi
  struct _TEB *v3; // rax
  __int64 v4; // rcx
  signed __int8 v5; // cf
  void *UniqueThread; // rax
  BOOLEAN v7; // bl
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+26h] [rbp-32h]
  _WORD *v11; // [rsp+40h] [rbp-18h]

  ProcessHeap = HeapHandle;
  if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
    {
      if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
        return ((__int64 (__fastcall *)(PVOID))qword_180143CE0)(HeapHandle);
      v2 = (char *)HeapHandle + 152;
      if ( *((_DWORD *)HeapHandle + 38) == -285217025 )
      {
        if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
        {
          v3 = NtCurrentTeb();
          v4 = *((_QWORD *)HeapHandle + 44);
          v5 = _interlockedbittestandreset((volatile signed __int32 *)(v4 + 8), 0);
          UniqueThread = v3->ClientId.UniqueThread;
          if ( v5 )
          {
            *(_QWORD *)(v4 + 16) = UniqueThread;
            *(_DWORD *)(v4 + 12) = 1;
          }
          else if ( *(void **)(v4 + 16) == UniqueThread )
          {
            ++*(_DWORD *)(v4 + 12);
          }
          else
          {
            RtlpEnterCriticalSectionContended();
          }
          ++ProcessHeap[188];
        }
        goto LABEL_9;
      }
      v7 = 0;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", ProcessHeap);
      DbgPrint(", passed to %s", "RtlLockHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap(v2);
      return v7;
    }
    RtlpHpHeapLock();
LABEL_9:
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v10 = 4139;
        v11 = ProcessHeap;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x402u, 8u, Fields);
      }
    }
    return 1;
  }
  if ( HeapHandle == NtCurrentPeb()->ProcessHeap )
    ProcessHeap = (_WORD *)RtlpHpVirtGetProcessHeap(0LL);
  return (unsigned __int8)RtlpLockHeapInternal(ProcessHeap) != 0;
}
