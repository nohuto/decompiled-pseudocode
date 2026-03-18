/*
 * XREFs of PipProcessPendingServices @ 0x140755648
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x14043BD20 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCloseKey @ 0x14069279C (_PnpCtxRegCloseKey.c)
 *     PipProcessPendingObjects @ 0x140783EA0 (PipProcessPendingObjects.c)
 */

__int64 PipProcessPendingServices()
{
  __int64 v0; // rcx
  int CachedContextBaseKey; // ebx
  int v2; // eax
  __int64 v3; // r8
  void *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v6);
  if ( CachedContextBaseKey >= 0 )
  {
    v2 = PnpCtxRegOpenKey(
           *(_QWORD **)&PiPnpRtlCtx,
           v6,
           (int)L"Control\\PendingDriverOperations\\Services",
           0,
           131103,
           (__int64)&v5);
    CachedContextBaseKey = v2;
    if ( v2 == -1073741772 || v2 == -1073741444 )
    {
      CachedContextBaseKey = 0;
    }
    else if ( v2 >= 0 )
    {
      CachedContextBaseKey = PipProcessPendingObjects(v5, PipPendingServicesFilter, v3, PipCommitPendingService);
    }
  }
  if ( v5 )
    PnpCtxRegCloseKey(v0, v5);
  return (unsigned int)CachedContextBaseKey;
}
