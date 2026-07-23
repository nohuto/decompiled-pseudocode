/*
 * XREFs of PipCommitPendingService @ 0x1407CF348
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x1404DFCAC (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateKey @ 0x140512D88 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140636F28 (PiDevCfgCopyDeviceKeys.c)
 *     _PnpCtxRegCloseKey @ 0x1406D7150 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D71B8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegEnumKey @ 0x1406D7228 (_PnpCtxRegEnumKey.c)
 */

__int64 __fastcall PipCommitPendingService(const WCHAR *a1, char *a2, void *a3)
{
  char *v4; // rdi
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r9
  char *v13; // [rsp+40h] [rbp-40h] BYREF
  void *v14; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v15; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v16; // [rsp+58h] [rbp-28h] BYREF
  char *v17; // [rsp+60h] [rbp-20h] BYREF
  void *v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  char *v20; // [rsp+A8h] [rbp+28h] BYREF

  v19 = 0LL;
  v4 = a2;
  v16 = 0LL;
  v15 = 0LL;
  v20 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !a2 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 4, &v19);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    CachedContextBaseKey = PnpCtxRegOpenKey(
                             *(_QWORD **)&PiPnpRtlCtx,
                             v19,
                             (int)L"Control\\PendingDriverOperations\\Services",
                             0,
                             131103,
                             (__int64)&v17);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    v4 = v17;
  }
  if ( !a3 )
  {
    CachedContextBaseKey = PnpCtxRegOpenKey(*(_QWORD **)&PiPnpRtlCtx, (int)v4, (int)a1, 0, 131097, (__int64)&v18);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    a3 = v18;
  }
  v8 = PnpCtxRegOpenKey(*(_QWORD **)&PiPnpRtlCtx, (int)v4, (int)L"EventLog", 0, 131103, (__int64)&v13);
  CachedContextBaseKey = v8;
  if ( v8 == -1073741772 || v8 == -1073741444 || v8 >= 0 )
  {
    v9 = PnpCtxRegOpenKey(*(_QWORD **)&PiPnpRtlCtx, (int)v13, (int)a1, 0, 131097, (__int64)&v14);
    CachedContextBaseKey = v9;
    if ( v9 == -1073741772 || v9 == -1073741444 || v9 >= 0 )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 6, (__int64 *)&v20);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v20, a1, v10, 0x20006u, 0LL, &v15, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( !v14
            || (CachedContextBaseKey = PnpCtxRegCreateKey(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         v20,
                                         L"EventLog",
                                         v11,
                                         0x20006u,
                                         0LL,
                                         &v16,
                                         0LL),
                CachedContextBaseKey >= 0)
            && (!v14 || (CachedContextBaseKey = PiDevCfgCopyDeviceKeys(v14, v16, 1, 0LL), CachedContextBaseKey >= 0)) )
          {
            CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v15, 1, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( v14 )
              {
                CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v13, (__int64)a1);
                if ( CachedContextBaseKey < 0 )
                  goto LABEL_28;
                LODWORD(v20) = 0;
                if ( (unsigned int)PnpCtxRegEnumKey(v6, v13, 0, 0LL, (unsigned int *)&v20) == -2147483622 )
                  PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, v13, 0LL);
              }
              CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v4, (__int64)a1);
              if ( CachedContextBaseKey >= 0 )
              {
                LODWORD(v20) = 0;
                if ( (unsigned int)PnpCtxRegEnumKey(v6, v4, 0, 0LL, (unsigned int *)&v20) == -2147483622 )
                  PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, v4, 0LL);
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( v15 )
    PnpCtxRegCloseKey(v6, v15);
  if ( v16 )
    PnpCtxRegCloseKey(v6, v16);
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  if ( v14 )
    PnpCtxRegCloseKey(v6, v14);
  if ( v17 )
    PnpCtxRegCloseKey(v6, v17);
  if ( v18 )
    PnpCtxRegCloseKey(v6, v18);
  return (unsigned int)CachedContextBaseKey;
}
