/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@W4Enum@Priority@2@W45PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAVBaseResourceSet@2@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N8@Z @ 0x180012C6C
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x1800113C0 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceInfo@2@KW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180014E84 (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceI.c)
 *     RmpPolicyEvaluateQueryableResourceRequest @ 0x180014F78 (RmpPolicyEvaluateQueryableResourceRequest.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluateResourceRequest(
        int a1,
        unsigned int *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        ExecutionModel::BaseResourceSet *a7,
        __int64 a8,
        _BYTE *a9,
        _BYTE *a10)
{
  __int64 result; // rax
  __int64 v14; // rax

  result = ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(a7, (__int64)a9, *(_QWORD *)(a8 + 16), a8 + 32);
  if ( (int)result >= 0 )
  {
    result = RmpPolicyEvaluateQueryableResourceRequest(
               a1,
               (_DWORD)a2,
               a3,
               a4,
               a5,
               a6,
               *(_QWORD *)(a8 + 8),
               *(_QWORD *)(a8 + 24),
               (__int64)a10,
               a8 + 36);
    if ( (int)result >= 0 )
    {
      if ( *a9 )
      {
        v14 = *(_QWORD *)(a8 + 24);
        *a10 = 0;
        *(_DWORD *)(v14 + 40) = 0;
        *(_DWORD *)(a8 + 36) = 0;
      }
      else if ( !*a10 )
      {
        if ( ExecutionModel::BaseResourceSet::HigherPriorityPending((__int64)a7, a2[288], a2, a3) )
        {
          if ( a4 == 1 )
          {
            *a9 = 1;
            return 0LL;
          }
        }
        else
        {
          if ( !ExecutionModel::BaseResourceSet::HigherPriorityPending((__int64)a7, a2[308], a2 + 290, a3) )
            return 0LL;
          if ( a4 == 1 )
          {
            *a10 = 1;
            return 0LL;
          }
        }
        return 2147746304LL;
      }
      return 0LL;
    }
  }
  return result;
}
