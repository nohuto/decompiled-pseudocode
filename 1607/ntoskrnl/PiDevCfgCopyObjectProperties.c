/*
 * XREFs of PiDevCfgCopyObjectProperties @ 0x140637050
 * Callers:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1406351EC (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140635270 (PiDevCfgConfigureDeviceInterface.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpGetGenericStoreProperty @ 0x1404DD9A0 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 */

__int64 __fastcall PiDevCfgCopyObjectProperties(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // r14
  unsigned int v8; // esi
  int GenericStorePropertyKeys; // ebx
  PVOID PoolWithTag; // r15
  unsigned int v12; // r13d
  PVOID v13; // rdi
  int GenericStoreProperty; // eax
  HANDLE v15; // rcx
  int v17; // [rsp+28h] [rbp-50h]
  HANDLE Handle; // [rsp+60h] [rbp-18h] BYREF
  __int64 v19; // [rsp+68h] [rbp-10h]
  int v20; // [rsp+C0h] [rbp+48h] BYREF
  int v21; // [rsp+C4h] [rbp+4Ch]
  unsigned int NumberOfBytes; // [rsp+C8h] [rbp+50h] BYREF
  int NumberOfBytes_4; // [rsp+CCh] [rbp+54h]
  unsigned int v24; // [rsp+D0h] [rbp+58h]
  HANDLE v25; // [rsp+D8h] [rbp+60h] BYREF

  NumberOfBytes_4 = HIDWORD(a2);
  v21 = HIDWORD(a1);
  v7 = *(_QWORD *)&PiPnpRtlCtx;
  v8 = 0;
  Handle = 0LL;
  v25 = 0LL;
  v24 = 0;
  NumberOfBytes = 0;
  v20 = 1;
  if ( a4
    || (GenericStorePropertyKeys = PnpOpenObjectRegKey(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     0LL,
                                     0,
                                     33554433,
                                     0,
                                     (__int64)&Handle,
                                     0LL,
                                     0),
        GenericStorePropertyKeys >= 0) )
  {
    if ( a7
      || (GenericStorePropertyKeys = PnpOpenObjectRegKey(v7, a5, a6, 33554433, 0, (__int64)&v25, 0LL, 0),
          GenericStorePropertyKeys >= 0) )
    {
      GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(v7, a4, 0LL, 0LL);
      if ( (int)(GenericStorePropertyKeys + 0x80000000) < 0 || GenericStorePropertyKeys == -1073741789 )
      {
        if ( v24 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20LL * v24, 0x63647050u);
          if ( PoolWithTag )
          {
            GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(v7, a4, 0LL, 0LL);
            if ( GenericStorePropertyKeys >= 0 )
            {
              v12 = 256;
              v13 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x63647050u);
              if ( v13 )
              {
                if ( v24 )
                {
                  do
                  {
                    v19 = (__int64)PoolWithTag + 20 * v8;
                    GenericStoreProperty = PnpGetGenericStoreProperty(
                                             v7,
                                             a4,
                                             0LL,
                                             v19,
                                             &v20,
                                             (__int64)v13,
                                             v12,
                                             &NumberOfBytes);
                    GenericStorePropertyKeys = GenericStoreProperty;
                    if ( GenericStoreProperty == -1073741789 )
                    {
                      if ( NumberOfBytes <= v12 )
                      {
                        GenericStorePropertyKeys = -1073741595;
                        break;
                      }
                      ExFreePoolWithTag(v13, 0);
                      v12 = NumberOfBytes;
                      v13 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x63647050u);
                      if ( !v13 )
                      {
                        GenericStorePropertyKeys = -1073741670;
                        break;
                      }
                      GenericStorePropertyKeys = 0;
                      --v8;
                    }
                    else
                    {
                      if ( GenericStoreProperty < 0 )
                        break;
                      v15 = v25;
                      if ( a7 )
                        v15 = a7;
                      GenericStorePropertyKeys = PiDevCfgSetObjectProperty(
                                                   v7,
                                                   0,
                                                   a5,
                                                   a6,
                                                   (__int64)v15,
                                                   v17,
                                                   v19,
                                                   v20,
                                                   (__int64)v13,
                                                   NumberOfBytes);
                      if ( GenericStorePropertyKeys < 0 )
                        break;
                    }
                    ++v8;
                  }
                  while ( v8 < v24 );
                }
                if ( v13 )
                  ExFreePoolWithTag(v13, 0);
              }
              else
              {
                GenericStorePropertyKeys = -1073741670;
              }
            }
            ExFreePoolWithTag(PoolWithTag, 0);
          }
          else
          {
            GenericStorePropertyKeys = -1073741670;
          }
        }
        else
        {
          GenericStorePropertyKeys = 0;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)GenericStorePropertyKeys;
}
