/*
 * XREFs of StorUpdateCrashDumpPowerReady @ 0x1C0008808
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00084A4 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0008688 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortUnitIdleState @ 0x1C002E960 (StorPortUnitIdleState.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetStorPoFxComponent @ 0x1C0029344 (RaidGetStorPoFxComponent.c)
 */

char __fastcall StorUpdateCrashDumpPowerReady(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  char v3; // di
  char v4; // r14
  _DWORD *StorPoFxComponent; // rax
  unsigned int v8; // edx
  __int64 v9; // r9

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 5144);
  v3 = 1;
  v4 = 1;
  if ( *(_DWORD *)(a1 + 268) != 4
    || *(_DWORD *)(a1 + 100)
    || *(_DWORD *)(*(_QWORD *)(a1 + 528) + 4LL) != 5 && (*(_BYTE *)(a1 + 108) & 0x28) != 0x28 )
  {
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 188) == 4 && !*(_DWORD *)(v2 + 660) && (*(_BYTE *)(v2 + 145) & 0x44) == 0x44 )
      {
        v3 = 0;
        goto LABEL_26;
      }
      if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(*(_QWORD *)(a1 + 5144)) )
        goto LABEL_6;
      StorPoFxComponent = (_DWORD *)RaidGetStorPoFxComponent(*(_QWORD *)(*(_QWORD *)(v2 + 1456) + 8LL), 0LL);
      if ( !StorPoFxComponent
        || *StorPoFxComponent >= 2u && *(_DWORD *)(v9 + 16) > StorPoFxComponent[9]
        || *StorPoFxComponent == 1 && (*(_BYTE *)(v2 + 145) & 0x40) != 0 && *(_DWORD *)(v9 + 16) > v8 )
      {
        v3 = 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1448));
    }
    else
    {
      v3 = 0;
    }
    if ( v3 )
      goto LABEL_6;
    goto LABEL_26;
  }
  v1 = 0;
LABEL_26:
  v4 = 0;
LABEL_6:
  *(_BYTE *)(a1 + 4989) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1446) = v3;
    *(_BYTE *)(v2 + 1447) = v4;
  }
  return v3;
}
