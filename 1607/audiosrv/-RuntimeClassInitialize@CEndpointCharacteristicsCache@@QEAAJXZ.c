/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ @ 0x18003360C
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18003342C (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristicsCache::RuntimeClassInitialize(RTL_SRWLOCK *pv)
{
  struct _TP_WORK *ThreadpoolWork; // rax

  InitializeSRWLock(pv + 2);
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     pv,
                     0LL);
  pv[12].Ptr = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  return 0LL;
}
