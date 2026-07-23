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

void __fastcall TppWorkpExecuteCallback(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  void *v4; // rbx
  _QWORD *v5; // rsi
  int v6; // r13d
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r12d
  int v10; // r15d
  signed __int32 v11; // ecx
  HANDLE *v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  __int64 *v16; // r8
  __int64 v17; // r13
  signed __int8 v18; // cf
  volatile signed __int64 *v19; // r9
  __int64 **v20; // rax
  signed __int64 v21; // rax
  int v22; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v24; // rax
  signed __int64 v25; // rax
  int v26; // ecx
  signed __int64 v27; // rtt
  void *v28; // rcx
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r10
  _DWORD *v33; // rcx
  int v34; // eax
  unsigned int v35; // eax
  _QWORD *v36; // r8
  void (__cdecl *v37)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK); // rbx
  __int64 v38; // rcx
  struct _TEB *v39; // rax
  void *SubProcessTag; // rdx
  volatile signed __int64 *v41; // r13
  unsigned __int64 v42; // rbx
  bool v43; // cl
  char *v44; // rdx
  bool v45; // zf
  signed __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  signed __int64 v49; // rtt
  int i; // ecx
  signed __int32 v51; // r8d
  signed __int32 v52; // ett
  PVOID Address; // [rsp+30h] [rbp-79h]
  signed __int64 Addressa; // [rsp+30h] [rbp-79h]
  int v55; // [rsp+38h] [rbp-71h] BYREF
  __int64 v56; // [rsp+40h] [rbp-69h]
  signed __int64 v57; // [rsp+48h] [rbp-61h]
  HANDLE *v58; // [rsp+50h] [rbp-59h]
  PVOID Cookie; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v60; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 *v61; // [rsp+68h] [rbp-41h]
  __int64 v62; // [rsp+70h] [rbp-39h]
  void *UniqueThread; // [rsp+78h] [rbp-31h]
  int v64; // [rsp+80h] [rbp-29h]
  signed __int32 v65[3]; // [rsp+84h] [rbp-25h] BYREF
  __int64 v66; // [rsp+90h] [rbp-19h]
  char Fields[6]; // [rsp+98h] [rbp-11h] BYREF
  __int16 v68; // [rsp+9Eh] [rbp-Bh]
  int v69; // [rsp+B8h] [rbp+Fh]
  int v70; // [rsp+BCh] [rbp+13h]

  v2 = a2 - 192;
  v56 = a2;
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 136), a2, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  v4 = *(void **)(v2 + 128);
  v5 = 0LL;
  Cookie = 0LL;
  v6 = 0;
  if ( v4 )
    LdrLockLoaderLock(0, 0LL, &Cookie);
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
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 224), v11, v8);
  }
  while ( v8 != v7 );
  if ( v4 )
  {
    if ( v9 )
    {
      if ( LdrAddRefDll(0, v4) < 0 )
      {
        v9 = 0;
        v10 = 0;
        v6 = 1;
      }
      else
      {
        a1[36] |= 0x100u;
        *((_QWORD *)a1 + 21) = v4;
      }
    }
    LdrUnlockLoaderLock(0, Cookie);
    if ( v6 )
    {
      TppBarrierAdjust(v2 + 56, 0xFFFFFFFFLL);
      TppWorkCancelPendingCallbacks(v2);
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
  v12 = *(HANDLE **)(v2 + 136);
  v13 = *(_DWORD *)(v2 + 184);
  v58 = v12;
  if ( !v12 )
  {
    v12 = (HANDLE *)TppPoolpGlobalPool;
    v58 = (HANDLE *)TppPoolpGlobalPool;
  }
  if ( v12 == (HANDLE *)TppPoolpSerializedPool )
    v13 = 1;
  v14 = *(unsigned int *)(v2 + 200);
  _m_prefetchw((char *)v12 + 428);
  v15 = *((_DWORD *)v12 + 107);
  while ( v15 == -2 )
  {
    v51 = v14;
LABEL_103:
    v52 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)v12 + 107, v51, v15);
    if ( v52 == v15 )
      goto LABEL_21;
  }
  if ( v15 != (_DWORD)v14 && v15 != -1 )
  {
    v51 = -1;
    goto LABEL_103;
  }
