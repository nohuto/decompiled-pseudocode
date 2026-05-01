/*
 * XREFs of ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003C124
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$emplace@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18002F280 (--$emplace@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@-$list@V-$CComPtr@VBaseResourceSet.c)
 */

__int64 __fastcall RmpPolicyAddAppliedResourceSetsFromActivityHostsToList(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebp
  bool v8; // r12
  __int64 (__fastcall *v9)(ExecutionModel::BaseResourceSet *); // rsi
  __int64 Next; // rax
  ExecutionModel::BaseResourceSet *v12; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14[4]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v7 = 0;
  if ( a2 )
  {
    while ( 2 )
    {
      RmpActivityHostEnumerateResourceSetBegin(*a1, 1, v14);
      while ( 1 )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext(v14);
        if ( !Next )
          break;
        ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
          &v12,
          Next);
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::emplace<ATL::CComPtr<ExecutionModel::BaseResourceSet>>(
          a3,
          &v13,
          a3,
          (__int64 *)&v12);
        v8 = v13 == 0;
        if ( v12 )
        {
          v9 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v12 + 16LL);
          if ( v9 == ExecutionModel::ResourceSet::Release )
          {
            ExecutionModel::ResourceSet::Release(v12);
          }
          else if ( v9 == ExecutionModel::BaseResourceSet::Release )
          {
            ExecutionModel::BaseResourceSet::Release(v12);
          }
          else
          {
            v9(v12);
          }
        }
        if ( v8 )
          return (unsigned int)-1073741801;
      }
      ++v7;
      ++a1;
      if ( v7 < a2 )
        continue;
      break;
    }
  }
  return v3;
}
