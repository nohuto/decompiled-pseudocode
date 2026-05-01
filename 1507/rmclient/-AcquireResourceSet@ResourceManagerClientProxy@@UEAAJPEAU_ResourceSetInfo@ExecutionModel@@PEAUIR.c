/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800118B0
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
        void *a4,
        const unsigned __int16 *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        bool *a10,
        struct ExecutionModel::IResourceSet *a11,
        struct ExecutionModel::IResourceSet **a12)
{
  PSID v13; // rbx
  struct ResourceSetClientProxy *v14; // rsi
  char v15; // r12
  CLIENT_CALL_RETURN v16; // rbx
  ResourceSetClientProxy *v17; // rax
  struct RmResourceSetInfo *v18; // r8
  __int64 v20; // [rsp+80h] [rbp-918h] BYREF
  int v21; // [rsp+88h] [rbp-910h] BYREF
  int v22; // [rsp+8Ch] [rbp-90Ch] BYREF
  ULONG v23; // [rsp+90h] [rbp-908h]
  int Pointer; // [rsp+94h] [rbp-904h]
  struct ResourceSetClientProxy *v25; // [rsp+98h] [rbp-900h]
  void *Simple; // [rsp+A0h] [rbp-8F8h]
  __int64 v27; // [rsp+A8h] [rbp-8F0h] BYREF
  struct ExecutionModel::IResourceSetCallback *v28; // [rsp+B0h] [rbp-8E8h]
  ExecutionModel *v29; // [rsp+B8h] [rbp-8E0h]
  ResourceManagerClientProxy *v30; // [rsp+C0h] [rbp-8D8h]
  struct ExecutionModel::_ResourceSetInfo *v31; // [rsp+C8h] [rbp-8D0h]
  PSID v32; // [rsp+D0h] [rbp-8C8h]
  bool *v33; // [rsp+D8h] [rbp-8C0h]
  struct ExecutionModel::IResourceSetCallback *v34; // [rsp+E0h] [rbp-8B8h]
  struct ExecutionModel::IResourceSet **v35; // [rsp+E8h] [rbp-8B0h]
  const unsigned __int16 *v36; // [rsp+F0h] [rbp-8A8h]
  _BYTE v37[2128]; // [rsp+100h] [rbp-898h] BYREF

  Simple = a4;
  v28 = a3;
  v29 = a2;
  v30 = this;
  v31 = a2;
  v34 = a3;
  v36 = a5;
  v13 = Sid;
  v32 = Sid;
  v33 = a10;
  v35 = a12;
  HIDWORD(v20) = 0;
  v14 = 0LL;
  v22 = 0;
  v21 = 0;
  v27 = 0LL;
  v15 = 0;
  if ( Sid )
  {
    if ( !RtlValidSid(Sid) )
    {
      LODWORD(v16.Pointer) = -2147024809;
      goto LABEL_20;
    }
    v23 = RtlLengthSid(Sid);
  }
  else
  {
    v23 = 0;
  }
  *a12 = 0LL;
  v15 = 1;
  LOBYTE(v20) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 20728));
  v17 = (ResourceSetClientProxy *)malloc(0x60uLL);
  if ( v17 )
  {
    v14 = ResourceSetClientProxy::ResourceSetClientProxy(v17, *((void **)this + 2510), this);
    v25 = v14;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v14 )
  {
    LODWORD(v16.Pointer) = -2147024882;
    goto LABEL_20;
  }
  if ( a11 )
  {
    LODWORD(v16.Pointer) = ResourceManagerClientProxy::GetResourceSetMapIterator(this, a11, &v27);
    if ( SLODWORD(v16.Simple) < 0 )
      goto LABEL_20;
    v21 = *(_DWORD *)(*(_QWORD *)(v27 + 32) + 24LL);
    v13 = v32;
  }
  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v29, (const struct ExecutionModel::_ResourceSetInfo *)v37, v18);
  v16.Pointer = NdrClientCall3(
                  (MIDL_STUBLESS_PROXY_INFO *)&stru_180016730,
                  3u,
                  0LL,
                  *((_QWORD *)this + 2511),
                  v37,
                  v28 != 0LL,
                  Simple,
                  v36,
                  v13,
                  v23,
                  a7,
                  a8,
                  a9,
                  (unsigned __int64)&v22 & -(__int64)(a10 != 0LL),
                  (unsigned __int64)&v21 & -(__int64)(a11 != 0LL),
                  (char *)&v20 + 4,
                  v20).Pointer;
  Simple = (void *)v16.Simple;
  Pointer = (int)v16.Pointer;
  if ( SLODWORD(v16.Simple) >= 0 )
  {
    LODWORD(v16.Pointer) = ResourceSetClientProxy::Init(v14, HIDWORD(v20), *(unsigned int *)v29, v28);
    if ( SLODWORD(v16.Simple) >= 0 )
    {
      LODWORD(v16.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, HIDWORD(v20), v14);
      if ( SLODWORD(v16.Simple) >= 0 )
      {
        if ( a10 )
          *a10 = v22 != 0;
        *a12 = v14;
      }
    }
  }
LABEL_20:
  if ( v15 )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 20728));
  if ( SLODWORD(v16.Simple) < 0 && v14 )
    (*(void (__fastcall **)(struct ResourceSetClientProxy *))(*(_QWORD *)v14 + 16LL))(v14);
  return LODWORD(v16.Pointer);
}
