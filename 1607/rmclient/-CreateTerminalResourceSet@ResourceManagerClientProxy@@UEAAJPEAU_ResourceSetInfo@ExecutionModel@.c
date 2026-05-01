/*
 * XREFs of ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18000BA10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180006040 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180006558 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18000AE28 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x18000B81C (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18000B9A8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000CE40 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

__int64 __fastcall ResourceManagerClientProxy::CreateTerminalResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSet **a3)
{
  struct ExecutionModel::_ResourceSetInfo *v4; // rsi
  ResourceSetClientProxy *v6; // rax
  struct RmResourceSetInfo *v7; // r8
  ResourceSetClientProxy *v8; // rdi
  CLIENT_CALL_RETURN v9; // rbx
  char *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v13; // [rsp+38h] [rbp-620h] BYREF
  ResourceSetClientProxy *v14; // [rsp+40h] [rbp-618h]
  ResourceManagerClientProxy *v15; // [rsp+48h] [rbp-610h]
  struct ExecutionModel::_ResourceSetInfo *v16; // [rsp+50h] [rbp-608h]
  struct ExecutionModel::IResourceSet **v17; // [rsp+58h] [rbp-600h]
  CLIENT_CALL_RETURN v18; // [rsp+60h] [rbp-5F8h]
  _BYTE v19[1456]; // [rsp+70h] [rbp-5E8h] BYREF

  v4 = a2;
  v15 = this;
  v16 = a2;
  v17 = a3;
  *a3 = 0LL;
  v13 = -1LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
  v6 = (ResourceSetClientProxy *)operator new(0x1E8uLL);
  if ( v6 )
  {
    v8 = ResourceSetClientProxy::ResourceSetClientProxy(v6, *((void **)this + 2681), this);
    v14 = v8;
  }
  else
  {
    v8 = 0LL;
    v14 = 0LL;
  }
  if ( v8 )
  {
    ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v4, (const struct ExecutionModel::_ResourceSetInfo *)v19, v7);
    v9.Pointer = NdrClientCall3(
                   (MIDL_STUBLESS_PROXY_INFO *)&stru_18000E820,
                   4u,
                   0LL,
                   *((_QWORD *)this + 2681),
                   v19,
                   &v13).Pointer;
    v18.Pointer = v9.Pointer;
    if ( SLODWORD(v9.Simple) >= 0 )
    {
      *((_QWORD *)v8 + 3) = v13;
      *((_QWORD *)v8 + 4) = 0LL;
      v10 = (char *)v8 + 40;
      v11 = 2LL;
      do
      {
        *(_OWORD *)v10 = *(_OWORD *)v4;
        *((_OWORD *)v10 + 1) = *((_OWORD *)v4 + 1);
        *((_OWORD *)v10 + 2) = *((_OWORD *)v4 + 2);
        *((_OWORD *)v10 + 3) = *((_OWORD *)v4 + 3);
        *((_OWORD *)v10 + 4) = *((_OWORD *)v4 + 4);
        *((_OWORD *)v10 + 5) = *((_OWORD *)v4 + 5);
        *((_OWORD *)v10 + 6) = *((_OWORD *)v4 + 6);
        v10 += 128;
        *((_OWORD *)v10 - 1) = *((_OWORD *)v4 + 7);
        v4 = (struct ExecutionModel::_ResourceSetInfo *)((char *)v4 + 128);
        --v11;
      }
      while ( v11 );
      *(_OWORD *)v10 = *(_OWORD *)v4;
      *((_OWORD *)v10 + 1) = *((_OWORD *)v4 + 1);
      *((_OWORD *)v10 + 2) = *((_OWORD *)v4 + 2);
      *((_OWORD *)v10 + 3) = *((_OWORD *)v4 + 3);
      *((_OWORD *)v10 + 4) = *((_OWORD *)v4 + 4);
      *((_OWORD *)v10 + 5) = *((_OWORD *)v4 + 5);
      *((_OWORD *)v10 + 6) = *((_OWORD *)v4 + 6);
      *((_QWORD *)v10 + 14) = *((_QWORD *)v4 + 14);
      if ( *((_QWORD *)v8 + 53) )
        ATL::AtlComPtrAssign((struct IUnknown **)v8 + 53, 0LL);
      LODWORD(v9.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v13, v8);
      if ( SLODWORD(v9.Simple) >= 0 )
        *a3 = v8;
    }
  }
  else
  {
    LODWORD(v9.Pointer) = -2147024882;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
  if ( SLODWORD(v9.Simple) < 0 && v8 )
    (*(void (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)v8 + 16LL))(v8);
  return LODWORD(v9.Pointer);
}
