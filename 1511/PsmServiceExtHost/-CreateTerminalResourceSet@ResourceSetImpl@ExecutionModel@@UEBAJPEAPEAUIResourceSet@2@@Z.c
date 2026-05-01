/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180013B80
 * Callers:
 *     ?ResourceSet_CreateTerminalResourceSet@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAPEAU32@@Z @ 0x1800193D8 (-ResourceSet_CreateTerminalResourceSet@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSe.c)
 * Callees:
 *     ?SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x180003CC8 (-SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z.c)
 *     ?CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAUIResourceSetCallback@2@PEAXPEAVHostResourceInfo@2@PEAPEAV12@@Z @ 0x1800055BC (-CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetai.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180036190 (-SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::CreateTerminalResourceSet(
        ExecutionModel::ResourceSetImpl *this,
        struct ExecutionModel::IResourceSet **a2)
{
  __int64 v4; // rsi
  int Instance; // esi
  __int64 v7; // rax
  ExecutionModel::ResourceSetImpl *v8; // rbx
  struct IUnknown *v9; // rdx
  _BYTE v10[104]; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+98h] [rbp+2Fh]
  struct IUnknown *v12; // [rsp+D8h] [rbp+6Fh] BYREF
  ExecutionModel::ResourceSetImpl *v13; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v14; // [rsp+E8h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  memset_0(v10, 0, 0x70uLL);
  v4 = *((_QWORD *)this + 23);
  if ( v4 && *((_QWORD *)this + 20) )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(*(_QWORD *)v4 + 48LL))(
                 *((_QWORD *)this + 23),
                 &v12);
    if ( Instance >= 0
      && (v7 = *((_QWORD *)this + 20),
          v11 |= 0x80000000,
          v13 = 0LL,
          Instance = ExecutionModel::ResourceSetImpl::CreateInstance(0x39u, (__int64)v10, 0LL, 0LL, v7, (__int64 *)&v13),
          Instance >= 0) )
    {
      v8 = v13;
      ExecutionModel::ResourceSetImpl::SetAcquired(v13, 0);
      v9 = v12;
      v12 = 0LL;
      if ( *((struct IUnknown **)v8 + 23) != v9 )
        ATL::AtlComPtrAssign((struct IUnknown **)v8 + 23, v9);
      ExecutionModel::HostResourceInfo::SetAsAcquired(*((ExecutionModel::HostResourceInfo **)this + 20), v8);
      v14 = 0LL;
      *a2 = v8;
    }
    else if ( v12 )
    {
      ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl[5].QueryInterface)(v12);
    }
  }
  else
  {
    Instance = -2147467259;
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v12);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v14);
  return (unsigned int)Instance;
}
