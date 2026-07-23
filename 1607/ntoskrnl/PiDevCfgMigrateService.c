/*
 * XREFs of PiDevCfgMigrateService @ 0x14063AEE4
 * Callers:
 *     PipMigrateServiceCallback @ 0x1407CEE24 (PipMigrateServiceCallback.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegCopyTree @ 0x1406D7158 (_PnpCtxRegCopyTree.c)
 */

__int64 __fastcall PiDevCfgMigrateService(__int64 a1, __int64 a2, void *a3)
{
  void *v3; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ecx
  HANDLE v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( a3 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 6, &v13);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v7 = **(_QWORD **)&PiPnpRtlCtx;
      else
        v7 = 0LL;
      v8 = SysCtxRegOpenKey(v7, v13, a2, 0, 2u, (__int64)&v12);
      CachedContextBaseKey = v8;
      if ( v8 == -1073741772 )
      {
        CachedContextBaseKey = 0;
      }
      else if ( v8 >= 0 )
      {
        CachedContextBaseKey = PnpCtxRegCopyTree(v9, (_DWORD)a3, 0, (_DWORD)v12, 0LL);
        if ( CachedContextBaseKey >= 0 )
          PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, 0LL, a2);
      }
    }
    v3 = a3;
  }
  else
  {
    CachedContextBaseKey = -1073741811;
  }
  if ( v3 && v3 != a3 )
    ZwClose(v3);
  if ( v12 )
    ZwClose(v12);
  return (unsigned int)CachedContextBaseKey;
}
