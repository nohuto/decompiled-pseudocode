/*
 * XREFs of ?OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180045910
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006290 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18004557C (-LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ.c)
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
  __int64 v12; // rcx
  const WCHAR *v13; // rdx
  const struct _TlgProvider_t *v14; // rcx
  int v15; // eax
  __int64 v16; // r10
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v20; // [rsp+30h] [rbp-99h] BYREF
  ExecutionModel::ResourceSetServerProxy *v21; // [rsp+38h] [rbp-91h] BYREF
  int v22; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-85h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-59h]
  __int64 v27; // [rsp+78h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+90h] [rbp-39h] BYREF
  ExecutionModel::ResourceSetServerProxy **v30; // [rsp+A0h] [rbp-29h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  int *v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  __int64 v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  int *v36; // [rsp+D0h] [rbp+7h]
  __int64 v37; // [rsp+D8h] [rbp+Fh]
  ExecutionModel::ResourceSetServerProxy **v38; // [rsp+E0h] [rbp+17h]
  __int64 v39; // [rsp+E8h] [rbp+1Fh]

  v4 = 0;
  if ( *(_QWORD *)(a1 + 1768) )
  {
    ExecutionModel::ResourceSet::LogRevocationBegin((ExecutionModel::ResourceSet *)a1);
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v5, 0x400000000009uLL) )
    {
      v6 = *(const WCHAR **)(a1 + 32);
      v26 = &v24;
      v24 = a1;
      v27 = 8LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSid(&v29, (const SID *)(a1 + 64));
      v7 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
      v30 = (ExecutionModel::ResourceSetServerProxy **)&v23;
      v22 = *(_DWORD *)(a1 + 136);
      v32 = &v22;
      v34 = a1 + 144;
      v8 = (*(unsigned __int8 *)(a1 + 1920) >> 1) & 1;
      v23 = (unsigned int)v7;
      v20 = v8;
      v36 = &v20;
      v38 = &v21;
      v31 = v9;
      v33 = v9;
      v35 = 8LL;
      v37 = v9;
      LODWORD(v21) = a2;
      v39 = v9;
      TlgWrite(v7, &unk_18006439D, v10, v11, 0xAu, &pData);
    }
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v21,
      *(_QWORD *)(a1 + 1768));
    v4 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceSetServerProxy *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
           v21,
           *(_QWORD *)(a1 + 1776),
           a2);
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>(&v21);
  }
  else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000009uLL) )
  {
    v13 = *(const WCHAR **)(v12 + 32);
    v24 = v12;
    v26 = &v24;
    v27 = 8LL;
    TlgCreateWsz(&pDesc, v13);
    TlgCreateSid(&v29, (const SID *)(a1 + 64));
    v14 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
    v30 = &v21;
    v20 = *(_DWORD *)(a1 + 136);
    v32 = &v20;
    v34 = a1 + 144;
    v15 = (*(unsigned __int8 *)(a1 + 1920) >> 1) & 1;
    LODWORD(v21) = (_DWORD)v14;
    v22 = v15;
    v36 = &v22;
    v38 = (ExecutionModel::ResourceSetServerProxy **)&v23;
    v31 = v16;
    v33 = v16;
    v35 = 8LL;
    v37 = v16;
    v23 = a2;
    v39 = v16;
    TlgWrite(v14, &unk_180064003, v17, v18, 0xAu, &pData);
  }
  return v4;
}
