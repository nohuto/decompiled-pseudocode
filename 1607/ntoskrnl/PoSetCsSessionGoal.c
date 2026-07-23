/*
 * XREFs of PoSetCsSessionGoal @ 0x140206E40
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     TtmpSetCsSessionGoal @ 0x140679334 (TtmpSetCsSessionGoal.c)
 * Callees:
 *     <none>
 */

__int64 PoSetCsSessionGoal()
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)&xmmword_140329000 + 1) )
    return (*((__int64 (**)(void))&xmmword_140329000 + 1))();
  return result;
}
