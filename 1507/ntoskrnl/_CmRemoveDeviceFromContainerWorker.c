/*
 * XREFs of _CmRemoveDeviceFromContainerWorker @ 0x14071562C
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x1407154FC (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404DF548 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140588D08 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 *     _CmDeleteDeviceContainer @ 0x140714680 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainerWorker(
        __int64 *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const WCHAR *a4,
        _BYTE *a5)
{
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  int v19; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v21; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-18h] BYREF
  char *v23; // [rsp+60h] [rbp-10h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  v19 = 0;
  *a5 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v23);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *a1;
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v23, a2, 0, 1u, &v22);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *a1;
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (char *)v22, L"BaseContainers", 0, 1u, &v21);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *a1;
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (char *)v21, a3, 0, 3u, &Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          PnpCtxRegDeleteValue(v13, Handle, a4);
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v14, (int)Handle, 0, v15, (__int64)&v19, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( !v19 )
              PnpCtxRegDeleteTree((__int64)a1, (__int64)Handle, 0LL);
            CachedContextBaseKey = PnpCtxRegQueryInfoKey(v16, (int)v21, (int)&v19, v17, 0LL, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( !v19 )
              {
                CachedContextBaseKey = CmDeleteDeviceContainer((__int64)a1, (__int64)a2);
                if ( CachedContextBaseKey >= 0 )
                  *a5 = 1;
              }
              PnpObjectRaisePropertyChangeEvent(
                (__int64)a1,
                (__int64)a4,
                1LL,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_ContainerId);
            }
          }
        }
      }
    }
  }
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  if ( v22 )
    ZwClose(v22);
  return (unsigned int)CachedContextBaseKey;
}
