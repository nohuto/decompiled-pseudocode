/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007E940
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003D400 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     _TlgWrite @ 0x18004CAA0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180078CB8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateSz @ 0x1800795D0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180079604 (_TlgCreateWsz.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // r10
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  const WCHAR *v7; // rdx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  TraceLoggingHProvider v11; // r10
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const WCHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  int v18; // ecx
  const CHAR *v19; // rdx
  TraceLoggingHProvider v20; // r10
  _DWORD *v21; // rcx
  int v22; // eax
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+A0h] [rbp-60h] BYREF
  int *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C0h] [rbp-40h] BYREF
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+E0h] [rbp-20h] BYREF
  int *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+110h] [rbp+10h] BYREF
  int *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+140h] [rbp+40h] BYREF
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+170h] [rbp+70h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    if ( **((_DWORD **)WindowFrameLogging::Instance() + 1) > 5u )
    {
      v12 = (const CHAR *)*((_QWORD *)a2 + 6);
      v28 = a2[1];
      v32 = &v28;
      v33 = 4LL;
      TlgCreateSz(&pDesc, v12);
      v13 = (const CHAR *)*((_QWORD *)a2 + 15);
      v35 = a2 + 14;
      v36 = 4LL;
      TlgCreateSz(&v37, v13);
      v14 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v27 = *a2;
      v38 = &v27;
      v39 = 4LL;
      TlgCreateWsz(&v40, v14);
      v15 = (const CHAR *)*((_QWORD *)a2 + 8);
      v26 = a2[6];
      v41 = &v26;
      v42 = 4LL;
      TlgCreateSz(&v43, v15);
      v16 = (const CHAR *)*((_QWORD *)a2 + 10);
      v25 = a2[18];
      v44 = &v25;
      v45 = 4LL;
      TlgCreateSz(&v46, v16);
      TlgCreateWsz(&v47, *((LPCWSTR *)a2 + 11));
      v17 = (const CHAR *)*((_QWORD *)a2 + 13);
      v24 = a2[24];
      v48 = &v24;
      v49 = 4LL;
      TlgCreateSz(&v50, v17);
      TlgCreateWsz(&v51, *((LPCWSTR *)a2 + 14));
      v18 = a2[2];
      v19 = (const CHAR *)*((_QWORD *)a2 + 5);
      v52 = &v29;
      LODWORD(SRWLock) = a2[15];
      v29 = v18;
      p_SRWLock = &SRWLock;
      v53 = 4LL;
      v55 = 4LL;
      TlgCreateSz(&v56, v19);
      TlgWrite(v20, &unk_1800A8216, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v4 = *((_QWORD *)WindowFrameLogging::Instance() + 1);
    if ( *(_DWORD *)v4 > 5u
      && (*(_QWORD *)(v4 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v4 + 24) & 0x200000000000LL) == *(_QWORD *)(v4 + 24) )
    {
      v5 = (const CHAR *)*((_QWORD *)a2 + 6);
      v24 = a2[1];
      v32 = &v24;
      v33 = 4LL;
      TlgCreateSz(&pDesc, v5);
      v6 = (const CHAR *)*((_QWORD *)a2 + 15);
      v35 = a2 + 14;
      v36 = 4LL;
      TlgCreateSz(&v37, v6);
      v7 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v25 = *a2;
      v38 = &v25;
      v39 = 4LL;
      TlgCreateWsz(&v40, v7);
      v8 = (const CHAR *)*((_QWORD *)a2 + 8);
      v26 = a2[6];
      v41 = &v26;
      v42 = 4LL;
      TlgCreateSz(&v43, v8);
      v9 = (const CHAR *)*((_QWORD *)a2 + 10);
      v27 = a2[18];
      v44 = &v27;
      v45 = 4LL;
      TlgCreateSz(&v46, v9);
      TlgCreateWsz(&v47, *((LPCWSTR *)a2 + 11));
      v10 = (const CHAR *)*((_QWORD *)a2 + 13);
      v28 = a2[24];
      v48 = &v28;
      v49 = 4LL;
      TlgCreateSz(&v50, v10);
      TlgCreateWsz(&v51, *((LPCWSTR *)a2 + 14));
      TlgWrite(v11, &unk_1800A8111, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v21 = (_DWORD *)a1[6];
  v22 = a2[1];
  if ( v22 != v21[21] && (v22 != v21[19] || (int)v21[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v21 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
