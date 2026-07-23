/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0
 * Callers:
 *     DrvDbGetDriverPackageSignerScore @ 0x1404CD43C (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbDispatchDriverPackage @ 0x1404E5974 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E1714 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1404CD43C (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E6F3C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 **a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  HANDLE v9; // rbx
  _DWORD *v11; // rdx
  unsigned int *v12; // rax
  int v13; // r11d
  unsigned int v14; // r8d
  _UNKNOWN **i; // r10
  _QWORD *v16; // r9
  int RegValueMappedProperty; // ebx
  __int64 v18; // rcx
  _UNKNOWN **v19; // rdi
  int v20; // ecx
  unsigned int *v21; // rsi
  __int64 v23; // rcx
  char *PoolWithTag; // rsi
  HANDLE v25; // rdx
  int v26; // eax
  _UNKNOWN **v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // r8d
  wchar_t *v31; // rcx
  __int64 v32; // rax
  int v33; // r8d
  int DriverPackageMappedProperty; // eax
  unsigned int *v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // rax
  unsigned int v43; // edx
  NTSTRSAFE_PWSTR v44; // r8
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
  wchar_t v46[4]; // [rsp+50h] [rbp-21h] BYREF
  int v47[2]; // [rsp+58h] [rbp-19h] BYREF
  NTSTRSAFE_PWSTR v48; // [rsp+60h] [rbp-11h] BYREF
  __int64 v49; // [rsp+68h] [rbp-9h]
  __int64 v50; // [rsp+70h] [rbp-1h]
  __int64 v51; // [rsp+78h] [rbp+7h] BYREF
  HANDLE v52; // [rsp+80h] [rbp+Fh] BYREF
  _UNKNOWN **v53; // [rsp+88h] [rbp+17h]
  __int64 **v54; // [rsp+B8h] [rbp+47h]
  __int64 v56; // [rsp+D0h] [rbp+5Fh] BYREF

  v56 = a4;
  v54 = a1;
  v9 = a3;
  *(_QWORD *)v47 = a3;
  v52 = 0LL;
  v51 = 0LL;
  v11 = a5;
  Handle = 0LL;
  v12 = a8;
  *a5 = 0;
  *v12 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 != 18 )
    goto LABEL_80;
  v32 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
    v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v32 )
  {
LABEL_80:
    if ( v13 == 29 )
    {
      v37 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v37 )
        goto LABEL_81;
    }
    if ( v13 == 30 )
    {
      v38 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
        v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v38 )
      {
LABEL_81:
        if ( !v9 )
        {
          RegValueMappedProperty = DrvDbOpenObjectRegKey(a1, 0LL, 2, a2, 1, 0, &Handle, 0LL);
          if ( RegValueMappedProperty < 0 )
            goto LABEL_22;
          v9 = Handle;
          a1 = v54;
        }
        v39 = *a1;
        v40 = 0LL;
        if ( v39 )
          v40 = *v39;
        RegValueMappedProperty = SysCtxRegOpenKey(v40, (__int64)v9, (__int64)L"Configurations", 0, 9u, (__int64)&v52);
        if ( RegValueMappedProperty == -1073741772 )
          RegValueMappedProperty = -1073741275;
        if ( RegValueMappedProperty >= 0 )
        {
          v41 = *(_DWORD *)(a4 + 16) == 30;
          v49 = 0LL;
          v50 = 0LL;
          v48 = pszDest;
          if ( !v41 )
            goto LABEL_93;
          v42 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
            v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          LOBYTE(v50) = 1;
          if ( v42 )
LABEL_93:
            LOBYTE(v50) = 0;
          if ( pszDest )
            LODWORD(v49) = a7 >> 1;
          else
            LODWORD(v49) = 0;
          RegValueMappedProperty = PnpCtxRegEnumKeyWithCallback(*v54, v52, DrvDbGetConfigurationSubKeyCallback, &v48);
          if ( RegValueMappedProperty >= 0 )
          {
            if ( HIDWORD(v49) )
            {
              v44 = v48;
              RegValueMappedProperty = HIDWORD(v50);
              v43 = ++HIDWORD(v49);
              *a5 = 8210;
              *a8 = 2 * v43;
              if ( v44 && 2 * (unsigned __int64)v43 <= a7 )
                v44[v43 - 1] = 0;
              else
                RegValueMappedProperty = -1073741789;
            }
            else
            {
              RegValueMappedProperty = -1073741275;
            }
          }
          else if ( v50 < 0 )
          {
            RegValueMappedProperty = HIDWORD(v50);
          }
        }
        goto LABEL_22;
      }
    }
    v14 = 0;
    for ( i = &off_140257DD0; ; i += 5 )
    {
      v16 = *i;
      if ( *((_DWORD *)*i + 4) == v13 )
      {
        v18 = *v16 - *(_QWORD *)a4;
        if ( *v16 == *(_QWORD *)a4 )
          v18 = v16[1] - *(_QWORD *)(a4 + 8);
        if ( !v18 )
          break;
      }
      if ( ++v14 >= 0x1A )
        return (unsigned int)-1073741802;
    }
    v19 = &off_140257DD0 + 5 * v14;
    v53 = v19;
    if ( !v19 )
      return (unsigned int)-1073741802;
    if ( v9 )
    {
      v20 = v51;
    }
    else
    {
      RegValueMappedProperty = DrvDbOpenObjectRegKey(v54, 0LL, 2, a2, 1, 0, &Handle, 0LL);
      if ( RegValueMappedProperty < 0 )
        goto LABEL_22;
      v20 = (int)Handle;
      v9 = *(HANDLE *)v47;
      LODWORD(v11) = (_DWORD)a5;
    }
    if ( *((_DWORD *)v19 + 8) )
    {
      LODWORD(v56) = 48;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
      if ( !PoolWithTag )
      {
        RegValueMappedProperty = -1073741801;
        goto LABEL_22;
      }
      v25 = Handle;
      if ( v9 )
        v25 = v9;
      v26 = PnpCtxRegQueryValue(v23, v25, L"Version", v47, PoolWithTag, &v56);
      RegValueMappedProperty = v26;
      if ( v26 == -1073741772 )
      {
        RegValueMappedProperty = -1073741275;
        goto LABEL_38;
      }
      if ( v26 == -1073741789 )
      {
        RegValueMappedProperty = -1073741595;
        goto LABEL_38;
      }
      if ( v26 < 0 )
        goto LABEL_38;
      if ( v47[0] != 3 || (_DWORD)v56 != 48 )
      {
        RegValueMappedProperty = -1073741823;
        goto LABEL_38;
      }
      v27 = v53;
      *a5 = *((_DWORD *)v53 + 2);
      v28 = *((_DWORD *)v27 + 8);
      *a8 = v28;
      if ( pszDest && a7 >= v28 )
      {
        memmove(pszDest, &PoolWithTag[*((unsigned int *)v27 + 7)], *((unsigned int *)v27 + 8));
        goto LABEL_38;
      }
    }
    else
    {
      v21 = a8;
      if ( v9 )
        v20 = (int)v9;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(
                                 v20,
                                 v20,
                                 (_DWORD)v19,
                                 (_DWORD)v11,
                                 (__int64)pszDest,
                                 a7,
                                 (__int64)a8);
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *a5 != 18 || *v21 != 2)
        || *(_DWORD *)(v56 + 16) != 7 )
      {
        goto LABEL_22;
      }
      v29 = *(_QWORD *)v56 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)v56 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v29 = *(_QWORD *)(v56 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v29 )
        goto LABEL_22;
      v30 = (int)Handle;
      if ( *(_QWORD *)v47 )
        v30 = v47[0];
      if ( (int)DrvDbGetDriverPackageSignerScore((int)v54, a2, v30, (wchar_t *)&v51) < 0 || (_DWORD)v51 != 218103811 )
        goto LABEL_22;
      v31 = pszDest;
      *a5 = 18;
      *v21 = 36;
      if ( v31 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v31, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        RegValueMappedProperty = 0;
        goto LABEL_22;
      }
      PoolWithTag = 0LL;
    }
    RegValueMappedProperty = -1073741789;
