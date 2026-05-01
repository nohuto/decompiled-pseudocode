/*
 * XREFs of RmpPolicyRevokeResourceSetsForAcquire @ 0x180034370
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033EF0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 *     RmpPolicyReclaimHostList @ 0x180034270 (RmpPolicyReclaimHostList.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForAcquire(__int64 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = (_QWORD *)a1[2];
  if ( (_QWORD *)*v2 != v2 )
    RmpPolicyRevokeResourceSetsForPoolAcquire(v2, *(_DWORD *)(*a1 + 152), *((_DWORD *)a1 + 8), *((_DWORD *)a1 + 10));
  v3 = a1[3];
  if ( *(_DWORD *)(v3 + 40) )
    RmpPolicyReclaimHostList(v3, *((_DWORD *)a1 + 9), *(_DWORD *)(*a1 + 152), *a1, 0LL);
}
