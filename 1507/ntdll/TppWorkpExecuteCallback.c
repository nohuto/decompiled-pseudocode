/*
 * XREFs of TppWorkpExecuteCallback @ 0x18003AE20
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180001684 (RtlpTpETWCallbackEnqueue.c)
 *     TppETWCallbackDequeue @ 0x1800016FC (TppETWCallbackDequeue.c)
 *     LdrLockLoaderLock @ 0x1800086A0 (LdrLockLoaderLock.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpWaitCouldDeadlock @ 0x1800360D0 (RtlpWaitCouldDeadlock.c)
 *     TpCallbackMayRunLong @ 0x18003BD90 (TpCallbackMayRunLong.c)
 *     LdrpWorkCallback @ 0x18003BF00 (LdrpWorkCallback.c)
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18005F9DC (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     LdrUnlockLoaderLock @ 0x180070A40 (LdrUnlockLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x18007DF30 (TppWorkCancelPendingCallbacks.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x180094E50 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5774 (TppAdjustRunningThreadGoal.c)
 */

__int64 __fastcall TppWorkpExecuteCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  int v6; // r13d
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r12d
  int v10; // r15d
  signed __int32 v11; // ecx
  __int64 result; // rax
  signed __int32 v13; // ett
  __int64 v14; // r15
  int v15; // edx
  __int64 v16; // rcx
  signed __int32 v17; // eax
  __int64 *v18; // r8
  __int64 v19; // r13
  signed __int8 v20; // cf
  volatile signed __int64 *v21; // r9
  __int64 **v22; // rax
  signed __int64 v23; // rax
  __int64 v24; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v26; // rax
  signed __int64 v27; // rax
  int v28; // ecx
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  void *v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // r10
  _DWORD *v36; // rcx
  int v37; // eax
  unsigned int v38; // eax
  _QWORD *v39; // r8
  __int64 (__fastcall *v40)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v41; // rcx
  struct _TEB *v42; // rax
  void *SubProcessTag; // rdx
  volatile signed __int64 *v44; // r13
  unsigned __int64 v45; // rbx
  bool v46; // cl
  char *v47; // rdx
  bool v48; // zf
  signed __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rdx
  signed __int64 v52; // rtt
  int i; // ecx
  signed __int32 v54; // r8d
  signed __int32 v55; // ett
  volatile signed __int64 *v56; // [rsp+30h] [rbp-79h]
  signed __int64 v57; // [rsp+30h] [rbp-79h]
  int v58; // [rsp+38h] [rbp-71h] BYREF
  __int64 v59; // [rsp+40h] [rbp-69h]
  signed __int64 v60; // [rsp+48h] [rbp-61h]
  __int64 v61; // [rsp+50h] [rbp-59h]
  unsigned __int64 v62; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 *v64; // [rsp+68h] [rbp-41h]
  __int64 v65; // [rsp+70h] [rbp-39h]
  void *UniqueThread; // [rsp+78h] [rbp-31h]
  int v67; // [rsp+80h] [rbp-29h]
  signed __int32 v68[3]; // [rsp+84h] [rbp-25h] BYREF
  __int64 v69; // [rsp+90h] [rbp-19h]
  char v70[6]; // [rsp+98h] [rbp-11h] BYREF
  __int16 v71; // [rsp+9Eh] [rbp-Bh]
  int v72; // [rsp+B8h] [rbp+Fh]
  int v73; // [rsp+BCh] [rbp+13h]

  v2 = a2 - 192;
  v59 = a2;
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 136), a2, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  v4 = *(_QWORD *)(v2 + 128);
  v5 = 0LL;
  v62 = 0LL;
  v6 = 0;
  if ( v4 )
    LdrLockLoaderLock(0, 0LL, &v62);
  _m_prefetchw((const void *)(v2 + 224));
  v7 = *(_DWORD *)(v2 + 224);
  do
  {
    v8 = v7;
    if ( v7 >> 1 )
    {
      v9 = 1;
      v10 = 1;
      v11 = v7 & 1 | (2 * (v7 >> 1) - 2);
      if ( (v11 & 0xFFFFFFFE) == 0 )
      {
        v11 |= 1u;
        v10 = 0;
      }
    }
    else
    {
      v9 = 0;
      v11 = v7 | 1;
      v10 = 0;
    }
    v13 = v8;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 224), v11, v8);
    v7 = result;
  }
  while ( v13 != (_DWORD)result );
  if ( v4 )
  {
    if ( v9 )
    {
      if ( (int)LdrAddRefDll(0LL, v4) < 0 )
      {
        v9 = 0;
        v10 = 0;
        v6 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v4;
      }
    }
    result = LdrUnlockLoaderLock(0LL, v62);
    if ( v6 )
    {
      TppBarrierAdjust(v2 + 56, 0xFFFFFFFFLL);
      result = TppWorkCancelPendingCallbacks(v2);
    }
  }
  if ( !v10 )
    goto LABEL_39;
  _InterlockedExchangeAdd((volatile signed __int32 *)v2, 2u);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackEnqueue(
      *(_QWORD *)(v2 + 136),
      v2 + 192,
      *(_QWORD *)(v2 + 80),
      *(_QWORD *)(v2 + 88),
      *(_QWORD *)(v2 + 104));
  v14 = *(_QWORD *)(v2 + 136);
  v15 = *(_DWORD *)(v2 + 184);
  v61 = v14;
  if ( !v14 )
  {
    v14 = TppPoolpGlobalPool;
    v61 = TppPoolpGlobalPool;
  }
  if ( v14 == TppPoolpSerializedPool )
    v15 = 1;
  v16 = *(unsigned int *)(v2 + 200);
  _m_prefetchw((const void *)(v14 + 428));
  v17 = *(_DWORD *)(v14 + 428);
  while ( v17 == -2 )
  {
    v54 = v16;
LABEL_103:
    v55 = v17;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 428), v54, v17);
    if ( v55 == v17 )
      goto LABEL_21;
  }
  if ( v17 != (_DWORD)v16 && v17 != -1 )
  {
    v54 = -1;
    goto LABEL_103;
  }
