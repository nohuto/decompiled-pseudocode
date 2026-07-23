/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x1406E0D84
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x1406E0C24 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegEnumValue @ 0x1404B90C0 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404B910C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpDeletePropertyWorker @ 0x1404D2D04 (_PnpDeletePropertyWorker.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D71B8 (_PnpCtxRegDeleteKey.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 **a1, __int64 a2, const wchar_t *a3, unsigned int a4)
{
  PVOID PoolWithTag; // r15
  unsigned int v5; // r13d
  wchar_t *v6; // r14
  __int64 v8; // rsi
  int v10; // eax
  int InfoKey; // ebx
  __int64 v12; // rcx
  signed int i; // eax
  __int64 v14; // rbx
  __int64 j; // rsi
  int v16; // eax
  __int64 v17; // rbx
  size_t v18; // rbx
  wchar_t *v19; // rax
  char *k; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  wchar_t *v26; // rax
  bool v27; // zf
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned int v31; // edi
  __int64 v32; // rcx
  PVOID v33; // rsi
  int v34; // eax
  __int64 v35; // rcx
  __int64 dwFlags; // [rsp+28h] [rbp-28h]
  int v38; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v41; // [rsp+A8h] [rbp+58h] BYREF

  Handle = 0LL;
  PoolWithTag = 0LL;
  v5 = 0;
  v6 = 0LL;
  v8 = a2;
  if ( a4 <= 1 )
  {
    v10 = PnpCtxRegDeleteTree((__int64)*a1, a2, (__int64)a3);
    InfoKey = v10;
    goto LABEL_3;
  }
  if ( *a1 )
    v12 = **a1;
  else
    v12 = 0LL;
  v10 = SysCtxRegOpenKey(v12, a2, (__int64)a3, 0, 0x3001Fu, (__int64)&Handle);
  InfoKey = v10;
  if ( v10 < 0 )
  {
LABEL_3:
    if ( v10 == -1073741444 )
      InfoKey = 0;
    goto LABEL_69;
  }
  for ( i = PnpGetGenericStorePropertyKeys(*a1, (int)Handle, 0LL, 0, 0LL, 0, &v41);
        ;
        i = PnpGetGenericStorePropertyKeys(*a1, (int)Handle, 0LL, 0, (__int64)PoolWithTag, v14, &v41) )
  {
    InfoKey = i;
    if ( i != -1073741789 )
      break;
    v14 = v41;
    if ( v41 <= v5 )
    {
      InfoKey = -1073741595;
      goto LABEL_67;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v5 = v14;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v14, 0x42444450u);
    if ( !PoolWithTag )
    {
      InfoKey = -1073741801;
      break;
    }
  }
  if ( InfoKey != -1073741275 )
  {
    if ( InfoKey < 0 )
      goto LABEL_67;
    for ( j = 0LL; (unsigned int)j < v5; j = (unsigned int)(j + 1) )
    {
      v16 = PnpDeletePropertyWorker((__int64)*a1, (__int64)Handle, 0LL, (__int64)PoolWithTag + 20 * j, 0, dwFlags, 0);
      InfoKey = v16;
      if ( v16 == -1073741275 || v16 == -1073741790 )
      {
        InfoKey = 0;
      }
      else if ( v16 < 0 )
      {
        goto LABEL_67;
      }
    }
    if ( InfoKey < 0 )
      goto LABEL_67;
    v8 = a2;
  }
  if ( !wcschr(a3, 0x5Cu) )
  {
    v28 = PnpCtxRegDeleteKey((__int64)*a1, (char *)Handle, 0LL);
    InfoKey = v28;
    if ( v28 == -1073741444 )
    {
      InfoKey = 0;
      goto LABEL_67;
    }
    if ( v28 != -1073741535 )
      goto LABEL_67;
    InfoKey = PnpCtxRegQueryInfoKey(v29, (int)Handle, 0, v30, (__int64)&v41, (__int64)&v38);
    if ( InfoKey < 0 )
      goto LABEL_67;
    v31 = v38 + 1;
    if ( !v41 )
      goto LABEL_67;
    v33 = ExAllocatePoolWithTag(PagedPool, 2LL * v31, 0x42444450u);
    if ( v33 )
    {
      while ( 1 )
      {
        v41 = v31;
        v34 = PnpCtxRegEnumValue(v32, Handle, 0, v33, (__int64)&v41, 0LL, 0LL, 0);
        InfoKey = v34;
        if ( v34 < 0 )
          break;
        InfoKey = PnpCtxRegDeleteValue(v35, Handle, (const WCHAR *)v33);
        if ( ((InfoKey + 0x80000000) & 0x80000000) == 0 && InfoKey != -1073741772 )
          goto LABEL_64;
      }
      if ( v34 == -2147483622 )
        InfoKey = 0;
LABEL_64:
      ExFreePoolWithTag(v33, 0);
      goto LABEL_65;
    }
LABEL_33:
    InfoKey = -1073741801;
    goto LABEL_67;
  }
  v17 = -1LL;
  do
    ++v17;
  while ( a3[v17] );
  v18 = v17 + 1;
  v19 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v18, 0x42444450u);
  v6 = v19;
  if ( !v19 )
    goto LABEL_33;
  RtlStringCchCopyExW(v19, v18, a3, 0LL, 0LL, 0x900u);
  for ( k = (char *)Handle; ; k = 0LL )
  {
    if ( !k )
    {
      v21 = 0LL;
      if ( *a1 )
        v21 = **a1;
      v22 = SysCtxRegOpenKey(v21, v8, (__int64)v6, 0, 0x3001Fu, (__int64)&Handle);
      InfoKey = v22;
      if ( v22 < 0 )
      {
        v27 = v22 == -1073741444;
        goto LABEL_49;
      }
      InfoKey = PnpCtxRegQueryInfoKey(v23, (int)Handle, (int)&v38, v24, (__int64)&v41, 0LL);
      if ( InfoKey < 0 || v38 || v41 )
        goto LABEL_65;
      k = (char *)Handle;
    }
    v25 = PnpCtxRegDeleteKey((__int64)*a1, k, 0LL);
    InfoKey = v25;
    if ( v25 == -1073741444 )
    {
      InfoKey = 0;
      goto LABEL_46;
    }
    if ( v25 < 0 )
      break;
LABEL_46:
    v26 = wcsrchr(v6, 0x5Cu);
    if ( !v26 )
      goto LABEL_65;
    *v26 = 0;
    ZwClose(Handle);
    Handle = 0LL;
  }
  v27 = v25 == -1073741535;
LABEL_49:
  if ( v27 )
    InfoKey = 0;
LABEL_65:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_67:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_69:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InfoKey;
}
