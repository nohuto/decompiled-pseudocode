/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034E78
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180034D24 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034E78 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034E78 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGPEAPEAU2@@Z @ 0x1800350C8 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGPEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     atexit @ 0x180047624 (atexit.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x180083A48 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
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
  const wchar_t *v9; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  rsize_t v12; // r9
  wchar_t *v13; // rax
  CNtDeleteKey *v14; // rcx
  int v15; // ebx
  int v16; // ebx
  HKEY v17; // rcx
  LPCWSTR v18; // rbx
  DWORD v19; // eax
  int Key; // ebx
  LSTATUS result; // eax
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD dwDisposition; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Reserved; // [rsp+5Ch] [rbp-A4h]
  LPCWSTR lpSubKey; // [rsp+60h] [rbp-A0h]
  HKEY v27; // [rsp+68h] [rbp-98h]
  LPSECURITY_ATTRIBUTES lpSecurityAttributes; // [rsp+70h] [rbp-90h]
  LPWSTR lpClass; // [rsp+78h] [rbp-88h]
  unsigned int *v30; // [rsp+80h] [rbp-80h]
  wchar_t Destination[264]; // [rsp+90h] [rbp-70h] BYREF

  v9 = a2;
  lpSecurityAttributes = a7;
  lpClass = a4;
  Reserved = a3;
  v27 = a1;
  v30 = a9;
  if ( a9 )
    *a9 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 - v9;
    if ( v12 < 0x104 )
    {
      wcsncpy_s(Destination, 0x104uLL, v9, v12);
      v13 = Destination;
      v9 = v11 + 1;
      goto LABEL_9;
    }
    return 87;
  }
  v13 = (wchar_t *)v9;
LABEL_9:
  hKey = 0LL;
  lpSubKey = v13;
  v15 = DetectRegistryLink(v27, v13, &hKey);
  if ( (dword_1800E64D8 & 1) == 0 )
  {
    dword_1800E64D8 |= 1u;
    hLibModule = 0LL;
    qword_1800E6B68 = 0LL;
    atexit(SafeRegCreateKeyEx_::_19_::_dynamic_atexit_destructor_for__delKey__);
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( CNtDeleteKey::Init(v14) && !(qword_1800E6B68 ? ((__int64 (__fastcall *)(HKEY))qword_1800E6B68)(hKey) : 87) )
    {
      RegCloseKey(hKey);
      hKey = 0LL;
      dwDisposition = 0;
      goto LABEL_26;
    }
LABEL_37:
    if ( hKey )
      RegCloseKey(hKey);
    return 5;
  }
  if ( (unsigned int)(v16 - 1) > 1 )
    goto LABEL_37;
  dwDisposition = 0;
  v17 = hKey;
  if ( !hKey )
  {
LABEL_26:
    v18 = lpSubKey;
    result = RegCreateKeyExW(
               v27,
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
      goto LABEL_17;
    }
    v17 = hKey;
    goto LABEL_15;
  }
  v18 = lpSubKey;
  v19 = 2;
  dwDisposition = 2;
LABEL_15:
  if ( v18 != v9 )
  {
    Key = SafeRegCreateKeyEx(v17, v9, Reserved, lpClass, dwOptions, samDesired, lpSecurityAttributes, a8, v30);
LABEL_17:
    RegCloseKey(hKey);
    return Key;
  }
  if ( a8 )
    *a8 = v17;
  if ( v30 )
    *v30 = v19;
  return 0;
}
