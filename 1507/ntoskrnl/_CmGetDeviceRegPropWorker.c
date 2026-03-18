/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x14043DB74
 * Callers:
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     _MapCmDevicePropertyToRegValue @ 0x140019DB8 (_MapCmDevicePropertyToRegValue.c)
 *     RtlStringCbCopyNExW @ 0x140128260 (RtlStringCbCopyNExW.c)
 *     _MapCmDevicePropertyToRegType @ 0x14012EF48 (_MapCmDevicePropertyToRegType.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x14043DFB0 (_PnpCtxRegQueryValueIndirect.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1404DE8D8 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E4C04 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall CmGetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        wchar_t *a6,
        int *a7,
        __int16 a8)
{
  void *v8; // r10
  __int64 v9; // r11
  int inited; // ebx
  int v13; // r15d
  _BYTE *v14; // rcx
  int v15; // edi
  const wchar_t *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r10
  int v19; // r11d
  int v20; // edx
  NTSTATUS InstallerClassRegProp; // eax
  int v22; // edx
  wchar_t *v24; // rax
  HANDLE v25; // r8
  int DeviceRegProp; // eax
  int v27; // ecx
  int DeviceProperty; // eax
  HANDLE v29; // r9
  int ObjectProperty; // eax
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-E0h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D8h]
  size_t *pcbRemaininga; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+30h] [rbp-D0h]
  unsigned int cbDest; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int cbDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  void *v41; // [rsp+88h] [rbp-78h]
  char v42[8]; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v44[76]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v45; // [rsp+FCh] [rbp-4h]

  v8 = a3;
  v9 = a1;
  v41 = a3;
  v40 = a1;
  inited = 0;
  pszDest = a6;
  Handle = 0LL;
  v37 = 0;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
    goto LABEL_86;
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
    inited = CmOpenDeviceRegKey(v9, (__int64)a2, 0x10u, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_27;
    v13 = cbDest;
    v8 = v41;
    v9 = v40;
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
        v29 = Handle;
        if ( v8 )
          v29 = v8;
        ObjectProperty = PnpGetObjectProperty(
                           v9,
                           (__int64)a2,
                           1u,
                           (__int64)v29,
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
          goto LABEL_27;
        goto LABEL_31;
      }
      goto LABEL_16;
    }
LABEL_56:
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
      goto LABEL_27;
    DeviceProperty = NtPlugPlayGetDeviceProperty(
                       v40,
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
      goto LABEL_27;
    }
    goto LABEL_31;
  }
  switch ( a4 )
  {
    case 29:
      goto LABEL_56;
    case 8:
      v37 = 0;
      v25 = Handle;
      cbDest_4 = 78;
      if ( v8 )
        v25 = v8;
      DeviceRegProp = CmGetDeviceRegProp(
                        v9,
                        (__int64)a2,
                        (__int64)v25,
                        9,
                        (__int64)&v37,
                        (__int64)v44,
                        (__int64)&cbDest_4);
      inited = DeviceRegProp;
      if ( DeviceRegProp != -1073741789 )
      {
        if ( DeviceRegProp )
          goto LABEL_27;
        pcbRemaininga = (size_t *)pszDest;
        v27 = v40;
        v45 = 0;
        *a7 = cbDest;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  v27,
                                  (unsigned int)v44,
                                  0,
                                  8,
                                  (__int64)a5,
                                  (__int64)pcbRemaininga,
                                  (__int64)a7);
        goto LABEL_55;
      }
      inited = -1073741595;
      goto LABEL_27;
    case 15:
      goto LABEL_56;
  }
  if ( a4 <= 19 )
    goto LABEL_16;
  if ( a4 <= 22 )
    goto LABEL_56;
  if ( a4 == 23 )
  {
    v24 = wcschr(a2, 0x5Cu);
    if ( v24 )
    {
      *a7 = (_DWORD)v24 - (_DWORD)a2 + 2;
      *a5 = 1;
      if ( cbDest >= *a7 )
      {
        InstallerClassRegProp = RtlStringCbCopyNExW(
                                  pszDest,
                                  cbDest,
                                  a2,
                                  (unsigned int)*a7 - 2LL,
                                  ppszDestEnd,
                                  pcbRemaining,
                                  dwFlags);
LABEL_55:
        inited = InstallerClassRegProp;
        goto LABEL_27;
      }
      goto LABEL_34;
    }
LABEL_86:
    inited = -1073741811;
    goto LABEL_27;
  }
LABEL_16:
  v16 = MapCmDevicePropertyToRegValue((__int64)v14, a4);
  if ( !v16 )
  {
    inited = -1073741264;
    goto LABEL_27;
  }
  v20 = (int)Handle;
  if ( v18 )
    v20 = v18;
  cbDest_4 = v13;
  InstallerClassRegProp = PnpCtxRegQueryValueIndirect(
                            v19,
                            v20,
                            (_DWORD)v16,
                            (unsigned int)&v37,
                            (__int64)pszDest,
                            (__int64)&cbDest_4,
                            v17);
  if ( InstallerClassRegProp == -1073741772 || InstallerClassRegProp == -1073741444 )
    goto LABEL_31;
  if ( (int)(InstallerClassRegProp + 0x80000000) >= 0 && InstallerClassRegProp != -1073741789 )
    goto LABEL_55;
  if ( (v22 = v37, v37 == 1) && cbDest_4 < 2 || cbDest_4 < 2 && v37 == 7 || v37 == 4 && cbDest_4 != 4 )
  {
LABEL_31:
    inited = -1073741275;
    goto LABEL_27;
  }
  *a7 = cbDest_4;
  *a5 = v22;
  if ( InstallerClassRegProp || !cbDest )
LABEL_34:
    inited = -1073741789;
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
