/*
 * XREFs of RtlRemoveVectoredContinueHandler @ 0x1800D5DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRemoveVectoredContinueHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return RtlpRemoveVectoredHandler(a1, (char *)1, a3, a4);
}
