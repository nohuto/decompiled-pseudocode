/*
 * XREFs of ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800354F0
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000F710 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@_KPEAVResourceSet@2@PEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@4@@Z @ 0x18000FAEC (-FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV-$list@PEAVResourceSet@Exec.c)
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180011B4C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x1800353A0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?push_front@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x18003654C (-push_front@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResour.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AddBGResourceSetForSharing(
        ExecutionModel::ResourceSet **this,
        struct ExecutionModel::ResourceSet *a2,
        int a3)
{
  int v3; // ebx
  char *v5; // rdi
  ExecutionModel::ResourceSet *i; // rax
  bool v7; // di
  void (*v8)(void); // rax
  ExecutionModel::ResourceSet *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( this[237] != (ExecutionModel::ResourceSet *)(this + 237) )
    __fastfail(0x8000FFFF);
  v5 = (char *)(this + 234);
  for ( i = this[234]; i != (ExecutionModel::ResourceSet *)v5; i = *(ExecutionModel::ResourceSet **)i )
  {
    if ( *((struct ExecutionModel::ResourceSet **)i + 2) == a2 )
      return 1;
  }
  if ( !a3
    || (v3 = ExecutionModel::ResourceSet::AcquireMemoryForFGSharing(
               (ExecutionModel::ResourceSet *)this,
               *((_QWORD *)a2 + 186)),
        v3 >= 0) )
  {
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(&v10, a2);
    v7 = (unsigned __int8)utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::push_front(
                            v5,
                            &v10) == 0;
    if ( v10 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
      if ( (char *)v8 == (char *)ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v10);
      else
        v8();
    }
    if ( v7 )
      return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
