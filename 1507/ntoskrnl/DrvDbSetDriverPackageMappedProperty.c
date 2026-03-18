/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404DD4E0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DDA8C (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegSetValue @ 0x1405575A0 (_PnpCtxRegSetValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140589388 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetDriverPackageSignerName @ 0x14071B3B8 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14071CE8C (DrvDbSetRegValueMappedProperty.c)
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
  int v7; // r10d
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  unsigned int v14; // edx
  _UNKNOWN **i; // r8
  _QWORD *v16; // r9
  __int64 v17; // rcx
  _UNKNOWN **v19; // rcx
  int v20; // eax
  int v21; // edx
  bool v22; // zf
  __int64 v23; // rcx
  PVOID v24; // rsi
  HANDLE v25; // rdx
  int Value; // eax
  size_t v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  HANDLE v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  HANDLE v35; // r8
  int v36; // edx
  __int64 v37; // rax
  int v38; // esi
  HANDLE v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  const wchar_t *v42; // rbx
  HANDLE v43; // r8
  int v44; // r8d
  HANDLE v45; // r8
  HANDLE v46; // r8
  int v47; // edx
  int v48; // r8d
  int v49; // edx
  int v50; // [rsp+40h] [rbp-30h] BYREF
  int v51; // [rsp+44h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  _UNKNOWN **v53; // [rsp+50h] [rbp-20h]
  char *PoolWithTag; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  unsigned int v58; // [rsp+A8h] [rbp+38h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  PoolWithTag = 0LL;
  v11 = a2;
  P = 0LL;
  if ( v7 == 18 )
  {
    v12 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v12 )
      return (unsigned int)-1073741790;
  }
  v14 = 0;
  for ( i = &off_140290F00; ; i += 5 )
  {
    v16 = *i;
    if ( *((_DWORD *)*i + 4) == v7 )
    {
      v17 = *v16 - *(_QWORD *)a4;
      if ( *v16 == *(_QWORD *)a4 )
        v17 = v16[1] - *(_QWORD *)(a4 + 8);
      if ( !v17 )
        break;
    }
    if ( ++v14 >= 0x1A )
      return (unsigned int)-1073741802;
  }
  v19 = &off_140290F00 + 5 * v14;
  v53 = v19;
  if ( !v19 )
    return (unsigned int)-1073741802;
  v20 = a5;
  if ( a5 != *((_DWORD *)v19 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v13 = DrvDbOpenObjectRegKey(a1, 0LL, 2u, v11, 3, 0, &Handle, 0LL);
    if ( v13 < 0 )
      goto LABEL_109;
    v20 = a5;
    v19 = v53;
    v11 = a2;
  }
  v21 = *((_DWORD *)v19 + 8);
  if ( v21 )
  {
    if ( v20 )
      v22 = a7 == v21;
    else
      v22 = a7 == 0;
    if ( !v22 )
    {
      v13 = -1073741823;
      goto LABEL_109;
    }
    v58 = 48;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x42444450u);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_28;
    v25 = Handle;
    if ( a3 )
      v25 = a3;
    Value = PnpCtxRegQueryValue(v23, v25, (__int64)L"Version", (__int64)&v51, (__int64)PoolWithTag, (__int64)&v58);
    v13 = Value;
    if ( Value == -1073741772 )
    {
      memset(v24, 0, 0x30uLL);
      goto LABEL_38;
    }
    if ( Value == -1073741789 )
    {
      v13 = -1073741595;
    }
    else if ( Value >= 0 )
    {
      if ( v51 == 3 && v58 == 48 )
      {
LABEL_38:
        v24 = PoolWithTag;
        v27 = *((unsigned int *)v53 + 8);
        v28 = *((unsigned int *)v53 + 7);
        if ( a5 )
          memmove(&PoolWithTag[v28], Src, v27);
        else
          memset(&PoolWithTag[v28], 0, v27);
        v30 = Handle;
        if ( a3 )
          v30 = a3;
        v31 = PnpCtxRegSetValue(v29, v30, L"Version", 3u, v24, 0x30u);
LABEL_104:
        v13 = v31;
        goto LABEL_105;
      }
      v13 = -1073741823;
    }
LABEL_105:
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_109;
  }
  if ( *(_DWORD *)(a4 + 16) != 7 )
    goto LABEL_62;
  v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
    v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v32 )
  {
LABEL_62:
    v33 = Src;
    goto LABEL_63;
  }
  v33 = Src;
  if ( v20 != 18 )
  {
LABEL_63:
    v34 = a7;
    goto LABEL_64;
  }
  v34 = a7;
  if ( a7 > 2 && Src && !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
  {
    if ( !wcsicmp((const wchar_t *)Src, L"Microsoft Windows") )
    {
      v35 = Handle;
      if ( a3 )
        v35 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore((__int64)a1, v11, v35, (wchar_t *)&v50) >= 0 && v50 == 218103811 )
      {
        v36 = (int)Handle;
        if ( a3 )
          v36 = (int)a3;
        v13 = DrvDbSetRegValueMappedProperty((_DWORD)v33, v36, (_DWORD)v53, 0, 0LL, 0);
        if ( v13 != -1073741275 )
          goto LABEL_109;
        goto LABEL_61;
      }
      goto LABEL_100;
    }
    goto LABEL_62;
  }
