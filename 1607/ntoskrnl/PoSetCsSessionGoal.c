/*
 * XREFs of PoSetCsSessionGoal @ 0x140207014
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     TtmpSetCsSessionGoal @ 0x140679250 (TtmpSetCsSessionGoal.c)
 * Callees:
 *     <none>
 */

__int64 PoSetCsSessionGoal()
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)&xmmword_140328FC0 + 1) )
    return (*((__int64 (**)(void))&xmmword_140328FC0 + 1))();
  return result;
}