LABEL_38:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_22;
  }
  if ( v9 )
  {
LABEL_59:
    RegValueMappedProperty = DrvDbGetDriverPackageMappedProperty(
                               (int)a1,
                               a2,
                               (int)v9,
                               (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                               (__int64)v11,
                               pszDest,
                               a7,
                               (__int64)a8);
    if ( (int)(RegValueMappedProperty + 0x80000000) >= 0 && RegValueMappedProperty != -1073741789 )
    {
      v33 = (int)Handle;
      if ( *(_QWORD *)v47 )
        v33 = v47[0];
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      (int)v54,
                                      a2,
                                      v33,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                                      (__int64)a5,
                                      v46,
                                      4,
                                      (__int64)a8);
      RegValueMappedProperty = DriverPackageMappedProperty;
      if ( DriverPackageMappedProperty == -1073741789 )
      {
        RegValueMappedProperty = -1073741595;
      }
      else if ( DriverPackageMappedProperty >= 0 )
      {
        v35 = a8;
        if ( *a5 == 7 && *a8 == 4 )
        {
          v36 = *(_DWORD *)v46;
        }
        else
        {
          v36 = -1;
          *(_DWORD *)v46 = -1;
        }
        *a5 = 17;
        *v35 = 1;
        if ( pszDest && a7 )
          *(_BYTE *)pszDest = (v36 != 0) - 1;
        else
          RegValueMappedProperty = -1073741789;
      }
    }
    goto LABEL_22;
  }
  RegValueMappedProperty = DrvDbOpenObjectRegKey(a1, 0LL, 2, a2, 1, 0, &Handle, 0LL);
  if ( RegValueMappedProperty >= 0 )
  {
    LODWORD(v9) = (_DWORD)Handle;
    v11 = a5;
    LODWORD(a1) = (_DWORD)v54;
    goto LABEL_59;
  }
LABEL_22:
  if ( v52 )
    ZwClose(v52);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
