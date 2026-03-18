/*
 * XREFs of PoSetUserPresent @ 0x1400F1D98
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x1400F1DD8 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
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
