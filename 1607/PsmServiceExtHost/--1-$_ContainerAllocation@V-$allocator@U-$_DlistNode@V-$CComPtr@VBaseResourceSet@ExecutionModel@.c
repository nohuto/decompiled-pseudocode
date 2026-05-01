/*
 * XREFs of ??1?$_ContainerAllocation@V?$allocator@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@QEAA@XZ @ 0x1800285B0
 * Callers:
 *     ?push_front@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x1800371B4 (-push_front@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBa.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_ContainerAllocation<utl::allocator<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>>::~_ContainerAllocation<utl::allocator<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
