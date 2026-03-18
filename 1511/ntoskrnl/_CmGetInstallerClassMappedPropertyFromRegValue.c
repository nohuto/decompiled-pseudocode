/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14046082C
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x140460640 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1406985C8 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140441644 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DE0A0 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  unsigned int v8; // r14d
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
  int v22; // eax
  int v23; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  HANDLE v29; // rdx
  const WCHAR *v30; // r8
  int v31; // eax
  __int64 v32; // rax
  int v33; // edi
  const WCHAR *v34; // r8
  HANDLE v35; // rdx
  int ValueIndirect; // eax
  __int64 v37; // rax
  HANDLE v38; // rdx
  const WCHAR *v39; // rdi
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // [rsp+28h] [rbp-71h]
  unsigned int v43; // [rsp+44h] [rbp-55h] BYREF
  int v44; // [rsp+48h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v46; // [rsp+58h] [rbp-41h] BYREF
  _DWORD *v47; // [rsp+60h] [rbp-39h]
  HANDLE v48; // [rsp+68h] [rbp-31h] BYREF
  __int64 v49; // [rsp+70h] [rbp-29h]
  wchar_t Str2[12]; // [rsp+78h] [rbp-21h] BYREF

  v8 = 0;
  v10 = (_BYTE *)a6;
  v49 = a2;
  v12 = 0;
  v46 = a1;
  v13 = &off_1406A2FC0;
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
  if ( a3 || (v12 = CmOpenInstallerClassRegKey((_DWORD)v46, v49, 32, 0, 1, 0, (__int64)&Handle, 0LL), v12 >= 0) )
  {
    v19 = *(unsigned int *)(a4 + 16);
    if ( (_DWORD)v19 == 7 )
    {
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v25 )
        goto LABEL_48;
    }
    if ( (_DWORD)v19 == 8 )
    {
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v26 )
        goto LABEL_48;
    }
    if ( (_DWORD)v19 == 9 )
    {
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v27 )
        goto LABEL_48;
    }
    if ( (_DWORD)v19 == 10 )
    {
      v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v28 )
      {
LABEL_48:
        v29 = Handle;
        v30 = (const WCHAR *)v17[2];
        v43 = 22;
        if ( a3 )
          v29 = a3;
        v22 = PnpCtxRegQueryValue(v19, v29, v30, &v44, Str2, &v43);
        if ( v22 != -1073741772 && v22 != -1073741444 )
        {
          if ( v22 >= 0 )
          {
            *v47 = 1;
            *a5 = *((_DWORD *)v17 + 2);
            if ( v8 )
            {
              Str2[10] = 0;
              v31 = wcsicmp(L"0", Str2);
LABEL_57:
              *v10 = -(v31 != 0);
              goto LABEL_22;
            }
LABEL_56:
            v12 = -1073741789;
            goto LABEL_22;
          }
          goto LABEL_55;
        }
        goto LABEL_21;
      }
    }
    if ( (_DWORD)v19 != 2 )
      goto LABEL_18;
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
          v34 = &word_140551830;
        }
        else
        {
          v34 = (const WCHAR *)v17[2];
          if ( !v34 )
            goto LABEL_22;
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
          goto LABEL_22;
      }
      if ( !ValueIndirect || (v12 = ValueIndirect, ValueIndirect == -1073741789) )
        v12 = 0;
      if ( v12 < 0 )
        goto LABEL_22;
      goto LABEL_29;
    }
    v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
      v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
    if ( v37 )
    {
LABEL_18:
      v20 = Handle;
      v21 = (__int64)v17[2];
      if ( a3 )
        v20 = a3;
      v43 = v8;
      v22 = PnpCtxRegQueryValueIndirect((__int64)v46, (__int64)v20, v21);
      v23 = v22;
      if ( v22 != -1073741772 && v22 != -1073741444 )
      {
        if ( v22 && v22 != -1073741789 )
        {
LABEL_55:
          v12 = v22;
          goto LABEL_22;
        }
LABEL_29:
        *v47 = v43;
        *a5 = *((_DWORD *)v17 + 2);
        if ( v23 || !v8 )
          v12 = -1073741789;
        goto LABEL_22;
      }
    }
    else
    {
      v38 = Handle;
      v39 = (const WCHAR *)v17[2];
      if ( a3 )
        v38 = a3;
      v43 = 4;
      v40 = PnpOpenPropertiesKey(v46, (__int64)v38, 0LL, 1u, 0, v42, &v48);
      v12 = v40;
      if ( v40 != -1073741772 )
      {
        if ( v40 < 0 )
          goto LABEL_22;
        v22 = PnpCtxRegQueryValue(v41, v48, v39, &v44, &v46, &v43);
        if ( v22 != -1073741772 && v22 != -1073741444 )
        {
          if ( v22 >= 0 )
          {
            *v47 = 1;
            *a5 = *((_DWORD *)v17 + 2);
            if ( v8 )
            {
              v31 = (int)v46;
              goto LABEL_57;
            }
            goto LABEL_56;
          }
          goto LABEL_55;
        }
      }
    }
LABEL_21:
    v12 = -1073741275;
  }
LABEL_22:
  if ( v48 )
    ZwClose(v48);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
