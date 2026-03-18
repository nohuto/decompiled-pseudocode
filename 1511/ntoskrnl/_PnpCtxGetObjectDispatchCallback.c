/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x14043DD40
 * Callers:
 *     _PnpGetMappedPropertyDispatch @ 0x14043DC6C (_PnpGetMappedPropertyDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14043E824 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1404433C8 (_PnpGetObjectListDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x14045CB78 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1405063E4 (_PnpValidateObjectNameDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140695E04 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140696020 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1406960EC (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1406961B4 (_PnpGetMappedPropertyLocalesDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 9 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 128);
  return v3;
}
