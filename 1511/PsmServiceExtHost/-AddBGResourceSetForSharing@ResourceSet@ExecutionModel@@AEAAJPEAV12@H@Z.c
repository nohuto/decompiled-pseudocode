/*
 * XREFs of ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D90C
 * Callers:
 *     ?TriggerAddNewBGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180009FA4 (-TriggerAddNewBGResourceSetForSharing@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVReso.c)
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

__int64 __fastcall ExecutionModel::ResourceSet::AddBGResourceSetForSharing(
        ExecutionModel::ResourceSet **this,
        struct ExecutionModel::ResourceSet *a2,
        int a3)
{
  int v3; // edi
  __int64 *v5; // rbx
  ExecutionModel::ResourceSet *i; // rax
  bool v7; // bp
  unsigned int (__fastcall *v8)(ExecutionModel::ResourceSet *__hidden); // rsi
  ExecutionModel::ResourceSet *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( this[236] != (ExecutionModel::ResourceSet *)(this + 236) )
    __fastfail(0x8000FFFF);
  v5 = (__int64 *)(this + 233);
  for ( i = this[233]; i != (ExecutionModel::ResourceSet *)v5; i = *(ExecutionModel::ResourceSet **)i )
  {
    if ( *((struct ExecutionModel::ResourceSet **)i + 2) == a2 )
      return 1;
  }
  if ( !a3
    || (v3 = ExecutionModel::ResourceSet::AcquireMemoryForFGSharing(
               (ExecutionModel::ResourceSet *)this,
               *((_QWORD *)a2 + 183)),
        v3 >= 0) )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v10,
      (__int64)a2);
    v7 = (unsigned __int8)utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::push_front(
                            v5,
                            (__int64 *)&v10) == 0;
    if ( v10 )
    {
      v8 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v10 + 16LL);
      if ( v8 == ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v10);
      else
        v8(v10);
    }
    if ( v7 )
      return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