LABEL_21:
  v55 = 0;
  v16 = (__int64 *)(v2 + 208);
  v17 = (__int64)v12[v13 + 2] + 24 * v14;
  v18 = _interlockedbittestandset64((volatile signed __int32 *)(v17 + 16), 0LL);
  v19 = (volatile signed __int64 *)(v17 + 16);
  v66 = v17;
  Address = (PVOID)(v17 + 16);
  if ( v18 )
  {
    v41 = (volatile signed __int64 *)(v17 + 16);
LABEL_62:
    v42 = *v41;
    while ( (v42 & 1) != 0 )
    {
      if ( RtlpWaitCouldDeadlock() )
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      v43 = 0;
      v65[0] = 3;
      v62 = 0LL;
      if ( (v42 & 2) != 0 )
      {
        v61 = 0LL;
        v64 = -1;
        v60 = v42 & 0xFFFFFFFFFFFFFFF0uLL;
        v44 = (char *)((unsigned __int64)&v60 | v42 & 8 | 7);
        v43 = (v42 & 4) == 0;
      }
      else
      {
        v61 = &v60;
        v64 = v42 >> 4;
        if ( v64 > 1 )
          v44 = (char *)((unsigned __int64)&v60 | 0xB);
        else
          v44 = (char *)&v60 + 3;
        if ( !(unsigned int)(v42 >> 4) )
          v64 = -2;
      }
      v46 = _InterlockedCompareExchange64(v41, (signed __int64)v44, v42);
      v45 = v42 == v46;
      v42 = v46;
      v57 = v46;
      if ( !v45 )
      {
LABEL_72:
        RtlBackoff(&v55);
        _m_prefetchw((const void *)v41);
        goto LABEL_62;
      }
      if ( v43 )
        RtlpOptimizeSRWLockList(v41);
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        for ( i = SRWLockSpinCount; i; --i )
        {
          if ( (v65[0] & 2) == 0 )
            break;
          _mm_pause();
        }
      }
      v18 = _interlockedbittestandreset(v65, 1u);
      if ( v18 )
      {
        do
          NtWaitForAlertByThreadId(Address, 0LL);
        while ( (v65[0] & 4) == 0 );
        v42 = v57;
        v41 = (volatile signed __int64 *)Address;
      }
    }
    v57 = _InterlockedCompareExchange64(v41, v42 + 1, v42);
    if ( v42 != v57 )
      goto LABEL_72;
    v17 = v66;
    v16 = (__int64 *)(v2 + 208);
    v19 = (volatile signed __int64 *)Address;
  }
  v20 = *(__int64 ***)(v17 + 8);
  *v16 = v17;
  v16[1] = (__int64)v20;
  if ( *v20 != (__int64 *)v17 )
    __fastfail(3u);
  *v20 = v16;
  *(_QWORD *)(v17 + 8) = v16;
  v21 = _InterlockedCompareExchange64(v19, 0LL, 1LL);
  if ( v21 != 1 )
  {
    do
    {
      v47 = -1LL;
      if ( (v21 & 6) == 2 )
        v47 = 3LL;
      v48 = v47 + v21;
      v49 = v21;
      v21 = _InterlockedCompareExchange64(v19, v47 + v21, v21);
    }
    while ( v49 != v21 );
    v12 = v58;
    if ( v47 == 3 )
      RtlpWakeSRWLock(v19, v48, 0LL);
  }
  if ( *((_DWORD *)v12 + 106) != MEMORY[0x7FFE03C0] )
    TppAdjustRunningThreadGoal(v12);
  v22 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v24 = *ThreadPoolData;
    if ( *(HANDLE **)(v24 + 48) == v12 && *(_DWORD *)(v24 + 128) == 3 )
    {
      *(_DWORD *)(v24 + 128) = 4;
      v22 = 1;
    }
  }
  _m_prefetchw(v12 + 1);
  v25 = (signed __int64)v12[1];
  LODWORD(Addressa) = v25;
  do
  {
    if ( (Addressa & 0xFFFF0000) != 0 || v22 )
    {
      v26 = 0;
    }
    else
    {
      v26 = 1;
      LODWORD(Addressa) = (unsigned __int16)Addressa ^ ((Addressa & 0xFFFF0000) + 0x10000);
    }
    v27 = v25;
    HIDWORD(Addressa) = HIDWORD(v25) + 1;
    v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 1, Addressa, v25);
    LODWORD(Addressa) = v25;
  }
  while ( v27 != v25 );
  if ( v26 )
    NtReleaseWorkerFactoryWorker(v12[7]);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v2 + 8))(v2);
LABEL_39:
  if ( v9 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)a1 = 72LL;
      a1[2] = 1;
      RtlActivateActivationContextUnsafeFast((__int64)a1, *(_QWORD *)(v2 + 96));
      *((_BYTE *)a1 + 76) |= 1u;
    }
    a1[36] |= 0x240u;
    *((_QWORD *)a1 + 23) = v2;
    if ( (*(_DWORD *)(v2 + 160) & 3) == 1 )
      TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)a1);
    v28 = *(void **)(v2 + 104);
    if ( v28 )
    {
      *((_QWORD *)a1 + 10) = v28;
      v39 = NtCurrentTeb();
      SubProcessTag = v39->SubProcessTag;
      v39->SubProcessTag = v28;
      if ( MEMORY[0x7FFE0390] )
      {
        if ( v28 != SubProcessTag )
        {
          v69 = (int)SubProcessTag;
          v68 = 1349;
          v70 = (int)v28;
          NtTraceEvent((HANDLE)MEMORY[0x7FFE0390], 0x402u, 8u, Fields);
        }
      }
    }
    v29 = v56;
    NtCurrentTeb()->ActivityId = *(_GUID *)(v2 + 112);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v2 + 136),
        v29,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *(_QWORD *)(v2 + 104));
    v30 = *(_QWORD *)(v2 + 104);
    v31 = *(_QWORD *)(v2 + 88);
    v32 = *(_QWORD *)(v2 + 80);
    v33 = NtCurrentTeb()->ThreadPoolData;
    if ( v33 )
    {
      v34 = v33[3];
      ++*((_QWORD *)v33 + 2);
      v35 = ((_BYTE)v34 - 1) & 1;
      v33[3] = v35;
      v36 = &v33[8 * v35];
      v5 = v36 + 4;
      v36[4] = v32;
      v36[5] = v31;
      v36[6] = v30;
      v36[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    *((_QWORD *)a1 + 11) = *(_QWORD *)(v2 + 80);
    *((_QWORD *)a1 + 12) = *(_QWORD *)(v2 + 88);
    v37 = *(void (__cdecl **)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK))(v2 + 80);
    if ( v37 == LdrpWorkCallback )
      LdrpWorkCallback((PTP_CALLBACK_INSTANCE)a1, *(PVOID *)(v2 + 88), (PTP_WORK)v2);
    else
      ((void (__fastcall *)(_DWORD *, _QWORD, __int64, __int64))v37)(a1, *(_QWORD *)(v2 + 88), v2, v31);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(v2 + 136),
        v29,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *(_QWORD *)(v2 + 104));
    if ( v5 )
    {
      v38 = v5[3];
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v38 )
        v5[3] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - v38;
    }
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(__int64))(v2 + 8))(v2);
  }
}
