/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180003F40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010B48 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x1800111C8 (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180014CC0 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x1800150D4 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXV_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@Z @ 0x180015100 (--$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@-$list@V-$CComPtr@VBaseResourceSet@Exe.c)
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x1800153B0 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180037108 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        ExecutionModel::BaseResourceSet *a1,
        __int64 a2,
        unsigned int a3,
        const struct ExecutionModel::_ResourceInfo *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        unsigned __int8 *a9,
        int a10,
        struct ExecutionModel::BaseResourceSet *a11)
{
  const struct ExecutionModel::_ResourceInfo *v12; // r14
  __int64 v13; // rax
  struct _RM_POLICY_REQUEST_BUFFER *v14; // r12
  int v15; // eax
  unsigned __int8 v16; // si
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r12d
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  __int64 v24; // rdx
  void (*v25)(void); // rax
  unsigned __int8 v26; // [rsp+40h] [rbp-C0h] BYREF
  char v27[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v29; // [rsp+48h] [rbp-B8h] BYREF
  ExecutionModel::BaseResourceSet *v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  unsigned int *v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+BCh] [rbp-44h]
  unsigned int *v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  int *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  int *v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]
  ExecutionModel::BaseResourceSet **v51; // [rsp+F0h] [rbp-10h]
  int v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+FCh] [rbp-4h]

  v34[2] = 0LL;
  v34[0] = v34;
  v12 = a4;
  v29 = a3;
  v34[1] = v34;
  v13 = *((_QWORD *)a1 + 3);
  v26 = 0;
  v14 = (struct _RM_POLICY_REQUEST_BUFFER *)(*(_QWORD *)(v13 + 224) + 536LL);
  RmpPolicyRequestBufferInitialize(a4, a3, v14);
  if ( a10 == 1 )
  {
    v16 = 1;
  }
  else
  {
    v15 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
            a1,
            (__int64)v14,
            a6,
            a5,
            a8,
            &v26,
            v27,
            (__int64)v34);
    v16 = v26;
    v17 = v15;
    v28 = v15;
    if ( v15 < 0 )
    {
LABEL_20:
      v19 = v29;
      goto LABEL_11;
    }
    if ( !v27[0] )
      goto LABEL_18;
    if ( !v26 )
      goto LABEL_5;
  }
  if ( !a9 )
  {
LABEL_18:
    v17 = -2147220992;
LABEL_19:
    v28 = v17;
    goto LABEL_20;
  }
LABEL_5:
  *((_DWORD *)a11 + 340) = a5;
  *((_DWORD *)a11 + 2) = a6;
  v28 = ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)a1 + 160, a11);
  if ( v28 < 0 )
  {
    v17 = -2147024882;
    goto LABEL_19;
  }
  if ( v16 )
  {
    v19 = v29;
    *((_DWORD *)a11 + 38) = 1;
    *((_DWORD *)a11 + 338) = 1;
    if ( v19 )
    {
      v24 = v19;
      do
      {
        if ( *(_DWORD *)v12 <= 0x2Fu )
        {
          v18 = 3 * (*(int *)v12 + 8LL);
          *(_OWORD *)((char *)a11 + 8 * v18) = *(_OWORD *)v12;
          *((_QWORD *)a11 + v18 + 2) = *((_QWORD *)v12 + 2);
        }
        v12 = (const struct ExecutionModel::_ResourceInfo *)((char *)v12 + 24);
        --v24;
      }
      while ( v24 );
    }
    ExecutionModel::BaseResourceSet::RevokeResourceList(v18, v34, 1LL, 1LL);
  }
  else
  {
    ExecutionModel::BaseResourceSet::ReassignResources(a1, v14, 0LL, a11);
    v19 = v29;
  }
  if ( a9 )
    *a9 = v16;
  v17 = 0;
  v28 = 0;
LABEL_11:
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v53 = 0;
    v36 = &v28;
    v39 = &v29;
    v31 = a5;
    v42 = &v31;
    v32 = a6;
    v45 = (int *)&v32;
    v33 = v16;
    v48 = &v33;
    LODWORD(v30) = a8;
    v51 = &v30;
    v37 = (int)v20;
    v29 = v19;
    v40 = (int)v20;
    v43 = (int)v20;
    v46 = (int)v20;
    v49 = (int)v20;
    v52 = (int)v20;
    TlgWrite(v20, &unk_180043003, v21, v22, 8u, &pData);
    v17 = v28;
  }
  if ( v17 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(&v30, a11);
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove_if<_lambda_4a96282eb34af91833354b43e8ed5ac2_>(
      (char *)a1 + 160,
      &v30);
    if ( v30 )
    {
      v25 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
      if ( (char *)v25 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v30);
      }
      else if ( (char *)v25 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v30);
      }
      else
      {
        v25();
      }
    }
    (*(void (__fastcall **)(struct ExecutionModel::BaseResourceSet *, _QWORD))(*(_QWORD *)a11 + 32LL))(a11, 0LL);
    v17 = v28;
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v34);
  return (unsigned int)v17;
}
