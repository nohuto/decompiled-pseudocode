/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1404FF7F0
 * Callers:
 *     _PnpSetMappedPropertyDispatch @ 0x140487998 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1404FC440 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1404FF720 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1405027FC (_PnpGetObjectListDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x140564558 (_PnpValidateObjectNameDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x1406DAD80 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x1406DAF98 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1406DB060 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1406DB124 (_PnpGetMappedPropertyLocalesDispatch.c)
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
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 136);
  return v3;
}
