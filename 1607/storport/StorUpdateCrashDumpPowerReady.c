/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x1C000F37C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000C984 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0011168 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorPortUnitIdleState @ 0x1C0031BB0 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C000F4A4 (RaidGetStorPoFxComponent.c)
 */

char __fastcall StorUpdateCrashDumpPowerReady(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  char v3; // di
  char v4; // r14
  __int64 v6; // r8
  _DWORD *StorPoFxComponent; // rax
  unsigned int v8; // edx
  __int64 v9; // r9

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 5144);
  v3 = 1;
  v4 = 1;
  if ( (*(_BYTE *)(a1 + 109) & 0x40) != 0
    || *(_DWORD *)(a1 + 268) == 4
    && !*(_DWORD *)(a1 + 100)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 528) + 4LL) == 5 || (*(_BYTE *)(a1 + 108) & 0x28) == 0x28) )
  {
    v1 = 0;
  }
  else
  {
    if ( !v2 )
    {
      v3 = 0;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v2 + 154) & 4) == 0
      && (*(_DWORD *)(v2 + 196) != 4 || *(_DWORD *)(v2 + 660) || (*(_BYTE *)(v2 + 153) & 0x44) != 0x44) )
    {
      if ( !RaidUnitCheckAndAcquirePoFx(*(_QWORD *)(a1 + 5144)) )
        goto LABEL_13;
      StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(
                                      *(_QWORD *)(*(_QWORD *)(v2 + 1456) + 8LL),
                                      0LL,
                                      v6,
                                      *(_QWORD *)(v2 + 1456));
      if ( !StorPoFxComponent
        || *StorPoFxComponent >= 2u && *(_DWORD *)(v9 + 16) > StorPoFxComponent[9]
        || *StorPoFxComponent == 1 && (*(_BYTE *)(v2 + 153) & 0x40) != 0 && *(_DWORD *)(v9 + 16) > v8 )
      {
        v3 = 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1448));
LABEL_12:
      if ( v3 )
        goto LABEL_13;
      goto LABEL_22;
    }
    v3 = 0;
  }
LABEL_22:
  v4 = 0;
LABEL_13:
  *(_BYTE *)(a1 + 4989) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1446) = v3;
    *(_BYTE *)(v2 + 1447) = v4;
  }
  return v3;
}
