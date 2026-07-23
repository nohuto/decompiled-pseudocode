/*
 * XREFs of _CmGetDevicesInBaseContainerList @ 0x1406DA694
 * Callers:
 *     _CmMoveBaseContainer @ 0x1406DA8E8 (_CmMoveBaseContainer.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegEnumValue @ 0x1404B90C0 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404B910C (_PnpCtxRegQueryInfoKey.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmGetDevicesInBaseContainerList(__int64 *a1, __int64 a2, __int64 a3, PVOID *a4)
{
  _WORD *v8; // r14
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // edi
  PVOID PoolWithTag; // rax
  __int64 v17; // rcx
  ULONG i; // r15d
  int v20; // eax
  PVOID v21; // rax
  int v22; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v24; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v26);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *a1;
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v26, a2, 0, 1u, (__int64)&v25);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *a1;
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v25, (__int64)L"BaseContainers", 0, 1u, (__int64)&v24);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *a1;
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v24, a3, 0, 3u, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v13, (int)Handle, 0, v14, (__int64)&v22, (__int64)&v26);
          if ( CachedContextBaseKey >= 0 )
          {
            v15 = v22 * (v26 + 1) + 1;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v15, 0x52504E50u);
            *a4 = PoolWithTag;
            v8 = PoolWithTag;
            if ( !PoolWithTag )
            {
              CachedContextBaseKey = -1073741801;
LABEL_14:
              if ( !*a4 )
                goto LABEL_17;
              ExFreePoolWithTag(*a4, 0);
              goto LABEL_16;
            }
            for ( i = 0; ; ++i )
            {
              LODWORD(v26) = v15 - 1;
              v20 = PnpCtxRegEnumValue(v17, Handle, i, v8, (__int64)&v26, 0LL, 0LL, 0);
              CachedContextBaseKey = v20;
              if ( v20 == -2147483622 )
                break;
              if ( v20 < 0 )
                goto LABEL_29;
              v17 = (unsigned int)(v26 + 1);
              v15 -= v17;
              v8 += v17;
            }
            CachedContextBaseKey = 0;
          }
        }
      }
    }
  }
LABEL_29:
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
  if ( CachedContextBaseKey < 0 )
    goto LABEL_14;
  if ( *a4 )
  {
    *v8 = 0;
  }
  else
  {
    v21 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x52504E50u);
    *a4 = v21;
    if ( v21 )
    {
LABEL_16:
      *a4 = 0LL;
      goto LABEL_17;
    }
    CachedContextBaseKey = -1073741801;
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)CachedContextBaseKey;
}