LABEL_21:
  v58 = 0;
  v18 = (__int64 *)(v2 + 208);
  v19 = *(_QWORD *)(v14 + 8LL * v15 + 16) + 24 * v16;
  v20 = _interlockedbittestandset64((volatile signed __int32 *)(v19 + 16), 0LL);
  v21 = (volatile signed __int64 *)(v19 + 16);
  v69 = v19;
  v56 = (volatile signed __int64 *)(v19 + 16);
  if ( v20 )
  {
    v44 = (volatile signed __int64 *)(v19 + 16);
LABEL_62:
    v45 = *v44;
    while ( (v45 & 1) != 0 )
    {
      if ( RtlpWaitCouldDeadlock() )
        ZwTerminateProcess(-1LL, 3221225547LL);
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      v46 = 0;
      v68[0] = 3;
      v65 = 0LL;
      if ( (v45 & 2) != 0 )
      {
        v64 = 0LL;
        v67 = -1;
        v63 = v45 & 0xFFFFFFFFFFFFFFF0uLL;
        v47 = (char *)((unsigned __int64)&v63 | v45 & 8 | 7);
        v46 = (v45 & 4) == 0;
      }
      else
      {
        v64 = &v63;
        v67 = v45 >> 4;
        if ( v67 > 1 )
          v47 = (char *)((unsigned __int64)&v63 | 0xB);
        else
          v47 = (char *)&v63 + 3;
        if ( !(unsigned int)(v45 >> 4) )
          v67 = -2;
      }
      v49 = _InterlockedCompareExchange64(v44, (signed __int64)v47, v45);
      v48 = v45 == v49;
      v45 = v49;
      v60 = v49;
      if ( !v48 )
      {
LABEL_72:
        RtlBackoff(&v58);
        _m_prefetchw((const void *)v44);
        goto LABEL_62;
      }
      if ( v46 )
        RtlpOptimizeSRWLockList(v44);
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        for ( i = SRWLockSpinCount; i; --i )
        {
          if ( (v68[0] & 2) == 0 )
            break;
          _mm_pause();
        }
      }
      v20 = _interlockedbittestandreset(v68, 1u);
      if ( v20 )
      {
        do
          NtWaitForAlertByThreadId(v56, 0LL);
        while ( (v68[0] & 4) == 0 );
        v45 = v60;
        v44 = v56;
      }
    }
    v60 = _InterlockedCompareExchange64(v44, v45 + 1, v45);
    if ( v45 != v60 )
      goto LABEL_72;
    v19 = v69;
    v18 = (__int64 *)(v2 + 208);
    v21 = v56;
  }
  v22 = *(__int64 ***)(v19 + 8);
  *v18 = v19;
  v18[1] = (__int64)v22;
  if ( *v22 != (__int64 *)v19 )
    __fastfail(3u);
  *v22 = v18;
  *(_QWORD *)(v19 + 8) = v18;
  v23 = _InterlockedCompareExchange64(v21, 0LL, 1LL);
  if ( v23 != 1 )
  {
    do
    {
      v50 = -1LL;
      if ( (v23 & 6) == 2 )
        v50 = 3LL;
      v51 = v50 + v23;
      v52 = v23;
      v23 = _InterlockedCompareExchange64(v21, v50 + v23, v23);
    }
    while ( v52 != v23 );
    v14 = v61;
    if ( v50 == 3 )
      RtlpWakeSRWLock(v21, v51, 0LL);
  }
  if ( *(_DWORD *)(v14 + 424) != MEMORY[0x7FFE03C0] )
    TppAdjustRunningThreadGoal(v14);
  v24 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v26 = *ThreadPoolData;
    if ( *(_QWORD *)(v26 + 48) == v14 && *(_DWORD *)(v26 + 128) == 3 )
    {
      *(_DWORD *)(v26 + 128) = 4;
      v24 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v14 + 8));
  v27 = *(_QWORD *)(v14 + 8);
  LODWORD(v57) = v27;
  do
  {
    HIDWORD(v57) = HIDWORD(v27) + 1;
    if ( (v57 & 0xFFFF0000) != 0 || (_DWORD)v24 )
    {
      v28 = 0;
    }
    else
    {
      v28 = 1;
      LODWORD(v57) = (unsigned __int16)v57 ^ ((v57 & 0xFFFF0000) + 0x10000);
    }
    v29 = v57;
    v30 = v27;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v57, v27);
    LODWORD(v57) = v27;
  }
  while ( v30 != v27 );
  if ( v28 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(v14 + 56), v29, v24, v21);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
