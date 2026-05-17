/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x1800DF0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSecondsSince1980ToTime(unsigned int a1, __int64 *a2)
{
  __int64 result; // rax

  result = 10000000 * (SecondsToStartOf1980 + a1);
  *a2 = result;
  return result;
}
