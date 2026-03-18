/*
 * XREFs of VerifierExfAcquirePushLockShared @ 0x140751CCC
 * Callers:
 *     <none>
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x140751FC4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockShared(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(234, a1);
  return pXdvExfAcquirePushLockShared(a1);
}
