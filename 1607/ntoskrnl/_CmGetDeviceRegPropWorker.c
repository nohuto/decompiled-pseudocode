/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x1404E12F0
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 * Callees:
 *     RtlStringCbCopyNExW @ 0x1400AA68C (RtlStringCbCopyNExW.c)
 *     _MapCmDevicePropertyToRegType @ 0x1400B0B94 (_MapCmDevicePropertyToRegType.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     _MapCmDevicePropertyToRegValue @ 0x1400C1A10 (_MapCmDevicePropertyToRegValue.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14050C7CC (_NtPlugPlayGetDeviceProperty.c)
 */

__int64 __fastcall CmGetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int *a7,
        __int16 a8)
{
  __int64 v8; // r11
  void *v9; // r10
  int inited; // ebx
  unsigned int v13; // r13d
  _BYTE *v14; // rcx
  int v15; // edi
  const wchar_t *v16; // r8
  __int64 v17; // r9
  void *v18; // r10
  __int64 v19; // r11
  __int64 (__fastcall *v20)(__int64, HANDLE, const wchar_t *, int *, NTSTRSAFE_PWSTR, unsigned int *, __int64); // rax
  HANDLE v21; // rdx
  NTSTATUS InstallerClassRegProp; // eax
  int v23; // edx
  HANDLE v25; // r8
  int DeviceRegProp; // eax
  int v27; // ecx
  int DeviceProperty; // eax
  wchar_t *v29; // rax
  int v30; // r9d
  int ObjectProperty; // eax
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-E0h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D8h]
  size_t *pcbRemaininga; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+30h] [rbp-D0h]
  unsigned int cbDest; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int cbDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h]
  char v42[8]; // [rsp+88h] [rbp-78h] BYREF
  void *v43; // [rsp+90h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v45[76]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v46; // [rsp+FCh] [rbp-4h]

  v8 = a1;
  v9 = a3;
  v41 = a1;
  inited = 0;
  v43 = a3;
  pszDest = a6;
  Handle = 0LL;
  v38 = 0;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
    goto LABEL_88;
  v13 = *a7;
  if ( !*a7 )
  {
    pszDest = 0LL;
    goto LABEL_6;
  }
  if ( !a6 )
    return (unsigned int)-1073741811;
