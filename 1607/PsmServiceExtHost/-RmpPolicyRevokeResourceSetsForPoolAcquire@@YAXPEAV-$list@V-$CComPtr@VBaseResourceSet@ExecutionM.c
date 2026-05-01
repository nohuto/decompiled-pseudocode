/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033EF0
 * Callers:
 *     RmpPolicyRevokeResourceSetsForAcquire @ 0x180034370 (RmpPolicyRevokeResourceSetsForAcquire.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpPolicyTryGetRevokeAction @ 0x1800343D0 (RmpPolicyTryGetRevokeAction.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForPoolAcquire(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  _QWORD *v4; // rdi
  ExecutionModel::BaseResourceSet *v5; // rbx
  struct IUnknown *v10; // rdx
  __int64 (__fastcall *v11)(ExecutionModel::ResourceSet *); // rax
  struct IUnknown *v12; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  v5 = 0LL;
  v12 = 0LL;
  while ( v4 != a1 )
  {
    v10 = (struct IUnknown *)v4[2];
    if ( v5 != (ExecutionModel::BaseResourceSet *)v10 )
    {
      ATL::AtlComPtrAssign(&v12, v10);
      v5 = (ExecutionModel::BaseResourceSet *)v12;
    }
    if ( *((_DWORD *)v5 + 340) >= a4 )
    {
      if ( (unsigned int)RmpPolicyTryGetRevokeAction(v5, a3, &v13) )
        ExecutionModel::ResourceSet::Revoke(v5, v13, a2);
    }
    v4 = (_QWORD *)*v4;
  }
  if ( v5 )
  {
    v11 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL);
    if ( v11 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v5);
    }
    else if ( v11 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v5);
    }
    else
    {
      v11(v5);
    }
  }
}
