/*
 * XREFs of ?OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180040960
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180017040 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     ?LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800405AC (-LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::OnRelease(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  const struct _TlgProvider_t *v5; // rcx
  const WCHAR *v6; // rdx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // eax
  __int64 v9; // r10
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  unsigned int v12; // edx
  __int64 v13; // rcx
  const WCHAR *v14; // rdx
  const struct _TlgProvider_t *v15; // rcx
  int v16; // eax
  __int64 v17; // r10
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int v21; // [rsp+30h] [rbp-99h] BYREF
  ExecutionModel::ResourceSetServerProxy *v22; // [rsp+38h] [rbp-91h] BYREF
  int v23; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-85h] BYREF
  __int64 v25; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v27; // [rsp+70h] [rbp-59h]
  __int64 v28; // [rsp+78h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+90h] [rbp-39h] BYREF
  ExecutionModel::ResourceSetServerProxy **v31; // [rsp+A0h] [rbp-29h]
  __int64 v32; // [rsp+A8h] [rbp-21h]
  int *v33; // [rsp+B0h] [rbp-19h]
  __int64 v34; // [rsp+B8h] [rbp-11h]
  __int64 v35; // [rsp+C0h] [rbp-9h]
  __int64 v36; // [rsp+C8h] [rbp-1h]
  int *v37; // [rsp+D0h] [rbp+7h]
  __int64 v38; // [rsp+D8h] [rbp+Fh]
  ExecutionModel::ResourceSetServerProxy **v39; // [rsp+E0h] [rbp+17h]
  __int64 v40; // [rsp+E8h] [rbp+1Fh]

  v4 = 0;
  if ( *(_QWORD *)(a1 + 1760) )
  {
    ExecutionModel::ResourceSet::LogRevocationBegin((ExecutionModel::ResourceSet *)a1);
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v5, 0x400000000009uLL) )
    {
      v6 = *(const WCHAR **)(a1 + 32);
      v27 = &v25;
      v25 = a1;
      v28 = 8LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSid(&v30, (const SID *)(a1 + 64));
      v7 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
      v31 = (ExecutionModel::ResourceSetServerProxy **)&v24;
      v23 = *(_DWORD *)(a1 + 136);
      v33 = &v23;
      v35 = a1 + 144;
      v8 = (*(unsigned __int8 *)(a1 + 1912) >> 1) & 1;
      v24 = (unsigned int)v7;
      v21 = v8;
      v37 = &v21;
      v39 = &v22;
      v32 = v9;
      v34 = v9;
      v36 = 8LL;
      v38 = v9;
      LODWORD(v22) = a2;
      v40 = v9;
      TlgWrite(v7, &unk_18005C708, v10, v11, 0xAu, &pData);
    }
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v22,
      *(_QWORD *)(a1 + 1760));
    v4 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceSetServerProxy *, _QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
           v22,
           *(_QWORD *)(a1 + 1768),
           a2);
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>(
      &v22,
      v12);
  }
  else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000009uLL) )
  {
    v14 = *(const WCHAR **)(v13 + 32);
    v25 = v13;
    v27 = &v25;
    v28 = 8LL;
    TlgCreateWsz(&pDesc, v14);
    TlgCreateSid(&v30, (const SID *)(a1 + 64));
    v15 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
    v31 = &v22;
    v21 = *(_DWORD *)(a1 + 136);
    v33 = &v21;
    v35 = a1 + 144;
    v16 = (*(unsigned __int8 *)(a1 + 1912) >> 1) & 1;
    LODWORD(v22) = (_DWORD)v15;
    v23 = v16;
    v37 = &v23;
    v39 = (ExecutionModel::ResourceSetServerProxy **)&v24;
    v32 = v17;
    v34 = v17;
    v36 = 8LL;
    v38 = v17;
    v24 = a2;
    v40 = v17;
    TlgWrite(v15, &unk_18005C3A5, v18, v19, 0xAu, &pData);
  }
  return v4;
}
