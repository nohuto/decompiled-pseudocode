/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404E5974 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1404CD43C (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 *     DrvDbGetDriverPackageSignerName @ 0x1406E197C (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1406E33F4 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 **a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        void *Src,
        unsigned int a7)
{
  int v9; // r8d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ebx
  unsigned int v16; // edx
  _UNKNOWN **i; // r9
  _QWORD *v18; // r10
  __int64 v19; // rcx
  _UNKNOWN **v21; // rcx
  int v22; // eax
  int v23; // edx
  bool v24; // zf
  __int64 v25; // rcx
  void *v26; // rdi
  HANDLE v27; // rdx
  int v28; // eax
  size_t v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  HANDLE v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  __int64 v36; // rdx
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rax
  int v40; // edi
  HANDLE v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  const wchar_t *v44; // rbx
  HANDLE v45; // r8
  int v46; // r8d
  int v47; // r8d
  HANDLE v48; // r8
  int v49; // edx
  int v50; // r8d
  int v51; // edx
  int v52; // [rsp+40h] [rbp-30h] BYREF
  int v53; // [rsp+44h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  _UNKNOWN **v55; // [rsp+50h] [rbp-20h]
  char *PoolWithTag; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  int v58; // [rsp+90h] [rbp+20h]
  int v59; // [rsp+98h] [rbp+28h]
  unsigned int v60; // [rsp+A8h] [rbp+38h] BYREF

  v59 = a2;
  v58 = (int)a1;
  v9 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  PoolWithTag = 0LL;
  v11 = a2;
  P = 0LL;
  if ( v9 == 18 )
  {
    v12 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v12 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 29 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( v9 == 30 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
  v16 = 0;
  for ( i = &off_140257DD0; ; i += 5 )
  {
    v18 = *i;
    if ( *((_DWORD *)*i + 4) == v9 )
    {
      v19 = *v18 - *(_QWORD *)a4;
      if ( *v18 == *(_QWORD *)a4 )
        v19 = v18[1] - *(_QWORD *)(a4 + 8);
      if ( !v19 )
        break;
    }
    if ( ++v16 >= 0x1A )
      return (unsigned int)-1073741802;
  }
  v21 = &off_140257DD0 + 5 * v16;
  v55 = v21;
  if ( !v21 )
    return (unsigned int)-1073741802;
  v22 = a5;
  if ( a5 != *((_DWORD *)v21 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v15 = DrvDbOpenObjectRegKey(a1, 0LL, 2, v11, 3, 0, &Handle, 0LL);
    if ( v15 < 0 )
      goto LABEL_117;
    v22 = a5;
    v21 = v55;
    LODWORD(v11) = v59;
  }
  v23 = *((_DWORD *)v21 + 8);
  if ( v23 )
  {
    if ( v22 )
      v24 = a7 == v23;
    else
      v24 = a7 == 0;
    if ( !v24 )
    {
      v15 = -1073741823;
      goto LABEL_117;
    }
    v60 = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_36;
    v27 = Handle;
    if ( a3 )
      v27 = a3;
    v28 = PnpCtxRegQueryValue(v25, v27, L"Version", &v53, PoolWithTag, &v60);
    v15 = v28;
    if ( v28 == -1073741772 )
    {
      memset(v26, 0, 0x30uLL);
      goto LABEL_46;
    }
    if ( v28 == -1073741789 )
    {
      v15 = -1073741595;
    }
    else if ( v28 >= 0 )
    {
      if ( v53 == 3 && v60 == 48 )
      {
LABEL_46:
        v26 = PoolWithTag;
        v29 = *((unsigned int *)v55 + 8);
        v30 = *((unsigned int *)v55 + 7);
        if ( a5 )
          memmove(&PoolWithTag[v30], Src, v29);
        else
          memset(&PoolWithTag[v30], 0, v29);
        v32 = Handle;
        if ( a3 )
          v32 = a3;
        v33 = PnpCtxRegSetValue(v31, v32, L"Version", 3u, v26, 0x30u);
LABEL_112:
        v15 = v33;
        goto LABEL_113;
      }
      v15 = -1073741823;
    }
LABEL_113:
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_117;
  }
  if ( *(_DWORD *)(a4 + 16) != 7 )
    goto LABEL_70;
  v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v34 )
  {
LABEL_70:
    v35 = Src;
    goto LABEL_71;
  }
  v35 = Src;
  if ( v22 != 18 )
  {
LABEL_71:
    v36 = a7;
    goto LABEL_72;
  }
  v36 = a7;
  if ( a7 > 2 && Src && !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
  {
    if ( !wcsicmp((const wchar_t *)Src, L"Microsoft Windows") )
    {
      v37 = (int)Handle;
      if ( a3 )
        v37 = (int)a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(v58, v11, v37, (wchar_t *)&v52) >= 0 && v52 == 218103811 )
      {
        v38 = (int)Handle;
        if ( a3 )
          v38 = (int)a3;
        v15 = DrvDbSetRegValueMappedProperty((_DWORD)v35, v38, (_DWORD)v55, 0, 0LL, 0);
        if ( v15 != -1073741275 )
          goto LABEL_117;
        goto LABEL_69;
      }
      goto LABEL_108;
    }
    goto LABEL_70;
  }
LABEL_72:
  if ( *(_DWORD *)(a4 + 16) != 8 )
  {
LABEL_108:
    v40 = a5;
    goto LABEL_109;
  }
  v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
    v39 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  v40 = a5;
  if ( v39 )
    goto LABEL_109;
  if ( a5 == 7 )
  {
    if ( (_DWORD)v36 != 4 || !v35 )
      goto LABEL_109;
    if ( *v35 == 218103811 )
    {
      v41 = Handle;
      if ( a3 )
        v41 = a3;
      if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v35, v36, (__int64)v41, 0LL, 0, &v60) == -1073741789
        && v60 == 18 )
      {
        P = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
        v44 = (const wchar_t *)P;
        if ( !P )
        {
LABEL_36:
          v15 = -1073741801;
          goto LABEL_117;
        }
        v45 = Handle;
        if ( a3 )
          v45 = a3;
        if ( (int)DrvDbGetDriverPackageSignerName(v43, v42, (__int64)v45, P, 18, &v60) >= 0
          && v60
          && !v44[v60 - 1]
          && !wcsicmp(v44, L"Microsoft Windows") )
        {
          v46 = (int)Handle;
          if ( a3 )
            v46 = (int)a3;
          DrvDbSetDriverPackageMappedProperty(v58, v59, v46, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
        }
      }
      goto LABEL_109;
    }
  }
  else if ( a5 )
  {
LABEL_109:
    v51 = (int)Handle;
    if ( a3 )
      v51 = (int)a3;
    v33 = DrvDbSetRegValueMappedProperty((_DWORD)v35, v51, (_DWORD)v55, v40, (__int64)Src, a7);
    v26 = PoolWithTag;
    goto LABEL_112;
  }
  v47 = (int)Handle;
  if ( a3 )
    v47 = (int)a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(v58, v59, v47, (wchar_t *)&v52) < 0 || v52 != 218103811 )
    goto LABEL_109;
  v48 = Handle;
  if ( a3 )
    v48 = a3;
  if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v35, 0LL, (__int64)v48, 0LL, 0, &v60) != -1073741275 )
    goto LABEL_109;
  v49 = (int)Handle;
  if ( a3 )
    v49 = (int)a3;
  v15 = DrvDbSetRegValueMappedProperty((_DWORD)v35, v49, (_DWORD)v55, v40, (__int64)Src, a7);
  if ( v15 < 0 )
    goto LABEL_117;
  v50 = (int)Handle;
  if ( a3 )
    v50 = (int)a3;
  DrvDbSetDriverPackageMappedProperty(
    v58,
    v59,
    v50,
    (int)&DEVPKEY_DriverPackage_SignerName,
    18,
    (void *)L"Microsoft Windows",
    36);
LABEL_69:
  v15 = 0;
LABEL_117:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v15;
}
