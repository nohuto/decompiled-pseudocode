/*
 * XREFs of KIsUnlockSettingEnabled @ 0x1404CA6FC
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1404CA608 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x1406BC2A0 (KIsSideloadingEnabled.c)
 * Callees:
 *     KGetUnlockSetting @ 0x1404CA770 (KGetUnlockSetting.c)
 */

__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-10h]

  v7 = 9830548;
  v8 = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  *a2 = 0xFFFF;
  v5 = 7733364;
  v6 = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  result = KGetUnlockSetting(&v5, a1, a2);
  if ( (int)result >= 0 && *a2 == 0xFFFF )
    return KGetUnlockSetting(&v7, a1, a2);
  return result;
}
