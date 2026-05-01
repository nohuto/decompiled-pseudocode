/*
 * XREFs of ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800324D4
 * Callers:
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180031290 (RmtSrv_RM_CreateTerminalResourceSet.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180031834 (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180031968 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 *     ?Attach@?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z @ 0x1800319E0 (-Attach@-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180042DF4 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_CreateTerminalResourceSet(
        ResourceManagerServerProxy *this,
        struct RmResourceSetInfo *a2,
        unsigned int *a3)
{
  struct IUnknown **v6; // rbx
  struct ExecutionModel::_ResourceSetInfo *v7; // r8
  int v8; // r15d
  _QWORD *v9; // rax
  __int64 *v10; // rax
  struct IUnknown *v12; // [rsp+20h] [rbp-E0h] BYREF
  struct IUnknown **v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[352]; // [rsp+40h] [rbp-C0h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v15);
  v6 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a3 )
  {
    v8 = -2147024809;
    goto LABEL_12;
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a2, (const struct RmResourceSetInfo *)v15, v7);
  v9 = malloc(0x20uLL);
  if ( v9 )
  {
    *v9 = &ResourceSetServerProxy::`vftable';
    v9[1] = 0LL;
    v9[2] = 0LL;
    *((_DWORD *)v9 + 6) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  ATL::CComPtrBase<ExecutionModel::ResourceSet>::Attach(&v13, (__int64)v9);
  v6 = v13;
  if ( !v13 )
  {
    v8 = -2147024882;
LABEL_12:
    if ( v12 )
      ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl[5].QueryInterface)(v12);
    goto LABEL_14;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, struct IUnknown **))(**((_QWORD **)this + 7) + 88LL))(
         *((_QWORD *)this + 7),
         v15,
         &v12);
  if ( v8 < 0 )
    goto LABEL_12;
  if ( v6[1] != v12 )
    ATL::AtlComPtrAssign(v6 + 1, v12);
  v10 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v14, (__int64 *)&v13);
  v8 = ResourceManagerServerProxy::AddResourceSetProxy((int)this, v10, a3);
  if ( v8 < 0 )
    goto LABEL_12;
LABEL_14:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v12);
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown **))(*v6)[2].lpVtbl)(v6);
  return (unsigned int)v8;
}
