/*
 * XREFs of ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180001A44
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180014CC0 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXV_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@Z @ 0x180015100 (--$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@-$list@V-$CComPtr@VBaseResourceSet@Exe.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::ResetPriorities(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rax
  ExecutionModel::BaseResourceSet *v2; // rbx
  struct IUnknown *v4; // rdx
  unsigned int (__fastcall *v5)(ExecutionModel::BaseResourceSet *__hidden); // rax
  int v6; // ecx
  void (*Release)(void); // rax
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  v8 = 0LL;
  v4 = *(struct IUnknown **)(v1 + 120);
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v8, v4);
    v2 = (ExecutionModel::BaseResourceSet *)v8;
  }
  if ( *((_DWORD *)this + 338) )
  {
    v6 = *((_DWORD *)this + 356);
    *((_DWORD *)this + 341) = *((_DWORD *)this + 362);
    *((_DWORD *)this + 340) = v6;
    *((_DWORD *)this + 52) = v6;
    *((_DWORD *)this + 58) = *((_DWORD *)this + 356);
    *((_DWORD *)this + 64) = *((_DWORD *)this + 356);
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(&v8, this);
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove_if<_lambda_4a96282eb34af91833354b43e8ed5ac2_>(
      (char *)v2 + 160,
      &v8);
    if ( v8 )
    {
      Release = (void (*)(void))v8->lpVtbl->Release;
      if ( (char *)Release == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v8);
      }
      else if ( (char *)Release == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v8);
      }
      else
      {
        Release();
      }
    }
    ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)v2 + 160, this);
  }
  if ( v2 )
  {
    v5 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)v2 + 16LL);
    if ( v5 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v2);
    }
    else if ( v5 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v2);
    }
    else
    {
      v5(v2);
    }
  }
}
