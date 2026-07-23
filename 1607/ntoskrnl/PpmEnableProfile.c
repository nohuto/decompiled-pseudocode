/*
 * XREFs of PpmEnableProfile @ 0x140577C68
 * Callers:
 *     PdcPoPpmResetProfile @ 0x14066FBC8 (PdcPoPpmResetProfile.c)
 *     PpmRegisterSpmSettings @ 0x140675F94 (PpmRegisterSpmSettings.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEnableProfile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // r8

  *(_DWORD *)(a1 + 28) |= 1u;
  v2 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  v3 = *(_BYTE *)(a1 + 8);
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( !v2 )
    PpmLowPowerProfile = a1;
  LOBYTE(a2) = 1;
  LOBYTE(a1) = v3;
  return PpmEventTraceProfileEnable(a1, a2);
}
