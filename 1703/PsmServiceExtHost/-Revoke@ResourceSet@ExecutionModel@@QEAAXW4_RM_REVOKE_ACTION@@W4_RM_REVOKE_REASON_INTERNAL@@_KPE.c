/*
 * XREFs of ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180033F14
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002E9A8 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033820 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     _TlgCreateSid @ 0x1800151E4 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ResourceSet::Revoke(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  DWORD TickCount; // eax
  __int64 v9; // rcx
  const WCHAR *v10; // rdx
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // r10
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  UCHAR v15; // dl
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  int v18; // r15d
  int v19; // r14d
  const WCHAR *v20; // rdx
  __int64 v21; // r10
  char v22; // r11
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  __int64 v25; // rbx
  const WCHAR *v26; // rdx
  const struct _TlgProvider_t *v27; // rcx
  int v28; // eax
  __int64 v29; // r10
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  char v33; // [rsp+38h] [rbp-D0h] BYREF
  char v34; // [rsp+39h] [rbp-CFh] BYREF
  char v35; // [rsp+3Ah] [rbp-CEh] BYREF
  int v36; // [rsp+3Ch] [rbp-CCh] BYREF
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  char v43[24]; // [rsp+68h] [rbp-A0h] BYREF
  char v44; // [rsp+80h] [rbp-88h] BYREF
  char v45; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+F8h] [rbp-10h] BYREF
  int *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  __int64 *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  char *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  int *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  __int64 *v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  int *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  int *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  __int64 *v65; // [rsp+178h] [rbp+70h]
  __int64 v66; // [rsp+180h] [rbp+78h]
  unsigned int *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  char *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  char *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]

  TickCount = *(_DWORD *)(a1 + 1356);
  if ( (TickCount & 1) != 0 )
  {
    if ( (unsigned int)dword_18004D030 > 4 )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)a1, 9uLL);
      if ( (_BYTE)TickCount )
      {
        v10 = *(const WCHAR **)(v9 + 32);
        v40 = *(_QWORD *)(v9 + 1840);
        v47 = &v40;
        v48 = 8LL;
        TlgCreateWsz(&pDesc, v10);
        TlgCreateSid(&v50, (const SID *)(a1 + 64));
        v11 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
        v51 = &v37;
        v36 = *(_DWORD *)(a1 + 136);
        v53 = (__int64 *)&v36;
        v55 = (char *)(a1 + 144);
        v57 = (int *)&v39;
        v59 = (__int64 *)&v33;
        v37 = (int)v11;
        v52 = v12;
        v54 = v12;
        v56 = 8LL;
        LODWORD(v39) = a3;
        v58 = v12;
        v33 = a2;
        v60 = 1LL;
        LOBYTE(TickCount) = TlgWrite(v11, &unk_1800430FE, v13, v14, 0xAu, &pData);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1356) = TickCount | 1;
    TickCount = GetTickCount();
    *(_DWORD *)(a1 + 1860) = TickCount;
    if ( *(_QWORD *)(a1 + 1784) )
    {
      HIBYTE(v38) = 0;
      *(_WORD *)((char *)&v38 + 1) = -1;
      LOBYTE(v38) = a2;
      if ( TraceLoggingProviderEnabled(v16, v15, 0LL) )
      {
        RmpSystemMemoryMetricsQuery(
          *(struct _RM_PARTITION **)(*(_QWORD *)(a1 + 1384) + 112LL),
          (struct _RM_SYSTEM_MEMORY_METRICS *)v43);
        if ( a5 )
        {
          v18 = *(_DWORD *)(a5 + 1360);
          v19 = *(_DWORD *)(a5 + 1408);
          v42 = *(_QWORD *)(a5 + 1840);
        }
        else
        {
          LOWORD(v19) = -1;
          LOBYTE(v18) = 101;
          v42 = -1LL;
        }
        if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v17, 0x400000000009uLL) )
        {
          v20 = *(const WCHAR **)(a1 + 32);
          v41 = *(_QWORD *)(a1 + 1840);
          v47 = &v41;
          v48 = 8LL;
          TlgCreateWsz(&pDesc, v20);
          LODWORD(v39) = *(_DWORD *)(a1 + 136);
          v51 = (int *)&v39;
          v33 = *(_BYTE *)(a1 + 1360);
          v53 = (__int64 *)&v33;
          v55 = &v34;
          v57 = (int *)&v35;
          v59 = &v42;
          LOWORD(v36) = *(_WORD *)(a1 + 1408);
          v61 = &v36;
          v63 = &v37;
          v65 = &v40;
          v67 = &v38;
          v69 = &v45;
          v71 = &v44;
          v50.Ptr = a1 + 144;
          *(_QWORD *)&v50.Size = 8LL;
          v52 = v21;
          v54 = 1LL;
          v34 = v22;
          v56 = 1LL;
          v35 = v18;
          v58 = 1LL;
          v60 = 8LL;
          v62 = 2LL;
          LOWORD(v37) = v19;
          v64 = 2LL;
          LODWORD(v40) = a3;
          v66 = v21;
          v68 = 1LL;
          v70 = 8LL;
          v72 = 8LL;
          TlgWrite((TraceLoggingHProvider)(a1 + 144), &unk_180042C0F, v23, v24, 0x10u, &pData);
        }
      }
      v25 = *(_QWORD *)(a1 + 1784);
      if ( v25 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 8LL))(*(_QWORD *)(a1 + 1784));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(v25, *(_QWORD *)(a1 + 1792), v38);
      LOBYTE(TickCount) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    else if ( (unsigned int)dword_18004D030 > 4 )
    {
      LOBYTE(TickCount) = TlgKeywordOn(v16, 0x400000000009uLL);
      if ( (_BYTE)TickCount )
      {
        v26 = *(const WCHAR **)(a1 + 32);
        v41 = *(_QWORD *)(a1 + 1840);
        v47 = &v41;
        v48 = 8LL;
        TlgCreateWsz(&pDesc, v26);
        TlgCreateSid(&v50, (const SID *)(a1 + 64));
        v27 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 132);
        v51 = (int *)&v40;
        LODWORD(v39) = *(_DWORD *)(a1 + 136);
        v53 = &v39;
        v55 = (char *)(a1 + 144);
        v28 = (*(_DWORD *)(a1 + 1404) >> 1) & 1;
        LODWORD(v40) = (_DWORD)v27;
        v37 = v28;
        v57 = &v37;
        v59 = (__int64 *)&v36;
        v52 = v29;
        v54 = v29;
        v56 = 8LL;
        v58 = v29;
        v36 = a3;
        v60 = v29;
        LOBYTE(TickCount) = TlgWrite(v27, &unk_180042F81, v30, v31, 0xAu, &pData);
      }
    }
  }
  return TickCount;
}
