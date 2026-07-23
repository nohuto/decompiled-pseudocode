/*
 * XREFs of PopThermalSxExit @ 0x140114DA8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

void PopThermalSxExit()
{
  __int64 i; // rdi

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock();
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    PopReleasePolicyLock();
  }
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 416));
    *(_QWORD *)(i + 496) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(i + 488) = 0;
    PopReleaseRwLock((signed __int64 *)(i + 416));
  }
  PopReleaseRwLock(&PopPolicyDeviceLock);
}
