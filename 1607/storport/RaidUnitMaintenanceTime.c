/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1C00310FC
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C0030F90 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0031070 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0031260 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0003308 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     Template_qccc @ 0x1C0032C48 (Template_qccc.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  int v2; // r8d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(_QWORD *)(a1 + 1456);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 0x80u) != 0
      && (v4 & 0x100) != 0
      && (v4 & 0x200) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v3 + 148), 0) )
    {
      v5 = *(_QWORD *)(a1 + 1456);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 136)) <= 864000000000LL )
      {
        *(_DWORD *)(v5 + 148) &= ~1u;
      }
      else
      {
        if ( !*(_QWORD *)(v5 + 128) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 128LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL);
        v6 = *(_QWORD *)(a1 + 1456);
        if ( *(_QWORD *)(v6 + 128) )
        {
          if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
            Template_qccc(
              *(_QWORD *)(a1 + 24),
              (unsigned int)&EventUnitMaintenanceTimeStart,
              v2,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              *(_BYTE *)(a1 + 90));
          RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a1 + 1456) + 144LL) = 0;
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1456) + 128LL), -600000000LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v6 + 148) &= ~1u;
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
}
