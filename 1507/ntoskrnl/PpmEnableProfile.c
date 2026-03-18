/*
 * XREFs of PpmEnableProfile @ 0x1405B9C28
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1406B75F0 (PdcPoPpmResetProfile.c)
 *     PpmRegisterSpmSettings @ 0x1406BDFB8 (PpmRegisterSpmSettings.c)
 *     PpmInitPolicyConfiguration @ 0x1407E18E0 (PpmInitPolicyConfiguration.c)
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
