/*
 * XREFs of PnprQuiesce @ 0x1401D0400
 * Callers:
 *     PnprEndMirroring @ 0x1403DB9D0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PnprLockPagesForReplace @ 0x140644DE4 (PnprLockPagesForReplace.c)
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
