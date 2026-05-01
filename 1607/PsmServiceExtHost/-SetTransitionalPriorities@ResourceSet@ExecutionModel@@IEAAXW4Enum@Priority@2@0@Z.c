/*
 * XREFs of ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011BDC
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180014CC0 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     RmpEmPriorityCompare @ 0x180014E6C (RmpEmPriorityCompare.c)
 *     ??$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXV_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@Z @ 0x180015100 (--$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@-$list@V-$CComPtr@VBaseResourceSet@Exe.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ExecutionModel::ResourceSet::SetTransitionalPriorities(__int64 a1, unsigned int a2, unsigned int a3)
{
  ExecutionModel::BaseResourceSet *v3; // rbx
  __int64 v6; // rax
  struct IUnknown *v8; // rdx
  __int64 (__fastcall *v9)(ExecutionModel::BaseResourceSet *); // rax
  void (*Release)(void); // rax
  struct IUnknown *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = *(struct IUnknown **)(v6 + 120);
  if ( v8 )
  {
    LODWORD(v6) = (unsigned int)ATL::AtlComPtrAssign(&v12, v8);
    v3 = (ExecutionModel::BaseResourceSet *)v12;
  }
  if ( *(_DWORD *)(a1 + 1352) )
  {
    if ( (int)RmpEmPriorityCompare(a2, *(unsigned int *)(a1 + 1360)) > 0 )
    {
      *(_DWORD *)(a1 + 1360) = a2;
      *(_DWORD *)(a1 + 208) = a2;
      *(_DWORD *)(a1 + 232) = a2;
      *(_DWORD *)(a1 + 256) = a2;
      ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(
        (ExecutionModel::ResourceSet **)&v12,
        (ExecutionModel::ResourceSet *)a1);
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove_if<_lambda_4a96282eb34af91833354b43e8ed5ac2_>(
        (char *)v3 + 160,
        &v12);
      if ( v12 )
      {
        Release = (void (*)(void))v12->lpVtbl->Release;
        if ( (char *)Release == (char *)ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v12);
        }
        else if ( (char *)Release == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v12);
        }
        else
        {
          Release();
        }
      }
      ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)v3 + 160, a1);
    }
    LODWORD(v6) = RmpEmPriorityCompare(a3, *(unsigned int *)(a1 + 1364));
    if ( (int)v6 > 0 )
      *(_DWORD *)(a1 + 1364) = a3;
  }
  if ( v3 )
  {
    v9 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v3 + 16LL);
    if ( v9 == ExecutionModel::BaseResourceSet::Release )
    {
      LODWORD(v6) = ExecutionModel::BaseResourceSet::Release(v3);
    }
    else if ( (char *)v9 == (char *)ExecutionModel::ResourceSet::Release )
    {
      LODWORD(v6) = ExecutionModel::ResourceSet::Release(v3);
    }
    else
    {
      LODWORD(v6) = v9(v3);
    }
  }
  return v6;
}