LABEL_6:
  *a7 = 0;
  cbDest = v13;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 )
    return (unsigned int)-1073741264;
  v14 = DevicePropertyRead;
  if ( !DevicePropertyRead[a4] )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    inited = CmOpenDeviceRegKey(v8, (__int64)a2, 0x10u, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_29;
    v13 = cbDest;
    v9 = v43;
    v8 = v41;
  }
  v15 = 8;
  if ( a4 > 29 )
  {
    if ( a4 < 31 )
      goto LABEL_16;
    if ( a4 > 33 && a4 != 35 )
    {
      if ( a4 == 36 )
      {
        v30 = (int)Handle;
        if ( v9 )
          v30 = (int)v9;
        ObjectProperty = PnpGetObjectProperty(
                           v8,
                           (_DWORD)a2,
                           1,
                           v30,
                           0LL,
                           (__int64)&DEVPKEY_Device_LocationPaths,
                           (__int64)v42,
                           (__int64)pszDest,
                           v13,
                           (__int64)a7,
                           0);
        *a5 = 7;
        inited = ObjectProperty;
        if ( ObjectProperty != -1073741772 )
          goto LABEL_29;
        goto LABEL_33;
      }
      goto LABEL_16;
    }
LABEL_50:
    if ( a4 <= 31 )
    {
      switch ( a4 )
      {
        case 31:
          v15 = 5;
          break;
        case 15:
          v15 = 1;
          break;
        case 20:
          v15 = 2;
          break;
        case 21:
          v15 = 3;
          break;
        case 22:
          v15 = 4;
          break;
      }
    }
    else if ( a4 == 32 )
    {
      v15 = 6;
    }
    else if ( a4 == 33 )
    {
      v15 = 10;
    }
    else
    {
      v15 = 11;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      goto LABEL_29;
    DeviceProperty = NtPlugPlayGetDeviceProperty(
                       v41,
                       (unsigned int)&DestinationString,
                       v15,
                       (_DWORD)pszDest,
                       v13,
                       (__int64)&cbDest);
    inited = DeviceProperty;
    if ( DeviceProperty != -1073741772 )
    {
      if ( (int)(DeviceProperty + 0x80000000) < 0 || DeviceProperty == -1073741789 )
      {
        *a7 = cbDest;
        *a5 = MapCmDevicePropertyToRegType(a4);
      }
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  switch ( a4 )
  {
    case 29:
      goto LABEL_50;
    case 8:
      v25 = Handle;
      v38 = 0;
      if ( v9 )
        v25 = v9;
      cbDest_4 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        v8,
                        (__int64)a2,
                        (__int64)v25,
                        9,
                        (__int64)&v38,
                        (__int64)v45,
                        (__int64)&cbDest_4,
                        0);
      inited = DeviceRegProp;
      if ( DeviceRegProp != -1073741789 )
      {
        if ( DeviceRegProp )
          goto LABEL_29;
        pcbRemaininga = (size_t *)pszDest;
        v27 = v41;
        v46 = 0;
        *a7 = cbDest;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  v27,
                                  (unsigned int)v45,
                                  0,
                                  8,
                                  (__int64)a5,
                                  (__int64)pcbRemaininga,
                                  (__int64)a7);
        goto LABEL_47;
      }
      inited = -1073741595;
      goto LABEL_29;
    case 15:
      goto LABEL_50;
  }
  if ( a4 <= 19 )
    goto LABEL_16;
  if ( a4 <= 22 )
    goto LABEL_50;
  if ( a4 == 23 )
  {
    v29 = wcschr(a2, 0x5Cu);
    if ( v29 )
    {
      *a7 = (_DWORD)v29 - (_DWORD)a2 + 2;
      *a5 = 1;
      if ( cbDest >= *a7 )
      {
        InstallerClassRegProp = RtlStringCbCopyNExW(pszDest, cbDest, a2, *a7 - 2LL, ppszDestEnd, pcbRemaining, dwFlags);
LABEL_47:
        inited = InstallerClassRegProp;
        goto LABEL_29;
      }
      goto LABEL_38;
    }
LABEL_88:
    inited = -1073741811;
    goto LABEL_29;
  }
LABEL_16:
  v16 = MapCmDevicePropertyToRegValue((__int64)v14, a4);
  if ( !v16 )
  {
    inited = -1073741264;
    goto LABEL_29;
  }
  v20 = *(__int64 (__fastcall **)(__int64, HANDLE, const wchar_t *, int *, NTSTRSAFE_PWSTR, unsigned int *, __int64))(v19 + 344);
  v21 = Handle;
  if ( v18 )
    v21 = v18;
  cbDest_4 = v13;
  if ( !v20 )
    v20 = (__int64 (__fastcall *)(__int64, HANDLE, const wchar_t *, int *, NTSTRSAFE_PWSTR, unsigned int *, __int64))&PnpRegQueryValueIndirect;
  InstallerClassRegProp = v20(v19, v21, v16, &v38, pszDest, &cbDest_4, v17);
  if ( InstallerClassRegProp == -1073741772 || InstallerClassRegProp == -1073741444 )
    goto LABEL_33;
  if ( (int)(InstallerClassRegProp + 0x80000000) >= 0 && InstallerClassRegProp != -1073741789 )
    goto LABEL_47;
  if ( (v23 = v38, v38 == 1) && cbDest_4 < 2 || v38 == 7 && cbDest_4 < 2 || v38 == 4 && cbDest_4 != 4 )
  {
LABEL_33:
    inited = -1073741275;
    goto LABEL_29;
  }
  *a7 = cbDest_4;
  *a5 = v23;
  if ( InstallerClassRegProp || !cbDest )
LABEL_38:
    inited = -1073741789;
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
