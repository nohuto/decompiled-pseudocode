/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x14043A890
 * Callers:
 *     _PnpValidateObjectNameDispatch @ 0x1404170B0 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x14043A7BC (_PnpGetMappedPropertyDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14043BA14 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1404DD300 (_PnpGetObjectListDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140537444 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140715994 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140715BB0 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140715C7C (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140715D44 (_PnpGetMappedPropertyLocalesDispatch.c)
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
