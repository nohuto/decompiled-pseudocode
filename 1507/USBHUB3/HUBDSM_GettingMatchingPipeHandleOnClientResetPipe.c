/*
 * XREFs of HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x1C00169C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_GettingMatchingPipeHandleOnClientResetPipe(__int64 a1)
{
  return HUBPDO_FindAndStoreMatchingInternalPipeHandle(*(_QWORD *)(a1 + 960));
}
