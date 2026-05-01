/*
 * XREFs of ?SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x18003E228
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

char __fastcall ExecutionModel::ModernActivationResourceInfo::SendReleaseRequests(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  ExecutionModel::ResourceSet *v3; // rdi
  char result; // al
  __int64 (__fastcall *v5)(ExecutionModel::ResourceSet *); // rbp
  ExecutionModel::ResourceSet *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 24);
  for ( i = *(_QWORD **)(a1 + 24); i != v1; i = (_QWORD *)*i )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v6,
      i[2]);
    v3 = v6;
    result = ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)v6, 9u);
    if ( v3 )
    {
      v5 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL);
      if ( v5 == ExecutionModel::ResourceSet::Release )
        result = ExecutionModel::ResourceSet::Release(v3);
      else
        result = v5(v3);
    }
  }
  return result;
}
