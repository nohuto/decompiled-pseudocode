/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180014CC0
 * Callers:
 *     ?ResourceSet_CreateTerminalResourceSet@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@PEAPEAU32@@Z @ 0x180017508 (-ResourceSet_CreateTerminalResourceSet@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSe.c)
 * Callees:
 *     ?SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x1800018D4 (-SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18002EB70 (-SetAsAcquired@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAUIResourceSetCallback@2@PEAXPEAVHostResourceInfo@2@PEAPEAV12@@Z @ 0x180047968 (-CreateInstance@ResourceSetImpl@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetai.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::CreateTerminalResourceSet(
        ExecutionModel::ResourceSetImpl *this,
        struct ExecutionModel::IResourceSet **a2)
{
  __int64 v4; // rsi
  int Instance; // esi
  ExecutionModel::ResourceSetImpl *v7; // rbx
  struct IUnknown *v8; // rdx
  _BYTE v9[104]; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+98h] [rbp+2Fh]
  struct IUnknown *v11; // [rsp+D8h] [rbp+6Fh] BYREF
  ExecutionModel::ResourceSetImpl *v12; // [rsp+E0h] [rbp+77h]
  ExecutionModel::ResourceSetImpl *v13; // [rsp+E8h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  memset_0(v9, 0, 0x70uLL);
  v4 = *((_QWORD *)this + 22);
  if ( v4 && *((_QWORD *)this + 19) )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(*(_QWORD *)v4 + 48LL))(
                 *((_QWORD *)this + 22),
                 &v11);
    if ( Instance < 0
      || (v10 |= 0x80000000,
          v12 = 0LL,
          Instance = ExecutionModel::ResourceSetImpl::CreateInstance(57LL, v9, 0LL),
          Instance < 0) )
    {
      if ( v11 )
        ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl[5].QueryInterface)(v11);
    }
    else
    {
      v7 = v12;
      ExecutionModel::ResourceSetImpl::SetAcquired(v12, 0);
      v8 = v11;
      v11 = 0LL;
      if ( *((struct IUnknown **)v7 + 22) != v8 )
        ATL::AtlComPtrAssign((struct IUnknown **)v7 + 22, v8);
      ExecutionModel::HostResourceInfo::SetAsAcquired(*((ExecutionModel::HostResourceInfo **)this + 19), v7);
      v13 = 0LL;
      *a2 = v7;
    }
  }
  else
  {
    Instance = -2147467259;
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v11);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v13);
  return (unsigned int)Instance;
}
