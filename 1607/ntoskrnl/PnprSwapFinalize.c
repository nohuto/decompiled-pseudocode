/*
 * XREFs of PnprSwapFinalize @ 0x1401D0964
 * Callers:
 *     PnprSwap @ 0x1401D0740 (PnprSwap.c)
 * Callees:
 *     PnprRecopyMirrorPages @ 0x1401D05CC (PnprRecopyMirrorPages.c)
 *     PnprGetMillisecondCounter @ 0x1403DBA40 (PnprGetMillisecondCounter.c)
 */

__int64 PnprSwapFinalize()
{
  SIZE_T v0; // rcx
  int v1; // ebx
  int MillisecondCounter; // eax
  SIZE_T v3; // rdx
  __int64 v4; // rcx
  SIZE_T v5; // rdx
  int v6; // ecx
  int v7; // ecx

  v0 = PnprContext;
  v1 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    PnprRecopyMirrorPages();
    v0 = PnprContext;
  }
  *(_DWORD *)(v0 + 64) &= ~4u;
  if ( (*(_DWORD *)(v0 + 64) & 0x20) == 0 )
    __wbinvd();
  if ( *(_QWORD *)(PnprContext + 10704) )
  {
    MillisecondCounter = PnprGetMillisecondCounter(0LL);
    v3 = PnprContext;
    v4 = *(_QWORD *)(PnprContext + 10640);
    *(_DWORD *)(PnprContext + 10772) = MillisecondCounter;
    v1 = (*(__int64 (__fastcall **)(__int64))(v3 + 10704))(v4);
    if ( v1 < 0 )
    {
      v5 = PnprContext;
      v6 = *(_DWORD *)(PnprContext + 10744);
      if ( !v6 )
        v6 = 2963;
      *(_DWORD *)(PnprContext + 10744) = v6;
      v7 = *(_DWORD *)(v5 + 10748);
      if ( !v7 )
        v7 = 8;
      *(_DWORD *)(v5 + 10748) = v7;
    }
    *(_DWORD *)(PnprContext + 10776) = PnprGetMillisecondCounter(0LL);
  }
  return (unsigned int)v1;
}
