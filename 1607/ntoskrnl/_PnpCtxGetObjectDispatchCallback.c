/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1404E2780
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x1404DF3D0 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1404E26B0 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1404E578C (_PnpGetObjectListDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140512470 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x140564A98 (_PnpValidateObjectNameDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x1406DAEB8 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x1406DB0D0 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1406DB198 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1406DB25C (_PnpGetMappedPropertyLocalesDispatch.c)
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
