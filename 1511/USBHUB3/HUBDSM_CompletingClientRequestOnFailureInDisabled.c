/*
 * XREFs of HUBDSM_CompletingClientRequestOnFailureInDisabled @ 0x1C0016F50
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C0010370 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 */

__int64 __fastcall HUBDSM_CompletingClientRequestOnFailureInDisabled(__int64 a1)
{
  HUBPDO_CompleteClientSerialRequestWithStatusFailed(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
