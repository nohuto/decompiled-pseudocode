/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00122EC
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C00178CC (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00061B0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00128B4 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *((_DWORD *)a1 + 236) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1);
  if ( !*((_QWORD *)a1 + 119) )
    *((_QWORD *)a1 + 119) = operator new[](0x400uLL, 0x68536956u, (POOL_TYPE)512);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !a2 )
    PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
  *(LARGE_INTEGER *)(*((_QWORD *)a1 + 119) + 8LL * (unsigned int)(*((_DWORD *)a1 + 236))++) = PerformanceCounter;
}
