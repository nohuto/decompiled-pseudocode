/*
 * XREFs of ?Handle_RM_CreateTerminalResourceSet@ResourceManagerServerProxy@@QEAAJPEAURmResourceSetInfo@@PEAK@Z @ 0x1800396F4
 * Callers:
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180038440 (RmtSrv_RM_CreateTerminalResourceSet.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x180038A5C (--0-$CComPtr@VResourceSetServerProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV?$CComPtr@VResourceSetServerProxy@@@ATL@@PEAK@Z @ 0x180038B88 (-AddResourceSetProxy@ResourceManagerServerProxy@@IEAAJV-$CComPtr@VResourceSetServerProxy@@@ATL@@.c)
 *     ?Attach@?$CComPtrBase@VResourceSetServerProxy@@@ATL@@QEAAXPEAVResourceSetServerProxy@@@Z @ 0x180038C00 (-Attach@-$CComPtrBase@VResourceSetServerProxy@@@ATL@@QEAAXPEAVResourceSetServerProxy@@@Z.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180047D64 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
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
  unsigned int v11; // edx
  struct IUnknown *v13; // [rsp+20h] [rbp-E0h] BYREF
  struct IUnknown **v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[368]; // [rsp+40h] [rbp-C0h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v16);
  v6 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !a3 )
  {
    v8 = -2147024809;
    goto LABEL_12;
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a2, (const struct RmResourceSetInfo *)v16, v7);
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
  ATL::CComPtrBase<ResourceSetServerProxy>::Attach(&v14, (__int64)v9);
  v6 = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
LABEL_12:
    if ( v13 )
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl[5].QueryInterface)(v13);
    goto LABEL_14;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, struct IUnknown **))(**((_QWORD **)this + 7) + 88LL))(
         *((_QWORD *)this + 7),
         v16,
         &v13);
  if ( v8 < 0 )
    goto LABEL_12;
  if ( v6[1] != v13 )
    ATL::AtlComPtrAssign(v6 + 1, v13);
  v10 = ATL::CComPtr<ResourceSetServerProxy>::CComPtr<ResourceSetServerProxy>(&v15, (__int64 *)&v14);
  v8 = ResourceManagerServerProxy::AddResourceSetProxy((int)this, v10, a3);
  if ( v8 < 0 )
    goto LABEL_12;
LABEL_14:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v13,
    v11);
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown **))(*v6)[2].lpVtbl)(v6);
  return (unsigned int)v8;
}
