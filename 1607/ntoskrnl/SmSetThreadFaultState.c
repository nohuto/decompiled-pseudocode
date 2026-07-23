/*
 * XREFs of SmSetThreadFaultState @ 0x140003AC8
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

__int64 __fastcall SmSetThreadFaultState(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  if ( a1 )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 26LL, 1024LL) )
    {
      --CurrentThread->SpecialApcDisable;
      LOBYTE(CurrentThread[1].Queue) |= 4u;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    MiReturnResidentAvailable(26LL);
    LOBYTE(CurrentThread[1].Queue) &= ~4u;
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  return v2;
}
