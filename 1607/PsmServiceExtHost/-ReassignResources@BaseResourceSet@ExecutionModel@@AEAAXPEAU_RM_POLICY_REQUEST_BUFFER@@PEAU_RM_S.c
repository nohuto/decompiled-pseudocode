/*
 * XREFs of ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x1800111C8
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReassignResources(
        ExecutionModel::BaseResourceSet *this,
        struct _RM_POLICY_REQUEST_BUFFER *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        struct ExecutionModel::BaseResourceSet *a4)
{
  unsigned int v7; // eax
  int *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  char v11; // [rsp+68h] [rbp+10h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  ExecutionModel::BaseResourceSet::RecursiveVisit(
    this,
    1,
    *((_DWORD *)a2 + 288),
    (unsigned int *)a2,
    *((_DWORD *)a4 + 2),
    1,
    &v12,
    &v11,
    0LL,
    (__int64)a4);
  v7 = *((_DWORD *)a2 + 308);
  if ( v7 )
  {
    v8 = (int *)((char *)a2 + 1160);
    v9 = v7;
    do
    {
      v10 = 3 * (*v8 + 8LL);
      *(_OWORD *)((char *)a4 + 8 * v10) = *(_OWORD *)v8;
      *((_QWORD *)a4 + v10 + 2) = *((_QWORD *)v8 + 2);
      if ( *v8 == 1 )
      {
        *((_QWORD *)a3 + 1) -= *((_QWORD *)v8 + 1);
        *((_QWORD *)a3 + 3) += *((_QWORD *)v8 + 1);
      }
      v8 += 6;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)a4 + 338) = 2;
}
