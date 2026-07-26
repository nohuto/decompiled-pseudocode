/*
 * XREFs of ndisVerifierNdisFPauseComplete @ 0x1C0063F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisVerifierNdisFPauseComplete(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD, void (__stdcall *)(NDIS_HANDLE)))ndisVerifierNdisDispatch->NdisFPauseComplete)(
           a1,
           *(_QWORD *)(a1 + 904),
           NdisFPauseComplete);
}
