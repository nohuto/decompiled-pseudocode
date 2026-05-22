/*
 * XREFs of GetConfigurationFlag @ 0x180065810
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x180065BBC (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GetConfigurationFlag(LPCWSTR lpValue)
{
  int v1; // ebx
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v4 = 4;
  v1 = 0;
  v3 = 0;
  v5 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
          lpValue,
          0x10u,
          &v3,
          &v5,
          &v4)
    && v3 == 4
    && v4 == 4 )
  {
    v1 = v5;
  }
  return v1 == 1;
}
