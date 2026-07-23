/*
 * XREFs of PpmDisableProfile @ 0x140675C50
 * Callers:
 *     PdcPoPpmResetProfile @ 0x14066FBC8 (PdcPoPpmResetProfile.c)
 * Callees:
 *     PpmResetProfileSettings @ 0x140149284 (PpmResetProfileSettings.c)
 */

char __fastcall PpmDisableProfile(__int64 a1)
{
  char v1; // di
  __int64 v3; // rax

  v1 = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a1 + 28) &= ~1u;
  PpmResetProfileSettings(a1);
  v3 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( !v3 )
    PpmLowPowerProfile = 0LL;
  return PpmEventTraceProfileEnable(v1, 0);
}
