/*
 * XREFs of ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x18006781C
 * Callers:
 *     ?ListSupportedValues@SpatialInteractionDevice@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180064820 (-ListSupportedValues@SpatialInteractionDevice@@UEAAJIPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     SpatialInteractionDevices::ListSupportedValues @ 0x180067618 (SpatialInteractionDevices--ListSupportedValues.c)
 *     SpatialInteractionDevices::ListSupportedButtons @ 0x180067734 (SpatialInteractionDevices--ListSupportedButtons.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__2___ @ 0x180067E6C (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_SpatialInteracti.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___ @ 0x180067FE4 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_180067FE4.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___ @ 0x180068220 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_180068220.c)
 *     memset @ 0x18009D814 (memset.c)
 */

int __fastcall SpatialInteractionDevices::ListSupportedValues(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        void *a3,
        HSTRING *a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int result; // eax
  __int128 v12; // [rsp+38h] [rbp-49h]
  __int128 v13; // [rsp+48h] [rbp-39h]
  __int128 v14; // [rsp+58h] [rbp-29h]
  __int128 v15; // [rsp+68h] [rbp-19h]
  __int128 v16; // [rsp+78h] [rbp-9h]
  _BYTE v17[16]; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v18[16]; // [rsp+98h] [rbp+17h] BYREF
  _BYTE v19[16]; // [rsp+A8h] [rbp+27h] BYREF
  _BYTE v20[16]; // [rsp+B8h] [rbp+37h] BYREF
  _BYTE v21[16]; // [rsp+C8h] [rbp+47h] BYREF
  int v22; // [rsp+F0h] [rbp+6Fh] BYREF

  v5 = (unsigned int)a2;
  v14 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__2___(
                     v17,
                     this);
  v16 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___(
                     v18,
                     v7);
  v12 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___(
                     v19,
                     v8,
                     &off_1800A9A00);
  v13 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___(
                     v20,
                     v9,
                     &off_1800A9A60);
  v15 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___(
                     v21,
                     v10,
                     &off_1800A9A30);
  memset(a3, 0, 8LL * v5);
  v22 = 0;
  result = SpatialInteractionDevices::ListSupportedValues(
             (__int64)this,
             v5,
             (__int64)a3,
             (__int64)&unk_1800A9DC0,
             3uLL,
             &v22);
  if ( result >= 0 )
  {
    result = SpatialInteractionDevices::ListSupportedValues(
               (__int64)this,
               v5,
               (__int64)a3,
               (__int64)&unk_1800A9E30,
               4uLL,
               &v22);
    if ( result >= 0 )
    {
      result = SpatialInteractionDevices::ListSupportedValues((__int64)this, v5, (__int64)a3, v12, DWORD2(v12), &v22);
      if ( result >= 0 )
      {
        result = SpatialInteractionDevices::ListSupportedValues((__int64)this, v5, (__int64)a3, v13, DWORD2(v13), &v22);
        if ( result >= 0 )
        {
          result = SpatialInteractionDevices::ListSupportedValues(
                     (__int64)this,
                     v5,
                     (__int64)a3,
                     v14,
                     DWORD2(v14),
                     &v22);
          if ( result >= 0 )
          {
            result = SpatialInteractionDevices::ListSupportedValues(
                       (__int64)this,
                       v5,
                       (__int64)a3,
                       v15,
                       DWORD2(v15),
                       &v22);
            if ( result >= 0 )
            {
              result = SpatialInteractionDevices::ListSupportedValues(
                         (__int64)this,
                         v5,
                         (__int64)a3,
                         (__int64)&unk_1800D2150,
                         1uLL,
                         &v22);
              if ( result >= 0 )
                return SpatialInteractionDevices::ListSupportedButtons(
                         (__int64)this,
                         v5,
                         (__int64)a3,
                         v16,
                         DWORD2(v16),
                         &v22);
            }
          }
        }
      }
    }
  }
  return result;
}
