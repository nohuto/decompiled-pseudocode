/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x1401BF428
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x1401BF560 (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  PHYSICAL_ADDRESS v4; // rdx
  PHYSICAL_ADDRESS v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = HvlpAcquireHypercallPage(v6, 1, 0LL, 40LL);
  v4 = v6[3];
  *(_QWORD *)(v3 + 8) = *a1;
  *(_DWORD *)v3 = 2;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           111LL,
                           (PHYSICAL_ADDRESS)v4.QuadPart,
                           0LL) )
    v1 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v6);
  return v1;
}
