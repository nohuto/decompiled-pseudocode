/*
 * XREFs of ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D9EC
 * Callers:
 *     ?AddNewFGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18000A020 (-AddNewFGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet.c)
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000D87C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?push_front@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18000B2CC (-push_front@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResour.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DC20 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AddFGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2,
        int a3)
{
  int v3; // edi
  __int64 *v6; // rsi
  __int64 i; // rax
  bool v8; // bp
  unsigned int (__fastcall *v9)(ExecutionModel::ResourceSet *__hidden); // rsi
  ExecutionModel::ResourceSet *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((ExecutionModel::ResourceSet **)this + 233) != (ExecutionModel::ResourceSet *)((char *)this + 1864) )
    __fastfail(0x8000FFFF);
  v6 = (__int64 *)((char *)this + 1888);
  for ( i = *((_QWORD *)this + 236); (__int64 *)i != v6; i = *(_QWORD *)i )
  {
    if ( *(struct ExecutionModel::ResourceSet **)(i + 16) == a2 )
      return 1;
  }
  if ( !a3 || (v3 = ExecutionModel::ResourceSet::AcquireMemoryForFGSharing(a2, *((_QWORD *)this + 183)), v3 >= 0) )
  {
    *((_QWORD *)this + 232) = *((_QWORD *)this + 183);
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v11,
      (__int64)a2);
    v8 = (unsigned __int8)utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::push_front(
                            v6,
                            (__int64 *)&v11) == 0;
    if ( v11 )
    {
      v9 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v11 + 16LL);
      if ( v9 == ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v11);
      else
        v9(v11);
    }
    if ( v8 )
      __fastfail(0x8007000E);
  }
  return (unsigned int)v3;
}
