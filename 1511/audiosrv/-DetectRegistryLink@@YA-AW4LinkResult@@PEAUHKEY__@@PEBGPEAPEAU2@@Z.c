/*
 * XREFs of ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGPEAPEAU2@@Z @ 0x1800350C8
 * Callers:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034E78 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

__int64 __fastcall DetectRegistryLink(HKEY a1, const WCHAR *a2, HKEY *a3)
{
  int v3; // ebx
  unsigned int v7; // edi
  LSTATUS v8; // eax
  LSTATUS v9; // eax
  LSTATUS v10; // ebx
  __int64 result; // rax
  DWORD Type; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  DWORD cbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  BYTE Data[528]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = 0;
  *a3 = 0LL;
  hKey = 0LL;
  v7 = 0;
  v8 = RegOpenKeyExW(a1, a2, 8u, 0xF003Fu, &hKey);
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      return 3LL;
    }
    else
    {
      LOBYTE(v3) = v8 != 5;
      return (unsigned int)(v3 + 4);
    }
  }
  else
  {
    cbData = 520;
    Type = 0;
    v9 = RegQueryValueExW(hKey, L"SymbolicLinkValue", 0LL, &Type, Data, &cbData);
    if ( (!v9 || v9 == 234) && Type == 6 )
      v7 = 1;
    if ( v9 == 2 || v7 != 1 )
    {
      phkResult = 0LL;
      v10 = RegOpenKeyExW(a1, a2, 0, 0x20019u, &phkResult);
      RegCloseKey(phkResult);
      v7 = 2 - (v10 != 0);
    }
    result = v7;
    *a3 = hKey;
  }
  return result;
}
