/*
 * XREFs of _PnpGetObjectPropertyLocalesWorker @ 0x1406DB764
 * Callers:
 *     _PnpGetObjectPropertyLocales @ 0x1406DB600 (_PnpGetObjectPropertyLocales.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1406DB25C (_PnpGetMappedPropertyLocalesDispatch.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1406DC644 (_PnpGetGenericStorePropertyLocales.c)
 */

__int64 __fastcall PnpGetObjectPropertyLocalesWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  __int64 v9; // rsi
  int MappedPropertyLocalesDispatch; // ebx
  __int64 v14; // rdi
  int v15; // ebp
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  v9 = a4;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  v14 = a6;
  if ( a6 )
  {
    v15 = a7;
    v14 = -(__int64)(a7 != 0) & a6;
  }
  else
  {
    v15 = 0;
  }
  *a8 = 0;
  MappedPropertyLocalesDispatch = PnpGetMappedPropertyLocalesDispatch(a1, a2, a3, a4, a5, v14, v15, (__int64)a8, a9);
  if ( MappedPropertyLocalesDispatch == -1073741802 )
  {
    if ( !v9 )
    {
      MappedPropertyLocalesDispatch = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)Handle, 0LL, 0);
      if ( MappedPropertyLocalesDispatch < 0 )
        goto LABEL_11;
      v9 = (__int64)Handle[0];
    }
    MappedPropertyLocalesDispatch = PnpGetGenericStorePropertyLocales(a1, v9, a5, v14, v15, a8);
  }
LABEL_11:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)MappedPropertyLocalesDispatch;
}
