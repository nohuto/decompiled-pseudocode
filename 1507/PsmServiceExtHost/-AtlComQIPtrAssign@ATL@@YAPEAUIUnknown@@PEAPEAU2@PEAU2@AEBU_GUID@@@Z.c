/*
 * XREFs of ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180020988
 * Callers:
 *     ?CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResourceEnforcer@@PEAUIRMExecServicesProvider@1@@Z @ 0x180021DA4 (-CreateResourcePolicyEngineServers@ExecutionModel@@YAJPEAUIResourceManager@1@PEAUIModernResource.c)
 *     RmgrSrv_RmTestGetApplicationProperties @ 0x180030580 (RmgrSrv_RmTestGetApplicationProperties.c)
 *     RmgrSrv_RmTestGetRegisteredExternalResources @ 0x180030880 (RmgrSrv_RmTestGetRegisteredExternalResources.c)
 *     RmgrSrv_RmTestGetResourceSetInfos @ 0x1800309C0 (RmgrSrv_RmTestGetResourceSetInfos.c)
 *     RmgrSrv_RmTestGetResourceSetTypeFromPSMKey @ 0x180030B00 (RmgrSrv_RmTestGetResourceSetTypeFromPSMKey.c)
 *     RmgrSrv_RmTestGetResourceSetTypeFromPid @ 0x180030D40 (RmgrSrv_RmTestGetResourceSetTypeFromPid.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

struct IUnknown *__fastcall ATL::AtlComQIPtrAssign(struct IUnknown **a1, struct IUnknown *a2, const struct _GUID *a3)
{
  __int64 v4; // rsi

  if ( !a1 )
    return 0LL;
  v4 = (__int64)*a1;
  *a1 = 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *, const struct _GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
      a2,
      a3,
      a1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return *a1;
}
