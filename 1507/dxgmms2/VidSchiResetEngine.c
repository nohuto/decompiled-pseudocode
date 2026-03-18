/*
 * XREFs of VidSchiResetEngine @ 0x1C0019770
 * Callers:
 *     VidSchiResetEngines @ 0x1C0076C98 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1C0011DE4 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C001201C (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_dp @ 0x1C0013C70 (Template_dp.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C001DC94 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiMarkDevicesInError @ 0x1C0076920 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0077200 (VidSchiSubmitPreemptionCommand.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned __int64 *v5; // r13
  __int64 v6; // rsi
  struct _TDR_RECOVERY_CONTEXT *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGADAPTER *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  ULONGLONG v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r9
  __int64 v27; // rcx
  unsigned __int16 *v28; // rax
  const struct _TlgProvider_t *v29; // rcx
  ULONGLONG v30; // rdx
  const struct _TlgProvider_t *v31; // rcx
  int v32; // ebx
  const GUID *v33; // r9
  __int64 v34; // rax
  unsigned __int16 *v35; // rax
  const struct _TlgProvider_t *v36; // rcx
  _QWORD *v37; // rax
  char v38; // r12
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  bool IsLimitExhausted; // al
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  ULONGLONG v52; // rdx
  const struct _TlgProvider_t *v53; // rcx
  __int64 v54; // rcx
  const CHAR *v55; // rdx
  unsigned __int16 *v56; // rax
  TraceLoggingHProvider v57; // rcx
  LPCGUID v58; // r9
  char v60; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v61[7]; // [rsp+39h] [rbp-CFh] BYREF
  int v62; // [rsp+40h] [rbp-C8h] BYREF
  int v63; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v64; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v67; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v69; // [rsp+70h] [rbp-98h]
  __int64 v70; // [rsp+78h] [rbp-90h]
  __int64 v71; // [rsp+80h] [rbp-88h] BYREF
  __int64 v72; // [rsp+88h] [rbp-80h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v73; // [rsp+90h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v74; // [rsp+98h] [rbp-70h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v76; // [rsp+A8h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v79; // [rsp+D0h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v81; // [rsp+F8h] [rbp-10h]
  __int64 v82; // [rsp+100h] [rbp-8h]
  _DWORD *v83; // [rsp+108h] [rbp+0h]
  __int64 v84; // [rsp+110h] [rbp+8h]
  __int64 v85; // [rsp+118h] [rbp+10h]
  _DWORD v86[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v87; // [rsp+128h] [rbp+20h]
  __int64 v88; // [rsp+130h] [rbp+28h]
  __int64 v89; // [rsp+138h] [rbp+30h]
  __int64 v90; // [rsp+140h] [rbp+38h]
  __int64 v91; // [rsp+148h] [rbp+40h]
  __int64 v92; // [rsp+150h] [rbp+48h]
  struct _TDR_RECOVERY_CONTEXT **v93; // [rsp+158h] [rbp+50h]
  __int64 v94; // [rsp+160h] [rbp+58h]
  char *v95; // [rsp+168h] [rbp+60h]
  __int64 v96; // [rsp+170h] [rbp+68h]
  __int64 *v97; // [rsp+178h] [rbp+70h]
  __int64 v98; // [rsp+180h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v100; // [rsp+1A8h] [rbp+A0h]
  __int64 v101; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v102; // [rsp+1B8h] [rbp+B0h]
  __int64 v103; // [rsp+1C0h] [rbp+B8h]
  __int64 v104; // [rsp+1C8h] [rbp+C0h]
  _DWORD v105[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v106; // [rsp+1D8h] [rbp+D0h]
  __int64 v107; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v108; // [rsp+1E8h] [rbp+E0h]
  __int64 v109; // [rsp+1F0h] [rbp+E8h]
  _BYTE *v110; // [rsp+1F8h] [rbp+F0h]
  __int64 v111; // [rsp+200h] [rbp+F8h]
  int *v112; // [rsp+208h] [rbp+100h]
  __int64 v113; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v114; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v115; // [rsp+238h] [rbp+130h]
  __int64 v116; // [rsp+240h] [rbp+138h]
  _DWORD *v117; // [rsp+248h] [rbp+140h]
  __int64 v118; // [rsp+250h] [rbp+148h]
  __int64 v119; // [rsp+258h] [rbp+150h]
  _DWORD v120[2]; // [rsp+260h] [rbp+158h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v121; // [rsp+268h] [rbp+160h]
  __int64 v122; // [rsp+270h] [rbp+168h]
  int *v123; // [rsp+278h] [rbp+170h]
  __int64 v124; // [rsp+280h] [rbp+178h]
  char *v125; // [rsp+288h] [rbp+180h]
  __int64 v126; // [rsp+290h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+298h] [rbp+190h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v5 = (unsigned __int64 *)(a1 + 64);
  v4[3] = *(_QWORD *)(a1 + 136);
  v4[4] = *(_QWORD *)(a1 + 64);
  v4[5] = *(_QWORD *)(a1 + 88);
  WdLogEvent5_WdEvent(v4);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 2852) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 904), 1u);
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2856)) == 1 )
    {
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2856));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 904));
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1872), &LockHandle);
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v66 = a1;
  DpSynchronizeExecution(*(_QWORD *)(v6 + 24), VidSchiSetNodeResettingStateAtISR, &v66, *(unsigned int *)(v6 + 32), v61);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  if ( (_DWORD)v70 != HIDWORD(v70) || *(_DWORD *)(a1 + 2028) )
  {
    if ( *(_QWORD *)(v6 + 2496) == a1 )
    {
      RecoveryContext = TdrCreateRecoveryContext();
      *(_QWORD *)(v6 + 2488) = RecoveryContext;
      v7 = RecoveryContext;
      if ( RecoveryContext )
      {
        *((_QWORD *)RecoveryContext + 348) = a2;
        *((_QWORD *)RecoveryContext + 1) = v6 + 2480;
        *((_DWORD *)RecoveryContext + 4) = 6;
        v18 = *(DXGADAPTER **)(v6 + 16);
        *((_QWORD *)RecoveryContext + 4) = v18;
        DXGADAPTER::AcquireReference(v18, v15, v16, v17);
        v19 = *((_QWORD *)v7 + 4);
        *((_DWORD *)v7 + 33) = 20514;
        *((_DWORD *)v7 + 34) = DpiGetDriverVersion(*(_QWORD *)(v19 + 176));
        *((_DWORD *)v7 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2496) + 4LL);
        v20 = *((_QWORD *)v7 + 4);
        v21 = *(_QWORD *)(v20 + 440);
        if ( !v21 )
          v21 = *(_QWORD *)(v20 + 296);
        *((_QWORD *)v7 + 11) = v21;
        TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v6 + 2488), 1);
      }
    }
    ++*(_DWORD *)(a1 + 412);
    v22 = *(unsigned __int16 *)(a1 + 4);
    v23 = *(unsigned int *)(a1 + 412);
    v78 = 0LL;
    v79 = 0;
    HIDWORD(v78) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v22 + 368) + 6LL);
    v24 = *(_QWORD *)(v6 + 8 * v22 + 368);
    v25 = (const struct _TlgProvider_t *)*(unsigned __int16 *)(v24 + 8);
    LODWORD(v78) = *(unsigned __int16 *)(v24 + 8);
    if ( (unsigned int)dword_1C0027010 > 5 && TlgKeywordOn(v25, v22) )
    {
      v27 = *(_QWORD *)(v6 + 16);
      v75 = *(_QWORD *)(v27 + 252);
      v81 = &v75;
      v82 = 8LL;
      v28 = *(unsigned __int16 **)(v27 + 976);
      v83 = v86;
      v84 = 2LL;
      v29 = (const struct _TlgProvider_t *)*v28;
      v85 = *((_QWORD *)v28 + 1);
      v93 = &v76;
      v95 = (char *)v7 + 48;
      v97 = &v64;
      v86[0] = (_DWORD)v29;
      v86[1] = 0;
      v87 = a1 + 136;
      v88 = 8LL;
      v89 = a1 + 64;
      v90 = 8LL;
      v91 = a1 + 88;
      v92 = 8LL;
      v76 = v7;
      v94 = 8LL;
      v96 = 4LL;
      LODWORD(v64) = v23;
      v98 = 4LL;
      TlgWrite(v29, &unk_1C0020DE2, 0LL, v26, 0xBu, &pData);
    }
    v32 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))DxgCoreInterface[30])(*(_QWORD *)(v6 + 8), &v78, v23);
    if ( (unsigned int)dword_1C0027010 > 5 && TlgKeywordOn(v31, v30) )
    {
      v34 = *(_QWORD *)(v6 + 16);
      v71 = *(_QWORD *)(v34 + 252);
      v100 = &v71;
      v101 = 8LL;
      v35 = *(unsigned __int16 **)(v34 + 976);
      v102 = v105;
      v103 = 2LL;
      v36 = (const struct _TlgProvider_t *)*v35;
      v104 = *((_QWORD *)v35 + 1);
      v106 = &v74;
      v108 = &v79;
      v110 = &v61[3];
      v63 = *(_DWORD *)(a1 + 412);
      v112 = &v63;
      v105[0] = (_DWORD)v36;
      v105[1] = 0;
      v74 = v7;
      v107 = 8LL;
      v109 = 4LL;
      *(_DWORD *)&v61[3] = v32;
      v111 = 4LL;
      v113 = 4LL;
      TlgWrite(v36, &unk_1C0020D68, 0LL, v33, 9u, &v99);
    }
    if ( v32 )
    {
      v13 = 0;
    }
    else
    {
      v13 = 1;
      if ( v79 < v67 || v79 > v68 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
        v37[3] = 281LL;
        v37[4] = 10LL;
        v37[5] = v79;
        v37[6] = v67;
        v37[7] = *(_QWORD *)(v6 + 16);
        WdLogEvent5_WdCriticalError(v37);
        __debugbreak();
      }
      v69 = v79;
    }
    if ( v7 )
      *((_DWORD *)v7 + 700) = v32;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2852) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
      v10[3] = 281LL;
      v10[4] = 2048LL;
      v10[5] = HIDWORD(v70);
      v11 = *(unsigned int *)(a1 + 2852);
      v10[7] = 0LL;
      v10[6] = v11;
      WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    v12 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v12 + 24) = *v5;
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(a1 + 88);
    WdLogEvent5_WdEvent(v12);
    v13 = 1;
    v69 = v67;
  }
  KeFlushQueuedDpcs();
  *(_BYTE *)(a1 + 16) &= ~1u;
  v38 = 0;
  v60 = 0;
  v39 = 0LL;
  v65 = 0LL;
  if ( *(_QWORD *)(v6 + 2496) == a1 )
  {
    v40 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1480) + 1488);
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 104);
      v42 = *(_QWORD *)(v41 + 40);
      if ( v42 )
      {
        if ( *(_QWORD *)(v42 + 8) )
          v39 = v41;
        v65 = v39;
      }
    }
  }
  if ( v13 )
  {
    VidSchiMarkDevicesInError(&v66, &v60, &v65);
    v39 = v65;
    v38 = v60;
  }
  if ( v7 )
  {
    if ( v39 )
    {
      v43 = *(_QWORD *)(v39 + 40);
      v44 = *(_QWORD *)(v43 + 8);
      if ( v44 )
      {
        *((_QWORD *)v7 + 349) = *(_QWORD *)(v44 + 64);
        v45 = *(_QWORD *)(*(_QWORD *)(v43 + 8) + 72LL);
        if ( v45 )
          v46 = *(_QWORD *)(v45 + 80);
        else
          v46 = 0LL;
        *((_QWORD *)v7 + 10) = v46;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v39 + 40) + 2624LL) )
      {
        v47 = *(_DWORD *)(v39 + 48);
        if ( (v47 & 8) == 0 && (v47 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v43 + 32), v7);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v43 + 32), v7, 1);
          *((_BYTE *)v7 + 2804) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v49 = *(_QWORD *)(v43 + 2616);
            v50 = *(_DWORD *)(v6 + 4) >> 5;
            v51 = *(_DWORD *)(v6 + 4) & 0x1F;
            *(_DWORD *)(v49 + 4 * v50) |= 1 << (*(_BYTE *)(v6 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_dp(v51, v49, v50, *(_DWORD *)(v6 + 4), *((_QWORD *)v7 + 349));
            }
          }
        }
      }
      v5 = (unsigned __int64 *)(a1 + 64);
    }
    TdrUpdateDbgReport(v7, 1);
    TdrCollectDbgInfoStage2(v7);
    if ( (unsigned int)dword_1C0027010 > 5 && TlgKeywordOn(v53, v52) )
    {
      v54 = *(_QWORD *)(v6 + 16);
      v55 = (const CHAR *)*((_QWORD *)v7 + 10);
      v72 = *(_QWORD *)(v54 + 252);
      v115 = &v72;
      v116 = 8LL;
      v56 = *(unsigned __int16 **)(v54 + 976);
      v117 = v120;
      v118 = 2LL;
      LODWORD(v54) = *v56;
      v119 = *((_QWORD *)v56 + 1);
      v121 = &v73;
      v62 = *(_DWORD *)(a1 + 412);
      v123 = &v62;
      v120[0] = v54;
      v125 = (char *)v7 + 2792;
      v120[1] = 0;
      v73 = v7;
      v122 = 8LL;
      v124 = 4LL;
      v126 = 8LL;
      TlgCreateSz(&pDesc, v55);
      TlgWrite(v57, &unk_1C0020CF1, 0LL, v58, 9u, &v114);
    }
    TdrCompleteRecoveryContext(v7, 1, 1);
    *(_QWORD *)(v6 + 2488) = 0LL;
  }
  if ( v13 )
  {
    *(_DWORD *)(a1 + 368) &= 0xFFFFFFFC;
    *(_QWORD *)(v6 + 360) = 0LL;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v69, 0LL);
    if ( v38 )
      v13 = 0;
    *v5 = v69;
  }
  return v13;
}
