/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14057EC8C
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14057EA60 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14071842C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x14043DFB0 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x140440574 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        int *a8)
{
  int v8; // r14d
  _BYTE *v10; // r12
  int v12; // ebx
  DEVPROPKEY **v13; // rdx
  int v14; // r10d
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  HANDLE v20; // rdx
  __int64 v21; // r8
  int Value; // eax
  int v23; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  HANDLE v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rax
  int v33; // edi
  const WCHAR *v34; // r8
  HANDLE v35; // rdx
  int ValueIndirect; // eax
  __int64 v37; // rax
  char *v38; // rdx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // [rsp+28h] [rbp-71h]
  int v43; // [rsp+44h] [rbp-55h] BYREF
  int v44; // [rsp+48h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v46; // [rsp+58h] [rbp-41h] BYREF
  int *v47; // [rsp+60h] [rbp-39h]
  HANDLE v48; // [rsp+68h] [rbp-31h] BYREF
  __int64 v49; // [rsp+70h] [rbp-29h]
  wchar_t Str2[12]; // [rsp+78h] [rbp-21h] BYREF

  v8 = 0;
  v10 = (_BYTE *)a6;
  v49 = a2;
  v12 = 0;
  v46 = a1;
  v13 = &off_1407231B0;
  v14 = *(_DWORD *)(a4 + 16);
  v15 = 0;
  v47 = a8;
  Handle = 0LL;
  v48 = 0LL;
  v44 = 0;
  v43 = 0;
  do
  {
    v16 = *v13;
    v17 = v13;
    if ( v14 == (*v13)->pid )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v18 )
        break;
    }
    ++v15;
    v13 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xC );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v8 = a7;
    v10 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  if ( a3 || (v12 = CmOpenInstallerClassRegKey(v46, v49, (__int64)v16, 0LL, 1, 0, (__int64)&Handle, 0LL), v12 >= 0) )
  {
    v19 = *(unsigned int *)(a4 + 16);
    if ( (_DWORD)v19 == 7 )
    {
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v25 )
        goto LABEL_50;
    }
    if ( (_DWORD)v19 == 8 )
    {
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v26 )
        goto LABEL_50;
    }
    if ( (_DWORD)v19 == 9 )
    {
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v27 )
        goto LABEL_50;
    }
    if ( (_DWORD)v19 == 10 )
    {
      v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v28 )
      {
LABEL_50:
        v29 = Handle;
        v30 = (__int64)v17[2];
        v43 = 22;
        if ( a3 )
          v29 = a3;
        Value = PnpCtxRegQueryValue(v19, v29, v30, (__int64)&v44, (__int64)Str2, (__int64)&v43);
        if ( Value != -1073741772 && Value != -1073741444 )
        {
          if ( Value >= 0 )
          {
            *v47 = 1;
            *a5 = *((_DWORD *)v17 + 2);
            if ( v8 )
            {
              Str2[10] = 0;
              v31 = wcsicmp(L"0", Str2);
LABEL_58:
              *v10 = -(v31 != 0);
              goto LABEL_25;
            }
LABEL_57:
            v12 = -1073741789;
            goto LABEL_25;
          }
          goto LABEL_32;
        }
LABEL_33:
        v12 = -1073741275;
        goto LABEL_25;
      }
    }
    if ( (_DWORD)v19 == 2 )
    {
      v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
        v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
      if ( !v32 )
      {
        v33 = 0;
        v12 = -1073741275;
        while ( 1 )
        {
          if ( v33 )
          {
            v34 = &word_1405C95F0;
          }
          else
          {
            v34 = (const WCHAR *)v17[2];
            if ( !v34 )
              goto LABEL_25;
          }
          v35 = Handle;
          v43 = v8;
          if ( a3 )
            v35 = a3;
          ValueIndirect = PnpCtxRegQueryValueIndirect((__int64)v46, (__int64)v35, (__int64)v34);
          v23 = ValueIndirect;
          if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
            break;
          if ( ++v33 >= 2 )
            goto LABEL_25;
        }
        if ( !ValueIndirect || (v12 = ValueIndirect, ValueIndirect == -1073741789) )
          v12 = 0;
        if ( v12 < 0 )
          goto LABEL_25;
        goto LABEL_23;
      }
      v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
        v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
      if ( !v37 )
      {
        v38 = (char *)Handle;
        v39 = (__int64)v17[2];
        if ( a3 )
          v38 = (char *)a3;
        v43 = 4;
        v40 = PnpOpenPropertiesKey(v46, v38, 0LL, 1u, 0, v42, &v48);
        v12 = v40;
        if ( v40 != -1073741772 )
        {
          if ( v40 < 0 )
            goto LABEL_25;
          Value = PnpCtxRegQueryValue(v41, v48, v39, (__int64)&v44, (__int64)&v46, (__int64)&v43);
          if ( Value != -1073741772 && Value != -1073741444 )
          {
            if ( Value >= 0 )
            {
              *v47 = 1;
              *a5 = *((_DWORD *)v17 + 2);
              if ( v8 )
              {
                v31 = (int)v46;
                goto LABEL_58;
              }
              goto LABEL_57;
            }
            goto LABEL_32;
          }
        }
        goto LABEL_33;
      }
    }
    v20 = Handle;
    v21 = (__int64)v17[2];
    if ( a3 )
      v20 = a3;
    v43 = v8;
    Value = PnpCtxRegQueryValueIndirect((__int64)v46, (__int64)v20, v21);
    v23 = Value;
    if ( Value == -1073741772 || Value == -1073741444 )
      goto LABEL_33;
    if ( Value && Value != -1073741789 )
    {
LABEL_32:
      v12 = Value;
      goto LABEL_25;
    }
LABEL_23:
    *v47 = v43;
    *a5 = *((_DWORD *)v17 + 2);
    if ( v23 || !v8 )
      v12 = -1073741789;
  }
LABEL_25:
  if ( v48 )
    ZwClose(v48);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
