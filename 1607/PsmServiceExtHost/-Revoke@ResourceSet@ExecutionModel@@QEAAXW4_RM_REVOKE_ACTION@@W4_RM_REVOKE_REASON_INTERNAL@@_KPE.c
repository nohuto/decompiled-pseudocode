/*
 * XREFs of ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54
 * Callers:
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180011B4C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033EF0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E94 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 * Callees:
 *     ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180003658 (-QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z.c)
 *     _TlgCreateWsz @ 0x180015F14 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017A10 (_TlgCreateSid.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectivePriority@ResourceSet@ExecutionModel@@QEBA?AW4Enum@Priority@2@_K@Z @ 0x1800283C0 (-GetEffectivePriority@ResourceSet@ExecutionModel@@QEBA-AW4Enum@Priority@2@_K@Z.c)
 */

char __fastcall ExecutionModel::ResourceSet::Revoke(__int64 a1, char a2, int a3, unsigned __int64 a4, __int64 a5)
{
  DWORD TickCount; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  const GUID *v13; // r8
  const GUID *v14; // r9
  const struct _TlgProvider_t *v15; // rcx
  const void *v16; // rdx
  __int64 *v17; // rax
  UCHAR v18; // dl
  const struct _TlgProvider_t *v19; // rcx
  unsigned __int64 *v20; // r8
  const struct _TlgProvider_t *v21; // rcx
  char EffectivePriority; // r14
  int v23; // r12d
  int v24; // r15d
  __int64 v25; // rax
  const WCHAR *v26; // rdx
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  const WCHAR *v31; // rdx
  int v32; // eax
  char v34; // [rsp+30h] [rbp-D0h] BYREF
  char v35; // [rsp+31h] [rbp-CFh] BYREF
  char v36; // [rsp+32h] [rbp-CEh] BYREF
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+3Ch] [rbp-C4h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  char v45[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  int *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  int *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  __int64 *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  unsigned int *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  char *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]

  TickCount = *(_DWORD *)(a1 + 1356);
  v41 = a3;
  if ( (TickCount & 1) != 0 )
  {
    if ( (unsigned int)dword_18004C030 > 4 )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)a1, 9uLL);
      if ( (_BYTE)TickCount )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 1368) + 64LL))(v10 + 1368);
        v12 = *(const WCHAR **)(a1 + 32);
        v42 = v11;
        v48 = &v42;
        v49 = 8LL;
        TlgCreateWsz(&pDesc, v12);
        TlgCreateSid(&v51, (const SID *)(a1 + 64));
        v15 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
        v52 = &v37;
        v16 = &unk_180042A8D;
        v40 = *(_DWORD *)(a1 + 136);
        v54 = &v40;
        v56 = (char *)(a1 + 144);
        v58 = &v39;
        v17 = (__int64 *)&v34;
        v37 = (int)v15;
        v39 = a3;
        v34 = a2;
        v61 = 1LL;
LABEL_21:
        v60 = v17;
        v59 = 4LL;
        v57 = 8LL;
        v55 = 4LL;
        v53 = 4LL;
        LOBYTE(TickCount) = TlgWrite(v15, v16, v13, v14, 0xAu, &pData);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1356) = TickCount | 1;
    TickCount = GetTickCount();
    *(_DWORD *)(a1 + 1928) = TickCount;
    if ( *(_QWORD *)(a1 + 1792) )
    {
      HIBYTE(v38) = 0;
      *(_WORD *)((char *)&v38 + 1) = -1;
      LOBYTE(v38) = a2;
      if ( TraceLoggingProviderEnabled(v19, v18, 0LL) )
      {
        ExecutionModel::QueryCommitAndAvailablePhysical((ExecutionModel *)v45, &v46, v20);
        EffectivePriority = 101;
        if ( a5 )
        {
          v23 = *(_DWORD *)(a5 + 1360);
          v24 = *(_DWORD *)(a5 + 1416);
          v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a5 + 1368) + 64LL))(a5 + 1368);
        }
        else
        {
          LOWORD(v24) = -1;
          LOBYTE(v23) = 101;
          v44 = -1LL;
        }
        if ( *(_QWORD *)(a1 + 1400) )
          EffectivePriority = ExecutionModel::ResourceSet::GetEffectivePriority(a1, a4);
        if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v21, 0x400000000009uLL) )
        {
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 1368) + 64LL))(a1 + 1368);
          v26 = *(const WCHAR **)(a1 + 32);
          v43 = v25;
          v48 = &v43;
          v49 = 8LL;
          TlgCreateWsz(&pDesc, v26);
          v39 = *(_DWORD *)(a1 + 136);
          v52 = &v39;
          v34 = *(_BYTE *)(a1 + 1360);
          v54 = (int *)&v34;
          v56 = &v35;
          v58 = (int *)&v36;
          v60 = &v44;
          LOWORD(v40) = *(_WORD *)(a1 + 1416);
          v62 = &v40;
          v64 = &v37;
          LODWORD(v42) = v41;
          v66 = &v42;
          v68 = &v38;
          v70 = v45;
          v72 = &v46;
          v51.Ptr = a1 + 144;
          *(_QWORD *)&v51.Size = 8LL;
          v53 = 4LL;
          v55 = 1LL;
          v35 = EffectivePriority;
          v57 = 1LL;
          v36 = v23;
          v59 = 1LL;
          v61 = 8LL;
          v63 = 2LL;
          LOWORD(v37) = v24;
          v65 = 2LL;
          v67 = 4LL;
          v69 = 1LL;
          v71 = 8LL;
          v73 = 8LL;
          TlgWrite((TraceLoggingHProvider)(a1 + 144), &unk_180042B64, v27, v28, 0x10u, &pData);
        }
      }
      v29 = *(_QWORD *)(a1 + 1792);
      if ( v29 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 8LL))(*(_QWORD *)(a1 + 1792));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 24LL))(v29, *(_QWORD *)(a1 + 1800), v38);
      LOBYTE(TickCount) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    else if ( (unsigned int)dword_18004C030 > 4 )
    {
      LOBYTE(TickCount) = TlgKeywordOn(v19, 0x400000000009uLL);
      if ( (_BYTE)TickCount )
      {
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 1368) + 64LL))(a1 + 1368);
        v31 = *(const WCHAR **)(a1 + 32);
        v43 = v30;
        v48 = &v43;
        v49 = 8LL;
        TlgCreateWsz(&pDesc, v31);
        TlgCreateSid(&v51, (const SID *)(a1 + 64));
        v15 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
        v52 = &v42;
        v16 = &unk_18004289C;
        v41 = *(_DWORD *)(a1 + 136);
        v54 = &v41;
        v56 = (char *)(a1 + 144);
        v32 = (*(_DWORD *)(a1 + 1412) >> 1) & 1;
        LODWORD(v42) = (_DWORD)v15;
        v39 = v32;
        v58 = &v39;
        v17 = (__int64 *)&v37;
        v37 = a3;
        v61 = 4LL;
        goto LABEL_21;
      }
    }
  }
  return TickCount;
}
