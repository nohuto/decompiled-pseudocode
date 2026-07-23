/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404BBA40
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x1404BB8B8 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1406DDFF0 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DA9EC (_CmOpenInstallerClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1404E4524 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        int *a8)
{
  _BYTE *v9; // r12
  DEVPROPKEY **v12; // rdx
  int v13; // r10d
  int v14; // ebx
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rsi
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // eax
  int v21; // edx
  DEVPROPKEY *v22; // r8
  int v23; // eax
  int v24; // ecx
  int v26; // eax
  __int64 v27; // rcx
  HANDLE v28; // rdx
  DEVPROPKEY *v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  int v32; // edi
  const WCHAR *v33; // r8
  int v34; // edx
  int ValueIndirect; // eax
  __int64 v36; // rax
  HANDLE v37; // rdx
  DEVPROPKEY *v38; // rdi
  int v39; // eax
  __int64 v40; // rcx
  int v41; // [rsp+20h] [rbp-69h]
  _BYTE v42[4]; // [rsp+40h] [rbp-49h] BYREF
  int v43; // [rsp+44h] [rbp-45h] BYREF
  int v44; // [rsp+48h] [rbp-41h] BYREF
  __int64 v45; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  int *v47; // [rsp+60h] [rbp-29h]
  HANDLE v48; // [rsp+68h] [rbp-21h]
  wchar_t Str2[12]; // [rsp+70h] [rbp-19h] BYREF

  v9 = (_BYTE *)a6;
  v45 = a1;
  v47 = a8;
  v12 = &off_1406EB3D0;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0;
  Handle = 0LL;
  v15 = 0;
  v48 = 0LL;
  v44 = 0;
  v43 = 0;
  v42[0] = 0;
  do
  {
    v16 = *v12;
    v17 = v12;
    if ( v13 == (*v12)->pid )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v18 )
        break;
    }
    ++v15;
    v12 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xD );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v19 = a7;
    v9 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v19 = 0;
  }
  if ( a3 || (v14 = CmOpenInstallerClassRegKey(v45, a2, (_DWORD)v16, 0, 1, 0, (__int64)&Handle, 0LL), v14 >= 0) )
  {
    v20 = *(_DWORD *)(a4 + 16);
    if ( v20 == 7 )
    {
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v27 )
        goto LABEL_56;
    }
    if ( v20 == 8 )
    {
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v27 )
        goto LABEL_56;
    }
    if ( v20 == 9 )
    {
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v27 )
        goto LABEL_56;
    }
    if ( v20 == 10 )
    {
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v27 )
        goto LABEL_56;
    }
    if ( v20 == 15 )
    {
      v27 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
        v27 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v27 )
      {
LABEL_56:
        v28 = Handle;
        v29 = v17[2];
        v43 = 22;
        if ( a3 )
          v28 = a3;
        v23 = PnpCtxRegQueryValue(v27, v28, v29, &v44, Str2, &v43);
        if ( v23 != -1073741772 && v23 != -1073741444 )
        {
          if ( v23 >= 0 )
          {
            *v47 = 1;
            *a5 = *((_DWORD *)v17 + 2);
            if ( v19 )
            {
              Str2[10] = 0;
              v30 = wcsicmp(L"0", Str2);
LABEL_65:
              *v9 = -(v30 != 0);
              goto LABEL_23;
            }
LABEL_64:
            v14 = -1073741789;
            goto LABEL_23;
          }
          goto LABEL_63;
        }
        goto LABEL_22;
      }
    }
    if ( v20 != 2 )
      goto LABEL_19;
    v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
      v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
    if ( !v31 )
    {
      v32 = 0;
      v14 = -1073741275;
      while ( 1 )
      {
        if ( v32 )
        {
          v33 = &word_1405841A0;
        }
        else
        {
          v33 = (const WCHAR *)v17[2];
          if ( !v33 )
            goto LABEL_23;
        }
        v34 = (int)Handle;
        v43 = v19;
        if ( a3 )
          v34 = (int)a3;
        ValueIndirect = PnpCtxRegQueryValueIndirect(
                          v45,
                          v34,
                          (_DWORD)v33,
                          (unsigned int)&v44,
                          (__int64)v9,
                          (__int64)&v43,
                          (__int64)v42);
        v24 = ValueIndirect;
        if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
          break;
        if ( ++v32 >= 2 )
          goto LABEL_23;
      }
      if ( !ValueIndirect || (v14 = ValueIndirect, ValueIndirect == -1073741789) )
        v14 = 0;
      if ( v14 < 0 )
        goto LABEL_23;
      goto LABEL_30;
    }
    v36 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
      v36 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
    if ( v36 )
    {
LABEL_19:
      v21 = (int)Handle;
      v22 = v17[2];
      if ( a3 )
        v21 = (int)a3;
      v43 = v19;
      v23 = PnpCtxRegQueryValueIndirect(
              v45,
              v21,
              (_DWORD)v22,
              (unsigned int)&v44,
              (__int64)v9,
              (__int64)&v43,
              (__int64)v42);
      v24 = v23;
      if ( v23 != -1073741772 && v23 != -1073741444 )
      {
        if ( v23 && v23 != -1073741789 )
        {
LABEL_63:
          v14 = v23;
          goto LABEL_23;
        }
LABEL_30:
        *v47 = v43;
        v26 = *((_DWORD *)v17 + 2);
        *a5 = v26;
        if ( v24 || !v19 )
          v14 = -1073741789;
        if ( v42[0] && v26 == 18 )
          *a5 = 25;
        goto LABEL_23;
      }
    }
    else
    {
      v37 = Handle;
      v38 = v17[2];
      if ( a3 )
        v37 = a3;
      LOBYTE(v41) = 0;
      v43 = 4;
      v39 = PnpOpenPropertiesKey(v45, v37, 0LL, 1LL, v41);
      v14 = v39;
      if ( v39 != -1073741772 )
      {
        if ( v39 < 0 )
          goto LABEL_23;
        v23 = PnpCtxRegQueryValue(v40, v48, v38, &v44, &v45, &v43);
        if ( v23 != -1073741772 && v23 != -1073741444 )
        {
          if ( v23 >= 0 )
          {
            *v47 = 1;
            *a5 = *((_DWORD *)v17 + 2);
            if ( v19 )
            {
              v30 = v45;
              goto LABEL_65;
            }
            goto LABEL_64;
          }
          goto LABEL_63;
        }
      }
    }
LABEL_22:
    v14 = -1073741275;
  }
LABEL_23:
  if ( v48 )
    ZwClose(v48);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v14;
}
