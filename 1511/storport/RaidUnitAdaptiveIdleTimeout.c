/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C002D59C
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C00156B0 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C002D890 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C002DA70 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C002DA80 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0052234 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0007234 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C0007838 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     Template_qcccqqq @ 0x1C002FD40 (Template_qcccqqq.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  unsigned int MinimumPowerCyclePeriod; // eax
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 0x80u) != 0 )
    {
      MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
      v5 = *(_QWORD *)(v4 + 120);
      v6 = MinimumPowerCyclePeriod;
      if ( v5 )
        ExCancelTimer(v5, 0LL);
      v7 = *(_QWORD *)(a1 + 1456);
      v8 = *(_DWORD *)(v7 + 20);
      if ( (unsigned int)v6 > v8 )
        v8 = v6;
      if ( (*(_DWORD *)(v7 + 32) & 0x100) != 0 )
      {
        v9 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2520);
        if ( v9 > 0 )
        {
          v10 = v9 / 10000;
          v11 = v9 / 10000 / v6;
          v12 = v11;
          if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          {
            v13 = *(_DWORD *)(a1 + 2512);
            LOBYTE(v13) = *(_BYTE *)(a1 + 90);
            Template_qcccqqq(
              v13,
              *(_QWORD *)(a1 + 24),
              v3,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              v13,
              *(_DWORD *)(a1 + 2512),
              v11,
              v6);
          }
          v14 = *(unsigned int *)(a1 + 2512);
          if ( v12 <= v14 )
          {
            v15 = 10000 * (v10 - v6 * (v14 + 1));
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL) )
              *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL);
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL);
            if ( v16 )
              ExSetTimer(v16, v15, 0LL, 0LL);
          }
          else
          {
            v8 = 100;
          }
        }
      }
      RaidUnitPoFxSetDeviceIdleTimeout(a1, v8);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
}
