/*
 * XREFs of RmpPolicyInitializeRevokeContext @ 0x18001A588
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x1800150D4 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpPolicyInitializeRevokeContext(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 result; // rax

  memset_0(a6, 0, 0x30uLL);
  *a6 = a3;
  a6[1] = a4;
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(a2);
  a6[3] = a1 + 1360;
  result = a5;
  a6[2] = a2;
  *((_DWORD *)a6 + 10) = a5;
  return result;
}
