/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90
 * Callers:
 *     <none>
 * Callees:
 *     RmpEmptyWorkerCleanup @ 0x180002F5C (RmpEmptyWorkerCleanup.c)
 *     RmpActivityHostDelete @ 0x180004E58 (RmpActivityHostDelete.c)
 *     RmpCommitValuesAdd @ 0x180007008 (RmpCommitValuesAdd.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     MemUtilQueryMaxCommit @ 0x180008AC0 (MemUtilQueryMaxCommit.c)
 *     RmpPolicyComputeUsageLimits @ 0x180008C00 (RmpPolicyComputeUsageLimits.c)
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0 (RmpActivityHostApplyEnforcementSettings.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180029D8C (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     RmpPolicyGenerateReclaimListForCommit @ 0x180034060 (RmpPolicyGenerateReclaimListForCommit.c)
 *     RmpPolicyReclaimHostList @ 0x180034270 (RmpPolicyReclaimHostList.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_WORK *a3)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm0
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rtt
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  int v21; // esi
  __int64 v22; // r13
  unsigned __int64 v23; // r12
  __int64 v24; // rdi
  unsigned __int64 v25; // r10
  int v26; // edi
  __int64 v27; // r14
  void *v28; // rcx
  void *v29; // rcx
  ULONG v30; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+70h] [rbp-98h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR v40; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v41[48]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v43; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v44; // [rsp+130h] [rbp+28h]
  unsigned __int64 v45; // [rsp+140h] [rbp+38h]
  unsigned __int64 v46; // [rsp+148h] [rbp+40h]
  unsigned __int64 v47; // [rsp+150h] [rbp+48h]
  unsigned __int64 v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  _OWORD Buf1[3]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v51; // [rsp+1A8h] [rbp+A0h]
  _QWORD v52[22]; // [rsp+1B8h] [rbp+B0h] BYREF
  char SystemInformation[12]; // [rsp+268h] [rbp+160h] BYREF
  unsigned int v54; // [rsp+274h] [rbp+16Ch]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v56[48]; // [rsp+348h] [rbp+240h] BYREF
  unsigned int v57; // [rsp+378h] [rbp+270h]
  unsigned int v58; // [rsp+37Ch] [rbp+274h]
  char v59[544]; // [rsp+4A8h] [rbp+3A0h] BYREF
  char v60; // [rsp+6C8h] [rbp+5C0h] BYREF
  int v61; // [rsp+6D0h] [rbp+5C8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+6D8h] [rbp+5D0h] BYREF
  void *v63; // [rsp+6E8h] [rbp+5E0h]
  int v64; // [rsp+6F0h] [rbp+5E8h]
  int v65; // [rsp+6F4h] [rbp+5ECh]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+6F8h] [rbp+5F0h] BYREF
  void *v67; // [rsp+708h] [rbp+600h]
  int v68; // [rsp+710h] [rbp+608h]
  int v69; // [rsp+714h] [rbp+60Ch]
  int *v70; // [rsp+718h] [rbp+610h]
  __int64 v71; // [rsp+720h] [rbp+618h]
  char *v72; // [rsp+728h] [rbp+620h]
  __int64 v73; // [rsp+730h] [rbp+628h]
  __int64 *v74; // [rsp+738h] [rbp+630h]
  __int64 v75; // [rsp+740h] [rbp+638h]
  unsigned __int64 *v76; // [rsp+748h] [rbp+640h]
  __int64 v77; // [rsp+750h] [rbp+648h]

  v32 = 0LL;
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180040AB1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v63 = &unk_180040ABC;
    UserData.Reserved = 2;
    v64 = 32;
    v65 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  *((_DWORD *)a2 + 281) &= ~1u;
  if ( *((_DWORD *)a2 + 164) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 3340LL) & 2) == 0 )
    {
      v4 = *((_OWORD *)a2 + 43);
      Buf1[0] = *((_OWORD *)a2 + 42);
      v5 = *((_OWORD *)a2 + 44);
      Buf1[1] = v4;
      v51 = *((_QWORD *)a2 + 90);
      Buf1[2] = v5;
      if ( (_QWORD)v4 )
      {
        v31 = RmpActivityHostQueryCommit(a2, 0LL, &v32);
        if ( v31 >= 0 )
        {
          v6 = v32;
          v7 = *((_QWORD *)a2 + 119);
          v8 = *((_QWORD *)a2 + 121);
          v9 = v32;
          v10 = *((_QWORD *)a2 + 120);
          if ( v32 >= v7 )
          {
            if ( v32 >= v10 )
            {
              if ( v32 >= *((_QWORD *)a2 + 117) )
              {
                v12 = *((_QWORD *)a2 + 117);
                v11 = 4LL;
                v7 = -1LL;
              }
              else
              {
                v7 = *((_QWORD *)a2 + 117);
                v11 = 3LL;
                v12 = *((_QWORD *)a2 + 120);
              }
            }
            else
            {
              v12 = *((_QWORD *)a2 + 119);
              v11 = 2LL;
              v7 = *((_QWORD *)a2 + 120);
            }
          }
          else
          {
            v11 = 1LL;
            v12 = 0LL;
          }
          v30 = v11;
          if ( v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v13 = v8 >> 4;
          }
          else
          {
            v13 = v32 >> 3;
            if ( v32 >> 3 < 0x100000 )
              v13 = 0x100000LL;
          }
          v14 = v13 + v32 - 1;
          v15 = v14 / v13 * v13;
          v16 = -1LL;
          v38 = (v14 / v13 * (unsigned __int128)v13) >> 64;
          if ( is_mul_ok(v14 / v13, v13) )
            v16 = v15;
          v33 = v16;
          if ( v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v16 > v8 )
          {
            v33 = (v13 + v8 - 1) / v13;
            RtlULongLongMult(v33, v13, &v33);
            v16 = v33;
            v6 = v32;
            v11 = v30;
          }
          if ( v16 == -1LL || v13 == -1LL || (v17 = v16 + v13, v16 + v13 < v16) )
            v17 = -1LL;
          if ( v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( v16 >= v8 )
              v16 = v8;
            v33 = v16;
            if ( v8 < v17 )
              v17 = v8;
          }
          v18 = 2 * v13;
          if ( v18 >= v16 )
            v19 = 0LL;
          else
            v19 = v16 - v18;
          if ( v12 <= v19 )
            v12 = v19;
          if ( v9 >= v10 && *((_DWORD *)a2 + 12) == 1 )
          {
            RmpCommitValuesAdd(v9, 0x100000LL, &v35);
            v11 = v30;
            if ( v7 >= v35 )
              v7 = v35;
          }
          if ( v9 <= *((_QWORD *)a2 + 121) && v7 >= v17 )
            v7 = v17;
          *(_QWORD *)&Buf1[0] = v12;
          *((_QWORD *)&Buf1[0] + 1) = v7;
          RmpActivityHostUpdateCommitUseState(a2, v6, v11);
          v20 = v32;
          if ( v32 > *((_QWORD *)a2 + 85) && v32 < v17 )
          {
            v37 = *((_QWORD *)a2 + 5);
            v22 = v37 + 424;
            memset_0(v41, 0, 0x88uLL);
            v30 = MemUtilQueryMaxCommit(&v36);
            if ( v30 )
              v23 = v38;
            else
              v23 = v36;
            NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
            NtQuerySystemInformation(SystemPerformanceInformation, v56, 0x158u, 0LL);
            NtQuerySystemInformation(SystemMemoryListInformation, v52, 0xB0u, 0LL);
            v24 = v58;
            memset_0(&v43, 0, 0x48uLL);
            v49 += v52[20] + v52[19] + v52[18] + v52[17] + v52[16] + v52[15] + v52[14] + v52[13];
            v25 = RmpPageSize * (unsigned int)v24;
            v43 = v25;
            v46 = RmpPageSize * v54;
            v47 = RmpPageSize * (v52[0] + v52[1] + v52[10] + v52[9] + v52[8] + v52[7] + v52[5] + v52[6]);
            v48 = v46 - v47;
            v44 = RmpPageSize * (v24 - v57);
            v45 = v25 - v44;
            if ( v30 || v25 > v23 )
              v23 = RmpPageSize * (unsigned int)v24;
            RmpPolicyComputeUsageLimits(v22, v22 + 64, (__int64)&v43, v23, (__int64)v41);
            v26 = v42 - v45;
            v27 = v17 - v20 + 1;
            if ( (__int64)(v42 - v45) < v27 )
            {
              RmpPolicyPopulateActivityHostMetrics(v37, 0, v22 + 1360, 0x43u, RmpPolicyFilterActivityHostWithFlags, 2LL);
              RmpPolicyGenerateReclaimListForCommit(v22, v22 + 1360, 0, v27 - v26, 0, 2);
              if ( *(_DWORD *)(v22 + 1400) )
                RmpPolicyReclaimHostList(v22 + 1360, 2, 8, 0, 0LL);
            }
          }
          v31 = RmpActivityHostApplyEnforcementSettings((struct _RM_ACTIVITY_HOST *)a2, Buf1);
        }
      }
    }
  }
  if ( dword_18004C030 )
  {
    RmpActivityHostGetTracingId(a2, v59);
    if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
    {
      v71 = 4LL;
      v70 = &v31;
      v72 = &v60;
      LODWORD(v34) = v61;
      v74 = &v34;
      v76 = &v32;
      v73 = 8LL;
      v75 = 4LL;
      v77 = 8LL;
      *(_DWORD *)&v40.Level = 516;
      v66.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&v40.Id = ((unsigned int)&unk_180040A63 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v40.Keyword = 1LL;
      v66.Size = *(unsigned __int16 *)off_18004C038;
      v67 = &unk_180040A6E;
      v66.Reserved = 2;
      v68 = 66;
      v69 = 1;
      EventWriteTransfer(RegHandle, &v40, 0LL, 0LL, 6u, &v66);
    }
  }
  if ( *((int *)a2 + 5) >= 0 && !(*((_DWORD *)a2 + 164) + *((_DWORD *)a2 + 158)) )
  {
    RmpActivityHostCheckQueueWork(a2);
    if ( (*((_BYTE *)a2 + 816) & 3) == 0 && (*((_BYTE *)a2 + 1124) & 1) == 0 )
      RmpActivityHostDelete((struct _RM_ACTIVITY_HOST *)a2);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v21 = _InterlockedDecrement((volatile signed __int32 *)a2 + 4);
  if ( v21 < 0 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v21 )
  {
    if ( !*((_DWORD *)a2 + 8) )
    {
      RmpEmptyWorkerCleanup((_QWORD *)a2 + 110);
      if ( *((_DWORD *)a2 + 12) == 1 )
      {
        v28 = (void *)*((_QWORD *)a2 + 91);
        if ( v28 )
          CloseHandle(v28);
        v29 = (void *)*((_QWORD *)a2 + 92);
        if ( v29 )
          CloseHandle(v29);
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