LABEL_64:
  if ( *(_DWORD *)(a4 + 16) != 8 )
  {
LABEL_100:
    v38 = a5;
    goto LABEL_101;
  }
  v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
    v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  v38 = a5;
  if ( v37 )
    goto LABEL_101;
  if ( a5 == 7 )
  {
    if ( (_DWORD)v34 != 4 || !v33 )
      goto LABEL_101;
    if ( *v33 == 218103811 )
    {
      v39 = Handle;
      if ( a3 )
        v39 = a3;
      if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v33, v34, v39, 0LL, 0, &v58) == -1073741789
        && v58 == 18 )
      {
        P = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x42444450u);
        v42 = (const wchar_t *)P;
        if ( !P )
        {
LABEL_28:
          v13 = -1073741801;
          goto LABEL_109;
        }
        v43 = Handle;
        if ( a3 )
          v43 = a3;
        if ( (int)DrvDbGetDriverPackageSignerName(v41, v40, v43, P, 18, &v58) >= 0
          && v58
          && !v42[v58 - 1]
          && !wcsicmp(v42, L"Microsoft Windows") )
        {
          v44 = (int)Handle;
          if ( a3 )
            v44 = (int)a3;
          DrvDbSetDriverPackageMappedProperty((int)a1, a2, v44, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
        }
      }
      goto LABEL_101;
    }
  }
  else if ( a5 )
  {
LABEL_101:
    v49 = (int)Handle;
    if ( a3 )
      v49 = (int)a3;
    v31 = DrvDbSetRegValueMappedProperty((_DWORD)v33, v49, (_DWORD)v53, v38, (__int64)Src, a7);
    v24 = PoolWithTag;
    goto LABEL_104;
  }
  v45 = Handle;
  if ( a3 )
    v45 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore((__int64)a1, a2, v45, (wchar_t *)&v50) < 0 || v50 != 218103811 )
    goto LABEL_101;
  v46 = Handle;
  if ( a3 )
    v46 = a3;
  if ( (unsigned int)DrvDbGetDriverPackageSignerName((__int64)v33, 0LL, v46, 0LL, 0, &v58) != -1073741275 )
    goto LABEL_101;
  v47 = (int)Handle;
  if ( a3 )
    v47 = (int)a3;
  v13 = DrvDbSetRegValueMappedProperty((_DWORD)v33, v47, (_DWORD)v53, v38, (__int64)Src, a7);
  if ( v13 < 0 )
    goto LABEL_109;
  v48 = (int)Handle;
  if ( a3 )
    v48 = (int)a3;
  DrvDbSetDriverPackageMappedProperty(
    (int)a1,
    a2,
    v48,
    (int)&DEVPKEY_DriverPackage_SignerName,
    18,
    (void *)L"Microsoft Windows",
    36);
LABEL_61:
  v13 = 0;
LABEL_109:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}
