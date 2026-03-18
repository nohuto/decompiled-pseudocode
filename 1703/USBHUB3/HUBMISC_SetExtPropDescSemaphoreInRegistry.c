/*
 * XREFs of HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C006E1C4
 * Callers:
 *     HUBDSM_SettingExtPropDescSemaphoreForMsOs2 @ 0x1C001D840 (HUBDSM_SettingExtPropDescSemaphoreForMsOs2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0070DC8 (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_SetExtPropDescSemaphoreInRegistry(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 1;
  v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)L"(*", 4, 4, (__int64)&v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 60;
LABEL_5:
    v6 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v4,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
      v6);
    return ((v3 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v7 = *(unsigned __int16 *)(a1 + 1984);
  v2 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)&g_RevisionId, 4, 4, (__int64)&v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 61;
    goto LABEL_5;
  }
  return ((v3 >> 31) & 0xFFFFFFF4) + 4077;
}
