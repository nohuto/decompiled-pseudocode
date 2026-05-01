/*
 * XREFs of ?CreateHostResources@ExecutionModel@@YAJPEAUIRPPackageStateChangeHandler@@PEAUIRMExecServicesProvider@1@PEAPEAVHostResources@1@@Z @ 0x180025368
 * Callers:
 *     ?Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIResourceManager@2@PEAUIResourcePolicyStore@2@PEAUIRMExecServicesProvider@2@@Z @ 0x180025294 (-Initialize@ResourcePolicyEngine@ExecutionModel@@IEAAJPEAUIRPPackageStateChangeHandler@@PEAUIRes.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GHostResources@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D488 (--_GHostResources@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::CreateHostResources(
        struct IUnknown *this,
        struct IUnknown *a2,
        struct ExecutionModel::IRMExecServicesProvider *a3,
        struct ExecutionModel::HostResources **a4)
{
  struct IUnknown **v7; // rax
  unsigned int v8; // edx
  struct IUnknown **v9; // rdi
  int v10; // ebx

  *(_QWORD *)a3 = 0LL;
  v7 = (struct IUnknown **)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  if ( v7 )
  {
    *v7 = (struct IUnknown *)&ExecutionModel::HostResources::`vftable';
    *((_DWORD *)v7 + 2) = 0;
    v7[2] = (struct IUnknown *)(v7 + 2);
    v7[3] = (struct IUnknown *)(v7 + 2);
    v7[4] = 0LL;
    v7[5] = 0LL;
    *((_WORD *)v7 + 24) = 2048;
    v7[7] = (struct IUnknown *)(v7 + 7);
    v7[8] = (struct IUnknown *)(v7 + 7);
    v7[9] = 0LL;
    v7[10] = 0LL;
    *((_WORD *)v7 + 44) = 2048;
    v7[12] = (struct IUnknown *)(v7 + 12);
    v7[13] = (struct IUnknown *)(v7 + 12);
    v7[14] = 0LL;
    v7[15] = 0LL;
    v7[16] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    *(_QWORD *)a3 = 0LL;
    v10 = -2147024882;
LABEL_10:
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_14;
  }
  if ( v9[15] != this )
    ATL::AtlComPtrAssign(v9 + 15, this);
  if ( v9[16] != a2 )
    ATL::AtlComPtrAssign(v9 + 16, a2);
  v10 = ((__int64 (__fastcall *)(struct IUnknown **))(*v9)[1].lpVtbl)(v9);
  if ( v10 >= 0 )
  {
    *(_QWORD *)a3 = v9;
    goto LABEL_10;
  }
LABEL_14:
  if ( v9 )
    ExecutionModel::HostResources::`scalar deleting destructor'((ExecutionModel::HostResources *)v9, v8);
  return (unsigned int)v10;
}
