/*
 * XREFs of ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010B48
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x1800365D0 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180011290 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x1800113C0 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckResourceAvailability(
        ExecutionModel::BaseResourceSet *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v9; // esi
  __int64 result; // rax
  _BYTE v13[16]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v9 = *(_DWORD *)(a2 + 1152);
  result = ExecutionModel::BaseResourceSet::CheckPoolResources(this, 1, (__int64)v13, (__int64)&v14, a8);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)v14
      || a5 == 1
      && (ExecutionModel::BaseResourceSet::CheckPoolResources(this, 0, (__int64)v13, (__int64)&v14, 0LL), (_BYTE)v14) )
    {
      if ( v13[0]
        || (*(int (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD, __int64))(*(_QWORD *)this + 40LL))(
             this,
             v9,
             a2) < 0
        || (unsigned __int8)ExecutionModel::BaseResourceSet::HigherPriorityPending(this, v9, a2, a4) )
      {
        *a7 = 1;
        *a6 = 1;
        return 0LL;
      }
      *a7 = 1;
    }
    else
    {
      *a7 = 0;
    }
    *a6 = 0;
    return 0LL;
  }
  return result;
}
