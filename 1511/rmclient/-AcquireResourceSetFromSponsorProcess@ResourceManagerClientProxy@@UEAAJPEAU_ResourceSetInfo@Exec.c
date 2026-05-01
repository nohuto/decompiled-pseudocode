/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180012F60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x1800123C0 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z @ 0x180013570 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJKPEAVResourceSetClientProxy@@@Z.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@@Z @ 0x180014040 (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEA.c)
 *     ?Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@@Z @ 0x180014078 (-Init@ResourceSetClientProxy@@QEAAJKW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallb.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001514C (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 */

__int64 __fastcall ResourceManagerClientProxy::AcquireResourceSetFromSponsorProcess(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        const unsigned __int16 *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  PSID v14; // rbx
  struct ResourceSetClientProxy *v15; // rsi
  char v16; // r12
  CLIENT_CALL_RETURN v17; // rbx
  ResourceSetClientProxy *v18; // rax
  struct RmResourceSetInfo *v19; // r8
  unsigned int v21; // [rsp+94h] [rbp-924h] BYREF
  int v22; // [rsp+98h] [rbp-920h] BYREF
  int v23; // [rsp+9Ch] [rbp-91Ch] BYREF
  ULONG v24; // [rsp+A0h] [rbp-918h]
  int Pointer; // [rsp+A4h] [rbp-914h]
  struct ResourceSetClientProxy *v26; // [rsp+A8h] [rbp-910h]
  void *Simple; // [rsp+B0h] [rbp-908h]
  __int64 v28; // [rsp+B8h] [rbp-900h] BYREF
  struct ExecutionModel::IResourceSetCallback *v29; // [rsp+C0h] [rbp-8F8h]
  ExecutionModel *v30; // [rsp+C8h] [rbp-8F0h]
  ResourceManagerClientProxy *v31; // [rsp+D0h] [rbp-8E8h]
  struct ExecutionModel::_ResourceSetInfo *v32; // [rsp+D8h] [rbp-8E0h]
  PSID v33; // [rsp+E0h] [rbp-8D8h]
  bool *v34; // [rsp+E8h] [rbp-8D0h]
  struct ExecutionModel::IResourceSetCallback *v35; // [rsp+F0h] [rbp-8C8h]
  struct ExecutionModel::IResourceSet **v36; // [rsp+F8h] [rbp-8C0h]
  const unsigned __int16 *v37; // [rsp+100h] [rbp-8B8h]
  _BYTE v38[2144]; // [rsp+110h] [rbp-8A8h] BYREF

  Simple = a4;
  v29 = a3;
  v30 = a2;
  v31 = this;
  v32 = a2;
  v35 = a3;
  v37 = a5;
  v14 = Sid;
  v33 = Sid;
  v34 = a11;
  v36 = a13;
  v21 = 0;
  v15 = 0LL;
  v23 = 0;
  v22 = 0;
  v28 = 0LL;
  v16 = 0;
  if ( Sid )
  {
    if ( !RtlValidSid(Sid) )
    {
      LODWORD(v17.Pointer) = -2147024809;
      goto LABEL_20;
    }
    v24 = RtlLengthSid(Sid);
  }
  else
  {
    v24 = 0;
  }
  *a13 = 0LL;
  v16 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 21184));
  v18 = (ResourceSetClientProxy *)malloc(0x60uLL);
  if ( v18 )
  {
    v15 = ResourceSetClientProxy::ResourceSetClientProxy(v18, *((void **)this + 2567), this);
    v26 = v15;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v15 )
  {
    LODWORD(v17.Pointer) = -2147024882;
    goto LABEL_20;
  }
  if ( a12 )
  {
    LODWORD(v17.Pointer) = ResourceManagerClientProxy::GetResourceSetMapIterator(this, a12, &v28);
    if ( SLODWORD(v17.Simple) < 0 )
      goto LABEL_20;
    v22 = *(_DWORD *)(*(_QWORD *)(v28 + 32) + 24LL);
    v14 = v33;
  }
  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v30, (const struct ExecutionModel::_ResourceSetInfo *)v38, v19);
  v17.Pointer = NdrClientCall3(
                  (MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0,
                  0x1Bu,
                  0LL,
                  *((_QWORD *)this + 2568),
                  v38,
                  v29 != 0LL,
                  Simple,
                  v37,
                  v14,
                  v24,
                  a7,
                  a8,
                  a9,
                  a10,
                  (unsigned __int64)&v23 & -(__int64)(a11 != 0LL),
                  (unsigned __int64)&v22 & -(__int64)(a12 != 0LL),
                  &v21).Pointer;
  Simple = (void *)v17.Simple;
  Pointer = (int)v17.Pointer;
  if ( SLODWORD(v17.Simple) >= 0 )
  {
    LODWORD(v17.Pointer) = ResourceSetClientProxy::Init(v15, v21, *(unsigned int *)v30, v29);
    if ( SLODWORD(v17.Simple) >= 0 )
    {
      LODWORD(v17.Pointer) = ResourceManagerClientProxy::AddProxyResourceSet(this, v21, v15);
      if ( SLODWORD(v17.Simple) >= 0 )
      {
        if ( a11 )
          *a11 = v23 != 0;
        *a13 = v15;
      }
    }
  }
LABEL_20:
  if ( v16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 21184));
  if ( SLODWORD(v17.Simple) < 0 && v15 )
    (*(void (__fastcall **)(struct ResourceSetClientProxy *))(*(_QWORD *)v15 + 16LL))(v15);
  return LODWORD(v17.Pointer);
}
