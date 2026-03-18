/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0001090
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D694 (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001390 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00214E0 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *((_DWORD *)a1 + 244) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1);
  if ( !*((_QWORD *)a1 + 123) )
    *((_QWORD *)a1 + 123) = operator new[](0x400uLL, 0x68536956u, (enum _POOL_TYPE)512);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !a2 )
    PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
  *(LARGE_INTEGER *)(*((_QWORD *)a1 + 123) + 8LL * (unsigned int)(*((_DWORD *)a1 + 244))++) = PerformanceCounter;
}
