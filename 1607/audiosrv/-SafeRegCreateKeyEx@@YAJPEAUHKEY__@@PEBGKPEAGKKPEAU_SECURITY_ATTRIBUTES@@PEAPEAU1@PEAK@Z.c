/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18006DED8
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180068AA0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18006DED8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     atexit @ 0x180036470 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x18006A7A8 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x18006BCF8 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18006DED8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 */

LSTATUS __fastcall SafeRegCreateKeyEx(
        HKEY a1,
        const unsigned __int16 *a2,
        DWORD a3,
        unsigned __int16 *a4,
        DWORD dwOptions,
        REGSAM samDesired,
        struct _SECURITY_ATTRIBUTES *a7,
        HKEY *a8,
        unsigned int *a9)
{
  const unsigned __int16 *v9; // rdi
  LSTATUS result; // eax
  wchar_t *v11; // rax
  wchar_t *v12; // rbx
  const WCHAR *v13; // rax
  CNtDeleteKey *v14; // rcx
  int v15; // ebx
  int v16; // ebx
  HKEY v17; // rcx
  LPCWSTR v18; // rbx
  DWORD v19; // eax
  int Key; // ebx
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Reserved; // [rsp+60h] [rbp-A0h]
  LPCWSTR lpSubKey; // [rsp+68h] [rbp-98h]
  HKEY v26; // [rsp+70h] [rbp-90h]
  unsigned int *v27; // [rsp+78h] [rbp-88h]
  LPSECURITY_ATTRIBUTES lpSecurityAttributes; // [rsp+80h] [rbp-80h]
  LPWSTR lpClass; // [rsp+88h] [rbp-78h]
  _BYTE v30[528]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a2;
  lpSecurityAttributes = a7;
  lpClass = a4;
  Reserved = a3;
  v26 = a1;
  v27 = a9;
  if ( a9 )
    *a9 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v11 = wcschr(a2, 0x5Cu);
  v12 = v11;
  if ( v11 )
  {
    if ( (unsigned __int64)(v11 - v9) >= 0x104 )
      return 87;
    _o_wcsncpy_s(v30, 260LL, v9);
    v13 = (const WCHAR *)v30;
    v9 = v12 + 1;
  }
  else
  {
    v13 = v9;
  }
  hKey = 0LL;
  lpSubKey = v13;
  v15 = DetectRegistryLink(v26, v13, samDesired, &hKey);
  if ( (dword_1800CB834 & 1) == 0 )
  {
    dword_1800CB834 |= 1u;
    hLibModule = 0LL;
    qword_1800CB700 = 0LL;
    atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( (unsigned int)(v16 - 1) <= 1 )
    {
      dwDisposition = 0;
      v17 = hKey;
      if ( hKey )
      {
        v18 = lpSubKey;
        v19 = 2;
        dwDisposition = 2;
        goto LABEL_27;
      }
LABEL_23:
      v18 = lpSubKey;
      result = RegCreateKeyExW(
                 v26,
                 lpSubKey,
                 Reserved,
                 lpClass,
                 dwOptions,
                 samDesired,
                 lpSecurityAttributes,
                 &hKey,
                 &dwDisposition);
      if ( result )
        return result;
      v19 = dwDisposition;
      if ( dwDisposition != 1 )
      {
        Key = 5;
        goto LABEL_34;
      }
      v17 = hKey;
LABEL_27:
      if ( v18 == v9 )
      {
        if ( a8 )
          *a8 = v17;
        if ( v27 )
          *v27 = v19;
        return 0;
      }
      Key = SafeRegCreateKeyEx(v17, v9, Reserved, lpClass, dwOptions, samDesired, lpSecurityAttributes, a8, v27);
LABEL_34:
      RegCloseKey(hKey);
      return Key;
    }
  }
  else if ( CNtDeleteKey::Init(v14) && !(qword_1800CB700 ? qword_1800CB700(hKey) : 87) )
  {
    RegCloseKey(hKey);
    hKey = 0LL;
    dwDisposition = 0;
    goto LABEL_23;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 5;
}
