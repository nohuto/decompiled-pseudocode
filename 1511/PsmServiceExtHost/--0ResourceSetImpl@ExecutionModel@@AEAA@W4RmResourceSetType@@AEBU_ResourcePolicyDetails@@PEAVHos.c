/*
 * XREFs of ??0ResourceSetImpl@ExecutionModel@@AEAA@W4RmResourceSetType@@AEBU_ResourcePolicyDetails@@PEAVHostResourceInfo@1@PEAUIResourceSetCallback@1@PEAX@Z @ 0x180035DC0
 * Callers:
 *     ?CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAUIResourceSetCallback@2@PEAXPEAVHostResourceInfo@2@PEAPEAV12@@Z @ 0x1800055BC (-CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetai.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::ResourceSetImpl(
        __int64 a1,
        int a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  struct IUnknown *v12; // rdx

  *(_DWORD *)(a1 + 152) = a2;
  *(_QWORD *)a1 = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSet'};
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSetCallback'};
  *(_QWORD *)(a1 + 160) = a4;
  *(_QWORD *)(a1 + 16) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
  *(_DWORD *)(a1 + 24) = 0;
  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    (_QWORD *)(a1 + 168),
    a5);
  *(_QWORD *)(a1 + 176) = a6;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  v9 = *(_QWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 28) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *(_DWORD *)(a4 + 32);
  *(_DWORD *)(a1 + 28) |= 0x10001u;
  *(_DWORD *)(a1 + 156) = v10;
  v11 = *(_QWORD *)(a1 + 160);
  *(_OWORD *)(a1 + 40) = *a3;
  *(_OWORD *)(a1 + 56) = a3[1];
  *(_OWORD *)(a1 + 72) = a3[2];
  *(_OWORD *)(a1 + 88) = a3[3];
  *(_OWORD *)(a1 + 104) = a3[4];
  *(_OWORD *)(a1 + 120) = a3[5];
  *(_OWORD *)(a1 + 136) = a3[6];
  v12 = *(struct IUnknown **)(v11 + 16);
  if ( *(struct IUnknown **)(a1 + 192) != v12 )
    ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 192), v12);
  return a1;
}
