/*
 * XREFs of PoSetUserPresent @ 0x1400B2B84
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x1400B2BC4 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(unsigned int a1)
{
  char v2; // bl
  __int64 result; // rax

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock();
    v2 = 1;
  }
  result = PopSetSystemState(4LL, a1);
  if ( v2 )
    return PopReleasePolicyLock();
  return result;
}
