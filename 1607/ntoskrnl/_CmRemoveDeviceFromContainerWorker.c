/*
 * XREFs of _CmRemoveDeviceFromContainerWorker @ 0x1406DAAF4
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x1406DA9C4 (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404B910C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _CmDeleteDeviceContainer @ 0x1406D9B48 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainerWorker(__int64 *a1, __int64 a2, __int64 a3, const WCHAR *a4, _BYTE *a5)
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
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF

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
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v23, a2, 0, 1u, (__int64)&v22);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *a1;
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v22, (__int64)L"BaseContainers", 0, 1u, (__int64)&v21);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *a1;
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v21, a3, 0, 3u, (__int64)&Handle);
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
                CachedContextBaseKey = CmDeleteDeviceContainer((__int64)a1, a2);
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
