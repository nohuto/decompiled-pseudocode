/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x180011C70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x180011690 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z @ 0x180012840 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@@Z @ 0x1800132F8 (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEA.c)
 *     ?Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@@Z @ 0x180013330 (-Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallb.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001423C (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        const struct _GUID *a4,
        bool *a5,
        struct ExecutionModel::IResourceSet *a6,
        struct ExecutionModel::IResourceSet **a7)
{
  struct ExecutionModel::IResourceSetCallback *v7; // rbx
  ResourceSetClientProxy *v10; // rax
  struct RmResourceSetInfo *v11; // r8
  struct ResourceSetClientProxy *v12; // rsi
  CLIENT_CALL_RETURN v13; // rbx
  struct ExecutionModel::IResourceSet **v14; // r13
  unsigned int v16; // [rsp+50h] [rbp-8F8h] BYREF
  int v17; // [rsp+54h] [rbp-8F4h] BYREF
  _DWORD v18[2]; // [rsp+58h] [rbp-8F0h] BYREF
  const struct _GUID *Simple; // [rsp+60h] [rbp-8E8h]
  struct ResourceSetClientProxy *v20; // [rsp+68h] [rbp-8E0h]
  struct ExecutionModel::IResourceSetCallback *v21; // [rsp+70h] [rbp-8D8h]
  _QWORD v22[6]; // [rsp+78h] [rbp-8D0h] BYREF
  struct ExecutionModel::IResourceSet **v23; // [rsp+A8h] [rbp-8A0h]
  _BYTE v24[2128]; // [rsp+B0h] [rbp-898h] BYREF

  Simple = a4;
  v7 = a3;
  v21 = a3;
  v22[1] = this;
  v22[2] = a2;
  v22[4] = a3;
  v22[3] = a5;
  v23 = a7;
  v22[5] = a7;
  v16 = 0;
  v18[0] = 0;
  v17 = 0;
  v22[0] = 0LL;
  *a7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 20728));
  v10 = (ResourceSetClientProxy *)malloc(0x60uLL);
  if ( v10 )
  {
    v12 = ResourceSetClientProxy::ResourceSetClientProxy(v10, *((void **)this + 2510), this);
    v20 = v12;
  }
  else
  {
    v12 = 0LL;
    v20 = 0LL;
  }
  if ( v12 )
  {
    if ( a6 )
    {
      LODWORD(v13.Pointer) = ResourceManagerClientProxy::GetResourceSetMapIterator(this, a6, v22);
      if ( SLODWORD(v13.Simple) < 0 )
        goto LABEL_15;
      v17 = *(_DWORD *)(*(_QWORD *)(v22[0] + 32LL) + 24LL);
      v7 = v21;
    }
    ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(
      a2,
      (const struct ExecutionModel::_ResourceSetInfo *)v24,
      v11);
    v13.Pointer = NdrClientCall3(
                    (MIDL_STUBLESS_PROXY_INFO *)&stru_180016730,
                    2u,
                    0LL,
                    *((_QWORD *)this + 2511),
                    v24,
                    v7 != 0LL,
                    Simple,
                    (unsigned __int64)v18 & (unsigned __int64)((unsigned __int128)-(__int128)(unsigned __int64)a5 >> 64),
                    (unsigned __int64)&v17 & -(__int64)(a6 != 0LL),
                    &v16).Pointer;
    Simple = (const struct _GUID *)v13.Simple;
    v18[1] = v13.Pointer;
    v14 = v23;
    if ( SLODWORD(v13.Simple) >= 0 )
    {
      LODWORD(v13.Pointer) = ResourceSetClientProxy::Init(v12, v16, *(unsigned int *)a2, v21);
      if ( SLODWORD(v13.Simple) >= 0 )
      {
        LODWORD(v13.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v16, v12);
        if ( SLODWORD(v13.Simple) >= 0 )
        {
          if ( a5 )
            *a5 = v18[0] != 0;
          *v14 = v12;
        }
      }
    }
  }
  else
  {
    LODWORD(v13.Pointer) = -2147024882;
  }
LABEL_15:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 20728));
  if ( SLODWORD(v13.Simple) < 0 && v12 )
    (*(void (__fastcall **)(struct ResourceSetClientProxy *))(*(_QWORD *)v12 + 16LL))(v12);
  return LODWORD(v13.Pointer);
}
