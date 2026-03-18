/*
 * XREFs of VidSchiResetEngine @ 0x1C00212F4
 * Callers:
 *     VidSchiResetEngines @ 0x1C008A9C4 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     Template_dp @ 0x1C001F6D0 (Template_dp.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0022F10 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C005F394 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C008A758 (VidSchiMarkDevicesInError.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned __int64 *v5; // r13
  __int64 v6; // r14
  struct _TDR_RECOVERY_CONTEXT *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  signed __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  const struct _TlgProvider_t *v29; // rcx
  const GUID *v30; // r9
  __int64 v31; // rcx
  unsigned __int16 *v32; // rax
  const struct _TlgProvider_t *v33; // rcx
  __int64 v34; // rdx
  const struct _TlgProvider_t *v35; // rcx
  int v36; // ebx
  __int64 v37; // r8
  const GUID *v38; // r9
  __int64 v39; // rax
  unsigned __int16 *v40; // rax
  const struct _TlgProvider_t *v41; // rcx
  char v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  int v52; // eax
  bool IsLimitExhausted; // al
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  const struct _TlgProvider_t *v57; // rcx
  __int64 v58; // rcx
  const CHAR *v59; // rdx
  unsigned __int16 *v60; // rax
  TraceLoggingHProvider v61; // rcx
  LPCGUID v62; // r9
  char v64; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v65[7]; // [rsp+39h] [rbp-CFh] BYREF
  int v66; // [rsp+40h] [rbp-C8h] BYREF
  int v67; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v68; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v71; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v72; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v73; // [rsp+70h] [rbp-98h]
  __int64 v74; // [rsp+78h] [rbp-90h]
  __int64 v75; // [rsp+80h] [rbp-88h] BYREF
  __int64 v76; // [rsp+88h] [rbp-80h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v77; // [rsp+90h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v78; // [rsp+98h] [rbp-70h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v80; // [rsp+A8h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v83; // [rsp+D0h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v85; // [rsp+F8h] [rbp-10h]
  __int64 v86; // [rsp+100h] [rbp-8h]
  _DWORD *v87; // [rsp+108h] [rbp+0h]
  __int64 v88; // [rsp+110h] [rbp+8h]
  __int64 v89; // [rsp+118h] [rbp+10h]
  _DWORD v90[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v91; // [rsp+128h] [rbp+20h]
  __int64 v92; // [rsp+130h] [rbp+28h]
  __int64 v93; // [rsp+138h] [rbp+30h]
  __int64 v94; // [rsp+140h] [rbp+38h]
  __int64 v95; // [rsp+148h] [rbp+40h]
  __int64 v96; // [rsp+150h] [rbp+48h]
  struct _TDR_RECOVERY_CONTEXT **v97; // [rsp+158h] [rbp+50h]
  __int64 v98; // [rsp+160h] [rbp+58h]
  char *v99; // [rsp+168h] [rbp+60h]
  __int64 v100; // [rsp+170h] [rbp+68h]
  __int64 *v101; // [rsp+178h] [rbp+70h]
  __int64 v102; // [rsp+180h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v103; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v104; // [rsp+1A8h] [rbp+A0h]
  __int64 v105; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v106; // [rsp+1B8h] [rbp+B0h]
  __int64 v107; // [rsp+1C0h] [rbp+B8h]
  __int64 v108; // [rsp+1C8h] [rbp+C0h]
  _DWORD v109[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v110; // [rsp+1D8h] [rbp+D0h]
  __int64 v111; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v112; // [rsp+1E8h] [rbp+E0h]
  __int64 v113; // [rsp+1F0h] [rbp+E8h]
  _BYTE *v114; // [rsp+1F8h] [rbp+F0h]
  __int64 v115; // [rsp+200h] [rbp+F8h]
  int *v116; // [rsp+208h] [rbp+100h]
  __int64 v117; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v118; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v119; // [rsp+238h] [rbp+130h]
  __int64 v120; // [rsp+240h] [rbp+138h]
  _DWORD *v121; // [rsp+248h] [rbp+140h]
  __int64 v122; // [rsp+250h] [rbp+148h]
  __int64 v123; // [rsp+258h] [rbp+150h]
  _DWORD v124[2]; // [rsp+260h] [rbp+158h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v125; // [rsp+268h] [rbp+160h]
  __int64 v126; // [rsp+270h] [rbp+168h]
  int *v127; // [rsp+278h] [rbp+170h]
  __int64 v128; // [rsp+280h] [rbp+178h]
  char *v129; // [rsp+288h] [rbp+180h]
  __int64 v130; // [rsp+290h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+298h] [rbp+190h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v5 = (unsigned __int64 *)(a1 + 64);
  v4[3] = *(_QWORD *)(a1 + 160);
  v4[4] = *(_QWORD *)(a1 + 64);
  v4[5] = *(_QWORD *)(a1 + 88);
  WdLogEvent5_WdEvent(v4);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 2724) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 912));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2728)) == 1 )
    {
      *(_QWORD *)(a1 + 192) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2728));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 912));
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1824), &LockHandle);
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v70 = a1;
  DpSynchronizeExecution(*(_QWORD *)(v6 + 24), VidSchiSetNodeResettingStateAtISR, &v70, *(unsigned int *)(v6 + 32), v65);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  if ( (_DWORD)v74 != HIDWORD(v74) || *(_DWORD *)(a1 + 1900) )
  {
    if ( *(_QWORD *)(v6 + 2456) == a1
      && (RecoveryContext = TdrCreateRecoveryContext(),
          *(_QWORD *)(v6 + 2448) = RecoveryContext,
          (v7 = RecoveryContext) != 0LL) )
    {
      *((_QWORD *)RecoveryContext + 348) = a2;
      *((_QWORD *)RecoveryContext + 1) = v6 + 2440;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v20 = *(_QWORD *)(v6 + 16);
      *((_QWORD *)RecoveryContext + 4) = v20;
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 1uLL);
      v15 = 0;
      if ( (v21 + 1 < 0) ^ __OFADD__(1LL, v21) | (v21 == -1) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20, v17, v18, v19);
        *(_QWORD *)(v22 + 24) = 1141LL;
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = *((_QWORD *)v7 + 4);
      *((_DWORD *)v7 + 33) = 20515;
      *((_DWORD *)v7 + 34) = DpiGetDriverVersion(*(_QWORD *)(v23 + 176));
      *((_DWORD *)v7 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2456) + 4LL);
      v24 = *((_QWORD *)v7 + 4);
      v25 = *(_QWORD *)(v24 + 440);
      if ( !v25 )
        v25 = *(_QWORD *)(v24 + 296);
      *((_QWORD *)v7 + 11) = v25;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v6 + 2448), 1);
    }
    else
    {
      v15 = 0;
    }
    ++*(_DWORD *)(a1 + 444);
    v26 = *(unsigned __int16 *)(a1 + 4);
    v27 = *(unsigned int *)(a1 + 444);
    v82 = 0LL;
    v83 = 0;
    HIDWORD(v82) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v26 + 376) + 6LL);
    v28 = *(_QWORD *)(v6 + 8 * v26 + 376);
    v29 = (const struct _TlgProvider_t *)*(unsigned __int16 *)(v28 + 8);
    LODWORD(v82) = *(unsigned __int16 *)(v28 + 8);
    if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn(v29, 0x400000000000uLL) )
    {
      v31 = *(_QWORD *)(v6 + 16);
      v79 = *(_QWORD *)(v31 + 252);
      v85 = &v79;
      v86 = 8LL;
      v32 = *(unsigned __int16 **)(v31 + 984);
      v87 = v90;
      v88 = 2LL;
      v33 = (const struct _TlgProvider_t *)*v32;
      v89 = *((_QWORD *)v32 + 1);
      v97 = &v80;
      v99 = (char *)v7 + 48;
      v101 = &v68;
      v90[0] = (_DWORD)v33;
      v90[1] = 0;
      v91 = a1 + 160;
      v92 = 8LL;
      v93 = a1 + 64;
      v94 = 8LL;
      v95 = a1 + 88;
      v96 = 8LL;
      v80 = v7;
      v98 = 8LL;
      v100 = 4LL;
      LODWORD(v68) = v27;
      v102 = 4LL;
      TlgWrite(v33, &unk_1C0025FA2, 0LL, v30, 0xBu, &pData);
    }
    v36 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))DxgCoreInterface[30])(*(_QWORD *)(v6 + 8), &v82, v27);
    if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn(v35, 0x400000000000uLL) )
    {
      v39 = *(_QWORD *)(v6 + 16);
      v75 = *(_QWORD *)(v39 + 252);
      v104 = &v75;
      v105 = 8LL;
      v40 = *(unsigned __int16 **)(v39 + 984);
      v106 = v109;
      v107 = 2LL;
      v41 = (const struct _TlgProvider_t *)*v40;
      v108 = *((_QWORD *)v40 + 1);
      v110 = &v78;
      v112 = &v83;
      v114 = &v65[3];
      v67 = *(_DWORD *)(a1 + 444);
      v116 = &v67;
      v109[0] = (_DWORD)v41;
      v109[1] = 0;
      v78 = v7;
      v111 = 8LL;
      v113 = 4LL;
      *(_DWORD *)&v65[3] = v36;
      v115 = 4LL;
      v117 = 4LL;
      TlgWrite(v41, &unk_1C0025F28, 0LL, v38, 9u, &v103);
    }
    if ( !v36 )
    {
      v15 = 1;
      if ( v83 < v71 || v83 > v72 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34, v37, v38);
        v51[3] = 281LL;
        v51[4] = 10LL;
        v51[5] = v83;
        v51[6] = v71;
        v51[7] = *(_QWORD *)(v6 + 16);
        WdLogEvent5_WdCriticalError(v51);
        __debugbreak();
      }
      v73 = v83;
    }
    if ( v7 )
      *((_DWORD *)v7 + 700) = v36;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2724) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10, v11);
      v12[3] = 281LL;
      v12[4] = 2048LL;
      v12[5] = HIDWORD(v74);
      v13 = *(unsigned int *)(a1 + 2724);
      v12[7] = 0LL;
      v12[6] = v13;
      WdLogEvent5_WdCriticalError(v12);
      __debugbreak();
    }
    v14 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v14 + 24) = *v5;
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(a1 + 88);
    WdLogEvent5_WdEvent(v14);
    v15 = 1;
    v73 = v71;
  }
  KeFlushQueuedDpcs();
  *(_BYTE *)(a1 + 16) &= ~1u;
  v42 = 0;
  v64 = 0;
  v43 = 0LL;
  v69 = 0LL;
  if ( *(_QWORD *)(v6 + 2456) == a1 )
  {
    v44 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1512) + 1520);
    if ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 104);
      v46 = *(_QWORD *)(v45 + 40);
      if ( v46 )
      {
        if ( *(_QWORD *)(v46 + 8) )
          v43 = v45;
        v69 = v43;
      }
    }
  }
  if ( v15 )
  {
    VidSchiMarkDevicesInError(&v70, &v64, &v69);
    v43 = v69;
    v42 = v64;
  }
  if ( v7 )
  {
    if ( v43 )
    {
      v47 = *(_QWORD *)(v43 + 40);
      v48 = *(_QWORD *)(v47 + 8);
      if ( v48 )
      {
        *((_QWORD *)v7 + 349) = *(_QWORD *)(v48 + 64);
        v49 = *(_QWORD *)(*(_QWORD *)(v47 + 8) + 72LL);
        if ( v49 )
          v50 = *(_QWORD *)(v49 + 80);
        else
          v50 = 0LL;
        *((_QWORD *)v7 + 10) = v50;
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v43 + 40) + 2624LL) )
      {
        v52 = *(_DWORD *)(v43 + 48);
        if ( (v52 & 8) == 0 && (v52 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v47 + 32), v7);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v47 + 32), v7, 1);
          *((_BYTE *)v7 + 2804) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v54 = *(_QWORD *)(v47 + 2616);
            v55 = *(_DWORD *)(v6 + 4) >> 5;
            v56 = *(_DWORD *)(v6 + 4) & 0x1F;
            *(_DWORD *)(v54 + 4 * v55) |= 1 << (*(_BYTE *)(v6 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_dp(v56, v54, v55, *(_DWORD *)(v6 + 4), *((_QWORD *)v7 + 349));
            }
          }
        }
      }
      v5 = (unsigned __int64 *)(a1 + 64);
    }
    TdrUpdateDbgReport(v7, 1);
    TdrCollectDbgInfoStage2(v7);
    if ( (unsigned int)dword_1C002F020 > 5 && TlgKeywordOn(v57, 0x400000000000uLL) )
    {
      v58 = *(_QWORD *)(v6 + 16);
      v59 = (const CHAR *)*((_QWORD *)v7 + 10);
      v76 = *(_QWORD *)(v58 + 252);
      v119 = &v76;
      v120 = 8LL;
      v60 = *(unsigned __int16 **)(v58 + 984);
      v121 = v124;
      v122 = 2LL;
      LODWORD(v58) = *v60;
      v123 = *((_QWORD *)v60 + 1);
      v125 = &v77;
      v66 = *(_DWORD *)(a1 + 444);
      v127 = &v66;
      v124[0] = v58;
      v129 = (char *)v7 + 2792;
      v124[1] = 0;
      v77 = v7;
      v126 = 8LL;
      v128 = 4LL;
      v130 = 8LL;
      TlgCreateSz(&pDesc, v59);
      TlgWrite(v61, &unk_1C0025EB1, 0LL, v62, 9u, &v118);
    }
    TdrCompleteRecoveryContext(v7, 1, 1);
    *(_QWORD *)(v6 + 2448) = 0LL;
  }
  if ( v15 )
  {
    *(_DWORD *)(a1 + 400) &= 0xFFFFFFFC;
    *(_QWORD *)(v6 + 368) = 0LL;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v73, 0LL);
    if ( v42 )
      v15 = 0;
    *v5 = v73;
  }
  return v15;
}
