/*
 * XREFs of ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800355BC
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

__int64 __fastcall ExecutionModel::ResourceSet::AddFGResourceSetForSharing(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::ResourceSet *a2,
        int a3)
{
  int v3; // ebx
  char *v6; // rsi
  char *i; // rax
  bool v9; // di
  void (*v10)(void); // rax
  ExecutionModel::ResourceSet *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((ExecutionModel::ResourceSet **)this + 234) != (ExecutionModel::ResourceSet *)((char *)this + 1872) )
    __fastfail(0x8000FFFF);
  v6 = (char *)this + 1896;
  for ( i = (char *)*((_QWORD *)this + 237); i != v6; i = *(char **)i )
  {
    if ( *((struct ExecutionModel::ResourceSet **)i + 2) == a2 )
      return 1;
  }
  if ( !a3 || (v3 = ExecutionModel::ResourceSet::AcquireMemoryForFGSharing(a2, *((_QWORD *)this + 186)), v3 >= 0) )
  {
    *((_QWORD *)this + 232) = *((_QWORD *)this + 186);
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(&v11, a2);
    v9 = (unsigned __int8)utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::push_front(
                            v6,
                            &v11) == 0;
    if ( v11 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
      if ( (char *)v10 == (char *)ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v11);
      else
        v10();
    }
    if ( v9 )
      __fastfail(0x8007000E);
  }
  return (unsigned int)v3;
}
