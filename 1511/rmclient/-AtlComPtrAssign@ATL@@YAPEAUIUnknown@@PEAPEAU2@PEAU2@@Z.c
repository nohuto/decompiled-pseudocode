/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60
 * Callers:
 *     ?Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ @ 0x180004720 (-Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ.c)
 *     ??_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z @ 0x180004DE0 (--_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 *     ?DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z @ 0x18000BEA8 (-DoReleaseResources@ResourceSetProxy@ExecutionModel@@IEAAJW4_ReleaseResourcesType@@@Z.c)
 *     ?Init@ResourceSetProxy@ExecutionModel@@QEAAJ_KW4RmResourceSetType@@PEAUIResourceSetCallback@2@@Z @ 0x18000BF64 (-Init@ResourceSetProxy@ExecutionModel@@QEAAJ_KW4RmResourceSetType@@PEAUIResourceSetCallback@2@@Z.c)
 *     ?FireCallback@ResourceSetClientProxy@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180013B40 (-FireCallback@ResourceSetClientProxy@@QEAAXPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_R.c)
 *     ?Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@@Z @ 0x180014078 (-Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallb.c)
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x1800142BC (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 *     ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x180014840 (-ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ.c)
 *     ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x1800156E0 (-QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2.c)
 *     ?StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@PEAXPEAPEAX@Z @ 0x1800157D0 (-StartTimer@RMExecServicesProvider@ExecutionModel@@UEAAJKKPEAUIRMExecServicesProviderCallback@2@.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  struct IUnknown *result; // rax

  if ( !a1 )
    return 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  if ( *a1 )
    ((void (__fastcall *)(_QWORD))(*a1)->lpVtbl->Release)(*a1);
  result = a2;
  *a1 = a2;
  return result;
}
