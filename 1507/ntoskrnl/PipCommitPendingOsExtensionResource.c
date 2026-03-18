/*
 * XREFs of PipCommitPendingOsExtensionResource @ 0x1407FA0AC
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x140435B7C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateKey @ 0x1404DDA14 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegEnumKey @ 0x14058BF10 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406852B8 (PiDevCfgCopyDeviceKeys.c)
 *     _PnpCtxRegCloseKey @ 0x14071233C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegDeleteKey @ 0x1407123A4 (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall PipCommitPendingOsExtensionResource(__int64 a1, char *a2, void *a3)
{
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  void *v12; // [rsp+48h] [rbp-28h] BYREF
  void *v13; // [rsp+50h] [rbp-20h] BYREF
  char *v14; // [rsp+58h] [rbp-18h] BYREF
  void *v15; // [rsp+60h] [rbp-10h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v11);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( !a2 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(_QWORD **)&PiPnpRtlCtx,
                               v11,
                               (int)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
                               0,
                               131103,
                               (__int64)&v14);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a2 = v14;
    }
    if ( !a3 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(*(_QWORD **)&PiPnpRtlCtx, (int)a2, a1, 0, 131097, (__int64)&v15);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a3 = v15;
    }
    CachedContextBaseKey = PnpCtxRegCreateKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             v11,
                             (__int64)L"Control\\OsExtensionDatabase",
                             v8,
                             0x20006u,
                             0LL,
                             (__int64)&v13,
                             0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegCreateKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v13,
                               a1,
                               v9,
                               0x20006u,
                               0LL,
                               (__int64)&v12,
                               0LL);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v12, 1, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, a1);
          if ( CachedContextBaseKey >= 0 )
          {
            LODWORD(v11) = 0;
            if ( (unsigned int)PnpCtxRegEnumKey(v6, a2) == -2147483622 )
              PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, a2, 0LL);
          }
        }
      }
    }
  }
LABEL_14:
  if ( v12 )
    PnpCtxRegCloseKey(v6, v12);
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  if ( v14 )
    PnpCtxRegCloseKey(v6, v14);
  if ( v15 )
    PnpCtxRegCloseKey(v6, v15);
  return (unsigned int)CachedContextBaseKey;
}
