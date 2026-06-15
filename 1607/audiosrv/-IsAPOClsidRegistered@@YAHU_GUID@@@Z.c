/*
 * XREFs of ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x18002EDEC
 * Callers:
 *     ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@@Z @ 0x18002EBB8 (-GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18002EEA4 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

__int64 __fastcall IsAPOClsidRegistered(struct _GUID *a1, unsigned __int64 a2, const unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+28h] [rbp-F0h]
  unsigned __int64 cchMax; // [rsp+30h] [rbp-E8h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-E0h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-D8h] BYREF
  GUID rguid; // [rsp+50h] [rbp-C8h] BYREF
  WCHAR SubKey[80]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = 0;
  rguid = *a1;
  if ( (int)StringCchCopyExW(SubKey, a2, a3, &lpsz, &cchMax, v5) >= 0
    && StringFromGUID2(&rguid, lpsz, cchMax) > 0
    && !RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
  {
    RegCloseKey(hKey);
    return 1;
  }
  return v3;
}
