/*
 * XREFs of PnprQuiesce @ 0x1401C1090
 * Callers:
 *     PnprEndMirroring @ 0x1403AF8B4 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 *     PnprLockPagesForReplace @ 0x1406108F4 (PnprLockPagesForReplace.c)
 */

__int64 PnprQuiesce()
{
  int v0; // ebx
  SIZE_T v1; // rax
  int v2; // ecx
  int v3; // ecx

  v0 = 0;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    PnprLockPagesForReplace();
    goto LABEL_9;
  }
  KeSetEvent((PRKEVENT)(PnprContext + 10520), 0, 1u);
  KeWaitForSingleObject((PVOID)(PnprContext + 10544), Executive, 0, 0, 0LL);
  v1 = PnprContext;
  v0 = *(_DWORD *)(PnprContext + 10616);
  if ( v0 >= 0 )
  {
LABEL_9:
    PnprQuiesceProcessors();
    return (unsigned int)v0;
  }
  v2 = *(_DWORD *)(PnprContext + 10744);
  if ( !v2 )
    v2 = 1903;
  *(_DWORD *)(PnprContext + 10744) = v2;
  v3 = *(_DWORD *)(v1 + 10748);
  if ( !v3 )
    v3 = 1;
  *(_DWORD *)(v1 + 10748) = v3;
  return (unsigned int)v0;
}
