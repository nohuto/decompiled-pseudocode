/*
 * XREFs of RtlCreateAtomTable @ 0x1800677D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAtomTable(__int64 a1, __int64 a2)
{
  return RtlCreateAtomTableEx(a1, a2, a2);
}
