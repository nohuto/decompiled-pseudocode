/*
 * XREFs of ?CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAXPEAPEAV12@@Z @ 0x180004D88
 * Callers:
 *     ?Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KPEA_K@Z @ 0x1800164E0 (-Handle_ResSet_CreateTerminalResourceSet@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPE.c)
 * Callees:
 *     ?Initialize@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAX@Z @ 0x180016BBC (-Initialize@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAVResourcePolicyEngineServerProxy@2@PE.c)
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180017040 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetServerProxy::CreateInstance(
        struct ExecutionModel::ResourcePolicyEngineServerProxy *a1,
        void *a2,
        void **a3,
        struct IUnknown **a4)
{
  ExecutionModel::ResourceSetServerProxy *v4; // rbx
  ExecutionModel::ResourceSetServerProxy *v9; // rax
  int v10; // ebx
  struct IUnknown *v11; // rcx
  struct IUnknown *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  if ( a1 && a4 )
  {
    *a4 = 0LL;
    v9 = (ExecutionModel::ResourceSetServerProxy *)malloc(0x38uLL);
    if ( v9 )
    {
      *(_QWORD *)v9 = &ExecutionModel::ResourceSetServerProxy::`vftable';
      *((_DWORD *)v9 + 2) = 0;
      *((_QWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 3) = 0LL;
      *((_QWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 5) = 0LL;
      *((_WORD *)v9 + 24) = 0;
      v4 = (ExecutionModel::ResourceSetServerProxy *)v13;
    }
    if ( v4 != v9 )
    {
      ATL::AtlComPtrAssign(&v13, (struct IUnknown *)v9);
      v4 = (ExecutionModel::ResourceSetServerProxy *)v13;
    }
    if ( v4 )
    {
      v10 = ExecutionModel::ResourceSetServerProxy::Initialize(v4, a1, a2, a3);
      if ( v10 >= 0 )
      {
        v11 = v13;
        v13 = 0LL;
        *a4 = v11;
      }
    }
    else
    {
      v10 = -2147024882;
    }
  }
  else
  {
    v10 = -2147024809;
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>(&v13);
  return (unsigned int)v10;
}
