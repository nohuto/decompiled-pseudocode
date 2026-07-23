/*
 * XREFs of _PnpGetObjectPropertyKeysWorker @ 0x1406DB498
 * Callers:
 *     _PnpGetObjectPropertyKeys @ 0x1406DB330 (_PnpGetObjectPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1406DB198 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 */

__int64 __fastcall PnpGetObjectPropertyKeysWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned int a8,
        _DWORD *a9,
        __int16 a10)
{
  signed int MappedPropertyKeysDispatch; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // edx
  int v19; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v19 = 0;
  v20 = 0;
  if ( a10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a9 = 0;
    if ( a4
      || (MappedPropertyKeysDispatch = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle, 0LL, 0),
          MappedPropertyKeysDispatch >= 0) )
    {
      MappedPropertyKeysDispatch = PnpGetMappedPropertyKeysDispatch(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)&v19);
      if ( (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 || !MappedPropertyKeysDispatch )
      {
        v16 = (__int64)Handle;
        LOBYTE(v15) = a6;
        if ( a4 )
          v16 = a4;
        MappedPropertyKeysDispatch = PnpGetGenericStorePropertyKeys(a1, v16, a5, v15);
        if ( (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 || !MappedPropertyKeysDispatch )
        {
          v17 = v19 + v20;
          *a9 = v19 + v20;
          MappedPropertyKeysDispatch = a8 < v17 ? 0xC0000023 : 0;
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)MappedPropertyKeysDispatch;
}
