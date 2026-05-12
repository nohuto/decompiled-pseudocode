/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C002B5DC
 * Callers:
 *     RaidUnitIoCoalescingCallback @ 0x1C002B950 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C002BC00 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C002BC10 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitIdleCondition @ 0x1C002CBF0 (StorPortUnitIdleCondition.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C004D334 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C002B920 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C002BB30 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     Template_qcccqqq @ 0x1C002E10C (Template_qcccqqq.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 MinimumPowerCyclePeriod; // rbp
  int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // esi
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1440) + 32LL) & 0x80u) != 0 )
    {
      MinimumPowerCyclePeriod = (unsigned int)RaidUnitGetMinimumPowerCyclePeriod(a1);
      ExCancelTimer(*(_QWORD *)(v2 + 120), 0LL);
      v5 = *(_QWORD *)(a1 + 1440);
      v6 = *(_DWORD *)(v5 + 20);
      v7 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)MinimumPowerCyclePeriod > v6 )
        v6 = MinimumPowerCyclePeriod;
      if ( (v7 & 0x100) != 0 )
      {
        v8 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2328);
        if ( v8 > 0 )
        {
          v9 = v8 / 10000;
          v10 = v8 / 10000 / MinimumPowerCyclePeriod;
          v11 = v10;
          if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          {
            v12 = *(_DWORD *)(a1 + 2320);
            LOBYTE(v12) = *(_BYTE *)(a1 + 90);
            Template_qcccqqq(
              v12,
              *(_QWORD *)(a1 + 24),
              v4,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              v12,
              *(_DWORD *)(a1 + 2320),
              v10,
              MinimumPowerCyclePeriod);
          }
          v13 = *(unsigned int *)(a1 + 2320);
          if ( v11 <= v13 )
          {
            v14 = 10000 * (v9 - (unsigned int)MinimumPowerCyclePeriod * (v13 + 1));
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1440) + 120LL) )
              *(_QWORD *)(*(_QWORD *)(a1 + 1440) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL);
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1440) + 120LL);
            if ( v15 )
              ExSetTimer(v15, v14, 0LL, 0LL);
          }
          else
          {
            v6 = 100;
          }
        }
      }
      RaidUnitPoFxSetDeviceIdleTimeout(a1, v6);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
  }
}
