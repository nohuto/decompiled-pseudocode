/*
 * XREFs of SmSetThreadFaultState @ 0x1400F7A4C
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall SmSetThreadFaultState(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v2; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  if ( a1 )
  {
    if ( (unsigned int)MiChargeResident(MiSystemPartition, 0x1AuLL, 1024LL) )
    {
      _InterlockedExchangeAdd64(&qword_1402FF5C8, 0x1AuLL);
      --CurrentThread->SpecialApcDisable;
      BYTE4(CurrentThread[1].Queue) |= 4u;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    MiReturnResidentAvailable(0x1AuLL);
    _InterlockedExchangeAdd64(&qword_1402FF5D0, 0x1AuLL);
    BYTE4(CurrentThread[1].Queue) &= ~4u;
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return v2;
}
