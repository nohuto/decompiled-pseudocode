/*
 * XREFs of VidSchiResetEngine @ 0x1C0024B48
 * Callers:
 *     VidSchiResetEngines @ 0x1C00A01A0 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     _TlgCreateSz @ 0x1C0020774 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00207A0 (_TlgWrite.c)
 *     Template_dp @ 0x1C0022704 (Template_dp.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0027554 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0040C30 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C009FF24 (VidSchiMarkDevicesInError.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // r14
  _DWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _TDR_RECOVERY_CONTEXT *v12; // rsi
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rax
  char v16; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const GUID *v30; // r9
  int v31; // ebx
  __int64 v32; // rcx
  unsigned __int16 *v33; // rax
  unsigned __int64 v34; // rax
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  int v44; // eax
  bool IsLimitExhausted; // al
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rcx
  const CHAR *v50; // rdx
  unsigned __int16 *v51; // rax
  LPCGUID v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  char result; // al
  __int16 v56; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v57[6]; // [rsp+3Ah] [rbp-CEh] BYREF
  int v58; // [rsp+40h] [rbp-C8h] BYREF
  int v59; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v62[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+90h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v64; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v66; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-58h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v68; // [rsp+B8h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v71; // [rsp+E0h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  _DWORD *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  __int64 v77; // [rsp+128h] [rbp+20h]
  _DWORD v78[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  __int64 v81; // [rsp+148h] [rbp+40h]
  __int64 v82; // [rsp+150h] [rbp+48h]
  __int64 v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  struct _TDR_RECOVERY_CONTEXT **v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  char *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  _BYTE *v89; // [rsp+188h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v92; // [rsp+1B8h] [rbp+B0h]
  __int64 v93; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v94; // [rsp+1C8h] [rbp+C0h]
  __int64 v95; // [rsp+1D0h] [rbp+C8h]
  __int64 v96; // [rsp+1D8h] [rbp+D0h]
  _DWORD v97[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v98; // [rsp+1E8h] [rbp+E0h]
  __int64 v99; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v100; // [rsp+1F8h] [rbp+F0h]
  __int64 v101; // [rsp+200h] [rbp+F8h]
  int *v102; // [rsp+208h] [rbp+100h]
  __int64 v103; // [rsp+210h] [rbp+108h]
  int *v104; // [rsp+218h] [rbp+110h]
  __int64 v105; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v106; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v107; // [rsp+248h] [rbp+140h]
  __int64 v108; // [rsp+250h] [rbp+148h]
  _DWORD *v109; // [rsp+258h] [rbp+150h]
  __int64 v110; // [rsp+260h] [rbp+158h]
  __int64 v111; // [rsp+268h] [rbp+160h]
  _DWORD v112[2]; // [rsp+270h] [rbp+168h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v113; // [rsp+278h] [rbp+170h]
  __int64 v114; // [rsp+280h] [rbp+178h]
  __int64 *v115; // [rsp+288h] [rbp+180h]
  __int64 v116; // [rsp+290h] [rbp+188h]
  char *v117; // [rsp+298h] [rbp+190h]
  __int64 v118; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A8h] [rbp+1A0h] BYREF

  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
  v6[3] = *(_QWORD *)(a1 + 168);
  v6[4] = *(_QWORD *)(a1 + 64);
  v6[5] = *(_QWORD *)(a1 + 96);
  WdLogEvent5_WdEvent(v6);
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2764) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 948));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2768)) == 1 )
    {
      *(_QWORD *)(a1 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2768));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 948));
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1856), &LockHandle);
  v8 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v8, 0, 0x70uLL);
  *(_DWORD *)(a1 + 196) = (*(_DWORD *)(a1 + 196) + 1) & (*(_DWORD *)(a1 + 192) - 1);
  memset(v62, 0, sizeof(v62));
  v62[0] = a1;
  DpSynchronizeExecution(*(_QWORD *)(v7 + 24), VidSchiSetNodeResettingStateAtISR, v62, *(unsigned int *)(v7 + 32), v57);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v8 = 6;
  v12 = 0LL;
  v13 = 0x400000000010LL;
  *((_QWORD *)v8 + 1) = v62[1];
  *((_QWORD *)v8 + 2) = v62[2];
  *((_QWORD *)v8 + 3) = v62[3];
  *((_QWORD *)v8 + 4) = v62[4];
  *((_QWORD *)v8 + 6) = v62[6];
  if ( LODWORD(v62[6]) != HIDWORD(v62[6]) || *(_DWORD *)(a1 + 1940) )
  {
    if ( *(_QWORD *)(v7 + 2816) == a1 )
    {
      RecoveryContext = TdrCreateRecoveryContext();
      *(_QWORD *)(v7 + 2808) = RecoveryContext;
      v12 = RecoveryContext;
      if ( RecoveryContext )
      {
        *((_QWORD *)RecoveryContext + 350) = a2;
        *((_QWORD *)RecoveryContext + 1) = v7 + 2800;
        *((_DWORD *)RecoveryContext + 4) = 6;
        v18 = *(_QWORD *)(v7 + 16);
        *((_QWORD *)v12 + 4) = v18;
        _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
        v19 = *((_QWORD *)v12 + 4);
        *((_QWORD *)v12 + 5) = -1LL;
        *((_DWORD *)v12 + 37) = 24579;
        *((_DWORD *)v12 + 38) = DpiGetDriverVersion(*(_QWORD *)(v19 + 192));
        *((_DWORD *)v12 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v7 + 2816) + 4LL);
        v20 = *((_QWORD *)v12 + 4);
        v21 = *(_QWORD *)(v20 + 456);
        if ( !v21 )
          v21 = *(_QWORD *)(v20 + 312);
        *((_QWORD *)v12 + 13) = v21;
        TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v7 + 2808), 1);
      }
      v13 = 0x400000000010LL;
    }
    ++*(_DWORD *)(a1 + 484);
    v22 = *(unsigned __int16 *)(a1 + 4);
    v23 = *(unsigned int *)(a1 + 484);
    v70 = 0LL;
    v71 = 0;
    HIDWORD(v70) = *(unsigned __int16 *)(*(_QWORD *)(v7 + 8 * v22 + 408) + 6LL);
    LODWORD(v70) = *(unsigned __int16 *)(*(_QWORD *)(v7 + 8 * v22 + 408) + 8LL);
    if ( (unsigned int)hProvider > 5
      && (qword_1C0035010 & 0x400000000010LL) != 0
      && (qword_1C0035018 & 0x400000000010LL) == qword_1C0035018 )
    {
      v24 = *(_QWORD *)(v7 + 16);
      v63 = *(_QWORD *)(v24 + 268);
      v73 = &v63;
      v74 = 8LL;
      v25 = *(unsigned __int16 **)(v24 + 1072);
      v75 = v78;
      v76 = 2LL;
      LODWORD(v24) = *v25;
      v77 = *((_QWORD *)v25 + 1);
      v85 = &v64;
      v87 = (char *)v12 + 56;
      v78[0] = v24;
      v89 = &v57[2];
      v78[1] = 0;
      v79 = a1 + 168;
      v80 = 8LL;
      v81 = a1 + 64;
      v82 = 8LL;
      v83 = a1 + 96;
      v84 = 8LL;
      v64 = v12;
      v86 = 8LL;
      v88 = 4LL;
      *(_DWORD *)&v57[2] = v23;
      v90 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002B052, 0LL, (LPCGUID)0x400000000010LL, 0xBu, &pData);
    }
    v26 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64, __int64))DxgCoreInterface[30])(
            *(_QWORD *)(v7 + 8),
            &v70,
            v23,
            v13);
    v31 = v26;
    if ( v26 )
    {
      v16 = 0;
    }
    else
    {
      v16 = 1;
      *(_DWORD *)(a1 + 16) = 2;
    }
    *((_BYTE *)v8 + 61) = 1;
    v8[14] = v26;
    if ( (unsigned int)hProvider > 5 )
    {
      v27 = 0x400000000010LL;
      if ( (qword_1C0035010 & 0x400000000010LL) != 0 && (qword_1C0035018 & 0x400000000010LL) == qword_1C0035018 )
      {
        v32 = *(_QWORD *)(v7 + 16);
        v65 = *(_QWORD *)(v32 + 268);
        v92 = &v65;
        v93 = 8LL;
        v33 = *(unsigned __int16 **)(v32 + 1072);
        v94 = v97;
        v95 = 2LL;
        LODWORD(v32) = *v33;
        v96 = *((_QWORD *)v33 + 1);
        v98 = &v66;
        v100 = &v71;
        v102 = &v58;
        v59 = *(_DWORD *)(a1 + 484);
        v104 = &v59;
        v97[0] = v32;
        v97[1] = 0;
        v66 = v12;
        v99 = 8LL;
        v101 = 4LL;
        v58 = v31;
        v103 = 4LL;
        v105 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002AFD8, 0LL, v30, 9u, &v91);
      }
    }
    v34 = v71;
    *((_QWORD *)v8 + 5) = v71;
    *((_BYTE *)v8 + 60) = v16;
    if ( v16 )
    {
      if ( v34 < v62[2] || v34 > v62[4] )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29, v30);
        v43[3] = 281LL;
        v43[4] = 10LL;
        v43[5] = v71;
        v43[6] = v62[2];
        v43[7] = *(_QWORD *)(v7 + 16);
        WdLogEvent5_WdCriticalError(v43);
        __debugbreak();
      }
      v62[5] = v34;
    }
    if ( v12 )
      *((_DWORD *)v12 + 704) = v31;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2764) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v11, 0x400000000010LL);
      v14[3] = 281LL;
      v14[4] = 2048LL;
      v14[5] = HIDWORD(v62[6]);
      v14[6] = *(unsigned int *)(a1 + 2764);
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
      __debugbreak();
    }
    v15 = WdLogNewEntry5_WdEvent(v10, v9, v11, 0x400000000010LL);
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v15 + 32) = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdEvent(v15);
    v16 = 1;
    v62[5] = v62[2];
    *((_BYTE *)v8 + 61) = 0;
  }
  v35 = 0;
  v36 = 0LL;
  v56 = 0;
  v61 = 0LL;
  if ( *(_QWORD *)(v7 + 2816) == a1 )
  {
    v37 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 104);
      v39 = *(_QWORD *)(v38 + 40);
      if ( v39 )
      {
        if ( *(_QWORD *)(v39 + 8) )
          v36 = v38;
        v61 = v36;
      }
    }
    v35 = v56;
  }
  if ( v16 )
  {
    VidSchiMarkDevicesInError(v62, (char *)&v56 + 1, &v61);
    v35 = HIBYTE(v56);
    v36 = v61;
    LOBYTE(v56) = HIBYTE(v56);
  }
  if ( v12 )
  {
    if ( v36 )
    {
      v40 = *(_QWORD *)(v36 + 40);
      v41 = *(_QWORD *)(v40 + 8);
      if ( v41 )
      {
        *((_QWORD *)v12 + 351) = *(_QWORD *)(v41 + 56);
        v42 = *(_QWORD *)(*(_QWORD *)(v40 + 8) + 64LL);
        if ( v42 )
          v42 = *(_QWORD *)(v42 + 80);
        *((_QWORD *)v12 + 12) = v42;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v36 + 40) + 2624LL) )
      {
        v44 = *(_DWORD *)(v36 + 48);
        if ( (v44 & 8) == 0 && (v44 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v40 + 32), v12);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v40 + 32), v12, 1);
          *((_BYTE *)v12 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v46 = *(_QWORD *)(v40 + 2616);
            v47 = *(_DWORD *)(v7 + 4) >> 5;
            v48 = *(_DWORD *)(v7 + 4) & 0x1F;
            *(_DWORD *)(v46 + 4 * v47) |= 1 << (*(_BYTE *)(v7 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_dp(v48, v46, v47, *(_DWORD *)(v7 + 4), *((_QWORD *)v12 + 351));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v12, 1);
    TdrCollectDbgInfoStage2(v12);
    if ( (unsigned int)hProvider > 5
      && (qword_1C0035010 & 0x400000000010LL) != 0
      && (qword_1C0035018 & 0x400000000010LL) == qword_1C0035018 )
    {
      v49 = *(_QWORD *)(v7 + 16);
      v50 = (const CHAR *)*((_QWORD *)v12 + 12);
      v67 = *(_QWORD *)(v49 + 268);
      v107 = &v67;
      v108 = 8LL;
      v51 = *(unsigned __int16 **)(v49 + 1072);
      v109 = v112;
      v110 = 2LL;
      LODWORD(v49) = *v51;
      v111 = *((_QWORD *)v51 + 1);
      v113 = &v68;
      LODWORD(v60) = *(_DWORD *)(a1 + 484);
      v115 = &v60;
      v112[0] = v49;
      v117 = (char *)v12 + 2808;
      v112[1] = 0;
      v68 = v12;
      v114 = 8LL;
      v116 = 4LL;
      v118 = 8LL;
      TlgCreateSz(&pDesc, v50);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002AF61, 0LL, v52, 9u, &v106);
    }
    TdrCompleteRecoveryContext(v12, 1, 1);
    v35 = v56;
    *(_QWORD *)(v7 + 2808) = 0LL;
  }
  if ( v16 )
  {
    v53 = v62[5];
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v53, 0LL);
    v54 = v62[5];
    *(_QWORD *)(a1 + 64) = v62[5];
    v35 = v56;
    *(_QWORD *)(a1 + 72) = v54;
    if ( (_BYTE)v56 )
      v16 = 0;
  }
  *(_QWORD *)(v7 + 400) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *((_BYTE *)v8 + 62) = v35;
  result = v16;
  *((_BYTE *)v8 + 60) = v16;
  *((_QWORD *)v8 + 5) = v62[5];
  return result;
}
