/*
 * XREFs of ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x1800153B0
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x1800365D0 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

void __fastcall RmpPolicyRequestBufferInitialize(
        const struct ExecutionModel::_ResourceInfo *a1,
        unsigned int a2,
        struct _RM_POLICY_REQUEST_BUFFER *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v6 = 0LL;
  v7 = 0;
  memset_0(a3, 0, 0x4E0uLL);
  if ( a2 )
  {
    v8 = a2;
    do
    {
      if ( *(_DWORD *)a1 <= 0x2Fu )
      {
        v9 = *(_OWORD *)a1;
        if ( *(_DWORD *)a1 == 1 )
        {
          v12 = 3 * v6;
          v6 = (unsigned int)(v6 + 1);
          *(_OWORD *)((char *)a3 + 8 * v12 + 1160) = v9;
          *((_QWORD *)a3 + v12 + 147) = *((_QWORD *)a1 + 2);
        }
        else
        {
          v10 = v7++;
          v11 = 3 * v10;
          *(_OWORD *)((char *)a3 + 8 * v11) = v9;
          *((_QWORD *)a3 + v11 + 2) = *((_QWORD *)a1 + 2);
        }
      }
      a1 = (const struct ExecutionModel::_ResourceInfo *)((char *)a1 + 24);
      --v8;
    }
    while ( v8 );
    *((_DWORD *)a3 + 288) = v7;
  }
  else
  {
    *((_DWORD *)a3 + 288) = 0;
  }
  *((_DWORD *)a3 + 308) = v6;
}
