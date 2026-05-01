/*
 * XREFs of ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x180013780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x1800123C0 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z @ 0x180013570 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z.c)
 *     ?Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@@Z @ 0x180014078 (-Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallb.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001514C (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

__int64 __fastcall ResourceManagerClientProxy::CreateTerminalResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSet **a3)
{
  ResourceSetClientProxy *v6; // rax
  struct RmResourceSetInfo *v7; // r8
  struct ResourceSetClientProxy *v8; // rsi
  CLIENT_CALL_RETURN v9; // rbx
  unsigned int v11[2]; // [rsp+30h] [rbp-8C8h] BYREF
  struct ResourceSetClientProxy *v12; // [rsp+38h] [rbp-8C0h]
  ResourceManagerClientProxy *v13; // [rsp+40h] [rbp-8B8h]
  struct ExecutionModel::IResourceSet **v14; // [rsp+48h] [rbp-8B0h]
  struct ExecutionModel::_ResourceSetInfo *v15; // [rsp+50h] [rbp-8A8h]
  CLIENT_CALL_RETURN v16; // [rsp+58h] [rbp-8A0h]
  _BYTE v17[2144]; // [rsp+60h] [rbp-898h] BYREF

  v13 = this;
  v15 = a2;
  v14 = a3;
  v11[0] = 0;
  *a3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 21184));
  v6 = (ResourceSetClientProxy *)malloc(0x60uLL);
  if ( v6 )
  {
    v8 = ResourceSetClientProxy::ResourceSetClientProxy(v6, *((void **)this + 2567), this);
    v12 = v8;
  }
  else
  {
    v8 = 0LL;
    v12 = 0LL;
  }
  if ( v8 )
  {
    ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(a2, (const struct ExecutionModel::_ResourceSetInfo *)v17, v7);
    v9.Pointer = NdrClientCall3(
                   (MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0,
                   5u,
                   0LL,
                   *((_QWORD *)this + 2567),
                   v17,
                   v11).Pointer;
    v16.Pointer = v9.Pointer;
    v11[1] = (unsigned int)v9.Pointer;
    if ( SLODWORD(v9.Simple) >= 0 )
    {
      LODWORD(v9.Pointer) = ResourceSetClientProxy::Init(v8, v11[0], *(unsigned int *)a2, 0LL);
      if ( SLODWORD(v9.Simple) >= 0 )
      {
        LODWORD(v9.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v11[0], v8);
        if ( SLODWORD(v9.Simple) >= 0 )
          *a3 = v8;
      }
    }
  }
  else
  {
    LODWORD(v9.Pointer) = -2147024882;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 21184));
  if ( SLODWORD(v9.Simple) < 0 && v8 )
    (*(void (__fastcall **)(struct ResourceSetClientProxy *))(*(_QWORD *)v8 + 16LL))(v8);
  return LODWORD(v9.Pointer);
}
