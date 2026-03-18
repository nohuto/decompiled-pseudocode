/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140719200
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140718E1C (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x140440574 (_CmOpenInstallerClassRegKey.c)
 *     _PnpCtxRegSetValue @ 0x1405575A0 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegValue(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // r11d
  int v8; // ebx
  DEVPROPKEY **v10; // r9
  unsigned int i; // r10d
  DEVPROPKEY *v15; // rdx
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  const WCHAR *v20; // r14
  ULONG v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  wchar_t *v26; // rax
  HANDLE v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  char *v30; // rdx
  __int64 v31; // rax
  HANDLE v32; // rdx
  int v33; // eax
  __int64 v35; // [rsp+28h] [rbp-38h]
  int v36; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v37; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v37 = 0LL;
  Handle = 0LL;
  v10 = &off_1407231B0;
  for ( i = 0; i < 0xC; ++i )
  {
    v15 = *v10;
    v16 = v10;
    if ( v7 == (*v10)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    v10 += 4;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return (unsigned int)-1073741811;
    }
    else if ( a5 >= 2 )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( a3 || (v8 = CmOpenInstallerClassRegKey(a1, a2, 0LL, (__int64)v10, 3, 0, (__int64)&v37, 0LL), v8 >= 0) )
  {
    v19 = *(unsigned int *)(a4 + 16);
    v20 = (const WCHAR *)v16[2];
    v21 = *((_DWORD *)v16 + 6);
    if ( (_DWORD)v19 == 7 )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v22 )
        goto LABEL_32;
    }
    if ( (_DWORD)v19 == 8 )
    {
      v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v23 )
        goto LABEL_32;
    }
    if ( (_DWORD)v19 == 9 )
    {
      v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v24 )
        goto LABEL_32;
    }
    if ( (_DWORD)v19 != 10 )
      goto LABEL_47;
    v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
      v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
    if ( v25 )
    {
LABEL_47:
      if ( (_DWORD)v19 != 2 )
        goto LABEL_61;
      v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
        v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
      if ( v29 )
      {
LABEL_61:
        if ( (_DWORD)v19 != 3 )
          goto LABEL_62;
        v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1 )
          v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassName.fmtid.Data4;
        if ( v31 || a7 <= 0x40 )
        {
LABEL_62:
          v32 = v37;
          if ( a3 )
            v32 = a3;
          v33 = PnpCtxRegSetValue(v19, v32, v20, v21, a6, a7);
          if ( v33 < 0 )
            v8 = v33;
          goto LABEL_66;
        }
        goto LABEL_33;
      }
      if ( !a7 )
      {
LABEL_33:
        v8 = -1073741811;
        goto LABEL_66;
      }
      if ( *a6 == 0xFF )
      {
        v36 = 1;
      }
      else
      {
        if ( *a6 )
          goto LABEL_33;
        v36 = 0;
      }
      v30 = (char *)v37;
      if ( a3 )
        v30 = (char *)a3;
      v8 = PnpOpenPropertiesKey(a1, v30, 0LL, 2u, 1, v35, &Handle);
      if ( v8 < 0 )
        goto LABEL_66;
      v27 = Handle;
      v26 = (wchar_t *)&v36;
    }
    else
    {
LABEL_32:
      if ( !a7 )
        goto LABEL_33;
      LOBYTE(v19) = *a6;
      if ( *a6 == 0xFF )
      {
        v26 = L"1";
      }
      else
      {
        if ( (_BYTE)v19 )
          goto LABEL_33;
        v26 = (wchar_t *)L"0";
      }
      v27 = v37;
      if ( a3 )
        v27 = a3;
    }
    v28 = PnpCtxRegSetValue(v19, v27, v20, v21, v26, 4u);
    if ( v28 == -1073741444 )
    {
      v8 = -1073741772;
    }
    else if ( v28 < 0 )
    {
      v8 = v28;
    }
  }
LABEL_66:
  if ( Handle )
    ZwClose(Handle);
  if ( v37 )
    ZwClose(v37);
  return (unsigned int)v8;
}
