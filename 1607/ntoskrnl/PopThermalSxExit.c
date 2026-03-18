/*
 * XREFs of PopThermalSxExit @ 0x140114838
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

void PopThermalSxExit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 i; // rdi

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock();
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0LL);
    }
    PopReleasePolicyLock(v1, v0, v2);
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
