/*
 * XREFs of ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x1800013D8
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000E440 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180011DB0 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180013364 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001AEA0 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::ResetPriorities(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rax
  ExecutionModel::ResourceSet *v2; // rbx
  struct IUnknown *v4; // rdx
  unsigned int (__fastcall *v5)(ExecutionModel::BaseResourceSet *__hidden); // rax
  int v6; // ecx
  void (*Release)(void); // rax
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  v8 = 0LL;
  v4 = *(struct IUnknown **)(v1 + 104);
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v8, v4);
    v2 = (ExecutionModel::ResourceSet *)v8;
  }
  if ( *((_DWORD *)this + 338) )
  {
    v6 = *((_DWORD *)this + 354);
    *((_DWORD *)this + 341) = *((_DWORD *)this + 360);
    *((_DWORD *)this + 340) = v6;
    *((_DWORD *)this + 52) = v6;
    *((_DWORD *)this + 58) = *((_DWORD *)this + 354);
    *((_DWORD *)this + 64) = *((_DWORD *)this + 354);
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v8, this);
    sub_180010C80((char *)v2 + 160, &v8);
    if ( v8 )
    {
      Release = (void (*)(void))v8->lpVtbl->Release;
      if ( (char *)Release == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v8);
      }
      else if ( (char *)Release == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v8);
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
    if ( v5 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v2);
    }
    else if ( v5 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v2);
    }
    else
    {
      v5(v2);
    }
  }
}
