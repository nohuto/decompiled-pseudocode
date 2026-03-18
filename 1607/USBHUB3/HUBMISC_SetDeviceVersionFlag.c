/*
 * XREFs of HUBMISC_SetDeviceVersionFlag @ 0x1C0025534
 * Callers:
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C0018780 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingVersionFlagInEnumerating @ 0x1C0018B80 (HUBDSM_SettingVersionFlagInEnumerating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 */

__int16 __fastcall HUBMISC_SetDeviceVersionFlag(__int64 a1)
{
  unsigned __int16 v2; // cx
  int v3; // eax
  int v4; // eax

  *(_BYTE *)(a1 + 1440) = 0;
  v2 = *(_WORD *)(a1 + 1974);
  LOWORD(v3) = 256;
  if ( v2 != 256 )
  {
    LOWORD(v3) = v2 - 257;
    if ( (unsigned __int16)(v2 - 257) > 0xFEu )
    {
      LOWORD(v3) = 512;
      if ( v2 == 512 )
      {
        *(_DWORD *)(a1 + 1440) |= 4u;
        return v3;
      }
      LOWORD(v3) = 768;
      if ( v2 > 0x200u )
      {
        if ( v2 >= 0x300u )
        {
          v4 = *(_DWORD *)(a1 + 1440);
          if ( (v4 & 0x20000) != 0 )
          {
            v3 = v4 | 0x10;
            *(_DWORD *)(a1 + 1440) = v3;
            return v3;
          }
          LOWORD(v3) = WPP_RECORDER_SF_d(
                         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                         2u,
                         5u,
                         0x26u,
                         (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
                         v2);
        }
        *(_DWORD *)(a1 + 1440) |= 8u;
        return v3;
      }
      LOWORD(v3) = WPP_RECORDER_SF_d(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     2u,
                     5u,
                     0x27u,
                     (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
                     v2);
    }
    *(_DWORD *)(a1 + 1440) |= 2u;
    return v3;
  }
  *(_DWORD *)(a1 + 1440) |= 1u;
  return v3;
}
