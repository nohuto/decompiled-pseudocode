/*
 * XREFs of ??$emplace@AEAPEAVBaseResourceSet@ExecutionModel@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@AEAPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180010D34
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001AEA0 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::emplace<ExecutionModel::BaseResourceSet * &>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        ExecutionModel::BaseResourceSet **a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  ExecutionModel::BaseResourceSet *v10; // rcx
  void (*v11)(void); // rax
  _QWORD *v12; // rax

  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_18003CFF2);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v8[2] = *a4;
    if ( v10 )
    {
      v11 = *(void (**)(void))(*(_QWORD *)v10 + 8LL);
      if ( (char *)v11 == (char *)ExecutionModel::BaseResourceSet::AddRef )
        ExecutionModel::BaseResourceSet::AddRef(v10);
      else
        v11();
    }
  }
  else
  {
    v9 = 0LL;
  }
  *a2 = 0LL;
  if ( v9 )
  {
    v12 = *(_QWORD **)(a3 + 8);
    v9[1] = v12;
    *v9 = a3;
    *a2 = v9;
    *v12 = v9;
    *(_QWORD *)(a3 + 8) = v9;
    ++*(_QWORD *)(a1 + 16);
  }
  return a2;
}
