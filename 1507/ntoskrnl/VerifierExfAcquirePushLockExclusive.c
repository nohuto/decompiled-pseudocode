/*
 * XREFs of VerifierExfAcquirePushLockExclusive @ 0x140751C98
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockExclusive(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(234, a1);
  return pXdvExfAcquirePushLockExclusive(a1);
}
