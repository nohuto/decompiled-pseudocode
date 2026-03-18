/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x140443F94
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404437A8 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140443F94 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1404C7070 (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140443F94 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x1404442A0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x14045D60C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1404C7070 (DrvDbGetDriverPackageSignerScore.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rdi
  void *v9; // rbx
  int v10; // r8d
  _DWORD *v11; // rdx
  int v12; // eax
  unsigned int v13; // r8d
  _UNKNOWN **i; // r11
  _QWORD *v15; // r10
  int DriverPackageMappedProperty; // ebx
  __int64 v17; // rcx
  _UNKNOWN **v18; // rdi
  int v19; // ecx
  unsigned int *v20; // rsi
  int RegValueMappedProperty; // eax
  __int64 v23; // rcx
  char *PoolWithTag; // rsi
  HANDLE v25; // rdx
  int v26; // eax
  _UNKNOWN **v27; // rdx
  NTSTRSAFE_PWSTR v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rax
  HANDLE v31; // r8
  wchar_t *v32; // rcx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // eax
  unsigned int *v36; // rcx
  int v37; // eax
  wchar_t v38[4]; // [rsp+40h] [rbp-38h] BYREF
  char *v39; // [rsp+48h] [rbp-30h] BYREF
  __int64 v40; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-20h] BYREF
  _UNKNOWN **v42; // [rsp+60h] [rbp-18h]
  __int64 v43; // [rsp+A0h] [rbp+28h]
  __int64 v46; // [rsp+B8h] [rbp+40h] BYREF

  v46 = a4;
  v43 = a1;
  v8 = a8;
  v39 = 0LL;
  v9 = a3;
  v40 = 0LL;
  v10 = a2;
  Handle = 0LL;
  v11 = a5;
  *a5 = 0;
  *v8 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  *(_DWORD *)v38 = v12;
  if ( v12 == 18 )
  {
    v33 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v33 )
    {
      if ( !v9 )
      {
        DriverPackageMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 2, v10, 1, 0, (__int64)&Handle, 0LL);
        if ( DriverPackageMappedProperty < 0 )
          goto LABEL_20;
        LODWORD(v9) = (_DWORD)Handle;
        v11 = a5;
        LODWORD(a1) = v43;
      }
      DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                      a1,
                                      a2,
                                      (int)v9,
                                      (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                      (__int64)v11,
                                      pszDest,
                                      a7,
                                      (__int64)v8);
      if ( (int)(DriverPackageMappedProperty + 0x80000000) >= 0 && DriverPackageMappedProperty != -1073741789 )
      {
        v34 = (int)Handle;
        if ( a3 )
          v34 = (int)a3;
        v35 = DrvDbGetDriverPackageMappedProperty(
                v43,
                a2,
                v34,
                (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                (__int64)a5,
                v38,
                4,
                (__int64)a8);
        DriverPackageMappedProperty = v35;
        if ( v35 == -1073741789 )
        {
          DriverPackageMappedProperty = -1073741595;
        }
        else if ( v35 >= 0 )
        {
          v36 = a8;
          if ( *a5 == 7 && *a8 == 4 )
          {
            v37 = *(_DWORD *)v38;
          }
          else
          {
            v37 = -1;
            *(_DWORD *)v38 = -1;
          }
          *a5 = 17;
          *v36 = 1;
          if ( pszDest && a7 )
            *(_BYTE *)pszDest = (v37 != 0) - 1;
          else
            DriverPackageMappedProperty = -1073741789;
        }
      }
      goto LABEL_20;
    }
    v12 = *(_DWORD *)v38;
  }
  v13 = 0;
  for ( i = &off_14023C3D0; ; i += 5 )
  {
    v15 = *i;
    if ( *((_DWORD *)*i + 4) == v12 )
      break;
LABEL_4:
    if ( ++v13 >= 0x1A )
      return (unsigned int)-1073741802;
  }
  v17 = *v15 - *(_QWORD *)a4;
  if ( *v15 == *(_QWORD *)a4 )
    v17 = v15[1] - *(_QWORD *)(a4 + 8);
  if ( v17 )
  {
    v12 = *(_DWORD *)v38;
    goto LABEL_4;
  }
  v18 = &off_14023C3D0 + 5 * v13;
  v42 = v18;
  if ( !v18 )
    return (unsigned int)-1073741802;
  if ( v9 )
  {
    v19 = v40;
LABEL_13:
    if ( *((_DWORD *)v18 + 8) )
    {
      LODWORD(v46) = 48;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
      if ( !PoolWithTag )
      {
        DriverPackageMappedProperty = -1073741801;
        goto LABEL_20;
      }
      v25 = Handle;
      if ( v9 )
        v25 = v9;
      v26 = PnpCtxRegQueryValue(v23, v25, L"Version", &v39, PoolWithTag, &v46);
      DriverPackageMappedProperty = v26;
      if ( v26 == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
        goto LABEL_34;
      }
      if ( v26 == -1073741789 )
      {
        DriverPackageMappedProperty = -1073741595;
        goto LABEL_34;
      }
      if ( v26 < 0 )
        goto LABEL_34;
      if ( (_DWORD)v39 != 3 || (_DWORD)v46 != 48 )
      {
        DriverPackageMappedProperty = -1073741823;
        goto LABEL_34;
      }
      v27 = v42;
      *a5 = *((_DWORD *)v42 + 2);
      v28 = pszDest;
      v29 = *((_DWORD *)v27 + 8);
      *a8 = v29;
      if ( v28 && a7 >= v29 )
      {
        memmove(v28, &PoolWithTag[*((unsigned int *)v27 + 7)], *((unsigned int *)v27 + 8));
        goto LABEL_34;
      }
    }
    else
    {
      v20 = a8;
      if ( v9 )
        v19 = (int)v9;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(
                                 v19,
                                 v19,
                                 (_DWORD)v18,
                                 (_DWORD)v11,
                                 (__int64)pszDest,
                                 a7,
                                 (__int64)a8);
      DriverPackageMappedProperty = RegValueMappedProperty;
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *a5 != 18 || *v20 != 2)
        || *(_DWORD *)(v46 + 16) != 7 )
      {
        goto LABEL_20;
      }
      v30 = *(_QWORD *)v46 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)v46 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v30 = *(_QWORD *)(v46 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v30 )
        goto LABEL_20;
      v31 = Handle;
      if ( a3 )
        v31 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(v43, a2, v31, &v40) < 0 || (_DWORD)v40 != 218103811 )
        goto LABEL_20;
      v32 = pszDest;
      *a5 = 18;
      *v20 = 36;
      if ( v32 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v32, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        DriverPackageMappedProperty = 0;
        goto LABEL_20;
      }
      PoolWithTag = v39;
    }
    DriverPackageMappedProperty = -1073741789;
LABEL_34:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_20;
  }
  DriverPackageMappedProperty = DrvDbOpenObjectRegKey(v43, 0, 2, a2, 1, 0, (__int64)&Handle, 0LL);
  if ( DriverPackageMappedProperty >= 0 )
  {
    v19 = (int)Handle;
    v9 = a3;
    LODWORD(v11) = (_DWORD)a5;
    goto LABEL_13;
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DriverPackageMappedProperty;
}