LABEL_39:
  if ( v9 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)a1 = 72LL;
      *(_DWORD *)(a1 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(v2 + 96));
      *(_BYTE *)(a1 + 76) |= 1u;
    }
    *(_DWORD *)(a1 + 144) |= 0x240u;
    *(_QWORD *)(a1 + 184) = v2;
    if ( (*(_DWORD *)(v2 + 160) & 3) == 1 )
      TpCallbackMayRunLong(a1);
    v31 = *(void **)(v2 + 104);
    if ( v31 )
    {
      *(_QWORD *)(a1 + 80) = v31;
      v42 = NtCurrentTeb();
      SubProcessTag = v42->SubProcessTag;
      v42->SubProcessTag = v31;
      if ( MEMORY[0x7FFE0390] )
      {
        if ( v31 != SubProcessTag )
        {
          v72 = (int)SubProcessTag;
          v71 = 1349;
          v73 = (int)v31;
          NtTraceEvent(MEMORY[0x7FFE0390], 1026LL, 8LL, v70);
        }
      }
    }
    v32 = v59;
    NtCurrentTeb()->ActivityId = *(_GUID *)(v2 + 112);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v2 + 136),
        v32,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *(_QWORD *)(v2 + 104));
    v33 = *(_QWORD *)(v2 + 104);
    v34 = *(_QWORD *)(v2 + 88);
    v35 = *(_QWORD *)(v2 + 80);
    v36 = NtCurrentTeb()->ThreadPoolData;
    if ( v36 )
    {
      v37 = v36[3];
      ++*((_QWORD *)v36 + 2);
      v38 = ((_BYTE)v37 - 1) & 1;
      v36[3] = v38;
      v39 = &v36[8 * v38];
      v5 = v39 + 4;
      v39[4] = v35;
      v39[5] = v34;
      v39[6] = v33;
      v39[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v2 + 88);
    v40 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v2 + 80);
    if ( v40 == LdrpWorkCallback )
      result = LdrpWorkCallback(a1, *(_QWORD *)(v2 + 88), v2, v34);
    else
      result = v40(a1, *(_QWORD *)(v2 + 88), v2, v34);
    if ( MEMORY[0x7FFE0386] )
      result = RtlpTpETWCallbackStop(
                 *(_QWORD *)(v2 + 136),
                 v32,
                 *(_QWORD *)(v2 + 80),
                 *(_QWORD *)(v2 + 88),
                 *(_QWORD *)(v2 + 104));
    if ( v5 )
    {
      v41 = v5[3];
      result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v41 )
      {
        result -= v41;
        v5[3] = result;
      }
    }
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    return (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
  }
  return result;
}
