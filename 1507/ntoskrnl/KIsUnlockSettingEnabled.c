/*
 * XREFs of KIsUnlockSettingEnabled @ 0x14055393C
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x1405594C8 (ExQueryFastCacheDevLicense.c)
 *     SepIsLockedDown @ 0x1406D0808 (SepIsLockedDown.c)
 * Callees:
 *     KGetUnlockSetting @ 0x1405539D4 (KGetUnlockSetting.c)
 */

__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, bool *a2)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-20h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-18h]
  int v7; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-8h]
  int v9; // [rsp+60h] [rbp+20h] BYREF

  v7 = 9830548;
  v8 = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  v5 = 7733364;
  v9 = 0xFFFF;
  v6 = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  result = KGetUnlockSetting(&v5, a1, &v9);
  if ( (int)result >= 0 )
  {
    if ( v9 != 0xFFFF || (result = KGetUnlockSetting(&v7, a1, &v9), (int)result >= 0) )
      *a2 = v9 == 1;
  }
  return result;
}
