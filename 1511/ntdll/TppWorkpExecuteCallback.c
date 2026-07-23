/*
 * XREFs of TppWorkpExecuteCallback @ 0x18002D420
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackEnqueue @ 0x18000165C (RtlpTpETWCallbackEnqueue.c)
 *     TppETWCallbackDequeue @ 0x1800016D4 (TppETWCallbackDequeue.c)
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x180004460 (TppWorkCancelPendingCallbacks.c)
 *     LdrUnlockLoaderLock @ 0x180006690 (LdrUnlockLoaderLock.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrLockLoaderLock @ 0x180050F10 (LdrLockLoaderLock.c)
 *     TpCallbackMayRunLong @ 0x180072830 (TpCallbackMayRunLong.c)
 *     RtlpWakeSRWLock @ 0x1800755AC (RtlpWakeSRWLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A7BB0 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoal @ 0x1800F5174 (TppAdjustRunningThreadGoal.c)
 */

int __fastcall TppWorkpExecuteCallback(_DWORD *Instance, __int64 a2)
{
  __int64 v2; // rdi
  void *v4; // r14
  _QWORD *v5; // rsi
  int v6; // r12d
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r13d
  int v10; // ebx
  __int64 v11; // rax
  signed __int32 v12; // ett
  char *v13; // rbx
  int v14; // edx
  __int64 v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ecx
  signed __int32 v18; // ett
  unsigned __int64 v19; // r12
  _RTL_SRWLOCK *v20; // r13
  _RTL_SRWLOCK **Value; // rax
  signed __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  signed __int64 v25; // rtt
  int v26; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v28; // rax
  signed __int64 v29; // rax
  int v30; // edx
  signed __int64 v31; // rtt
  void *v32; // rcx
  struct _TEB *v33; // rax
  void *SubProcessTag; // rdx
  __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // rcx
  int v40; // eax
  unsigned int v41; // eax
  _QWORD *v42; // r10
  __int64 v43; // rcx
  int v45; // [rsp+30h] [rbp-88h]
  signed __int64 v46; // [rsp+38h] [rbp-80h]
  PVOID Cookie; // [rsp+40h] [rbp-78h] BYREF
  __int64 v48; // [rsp+48h] [rbp-70h]
  char Fields[6]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v50; // [rsp+56h] [rbp-62h]
  int v51; // [rsp+70h] [rbp-48h]
  int v52; // [rsp+74h] [rbp-44h]

  v2 = a2 - 192;
  v48 = a2;
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
      v45 = 1;
      v9 = 1;
      v10 = 1;
      v7 = v7 & 1 | (2 * (v7 >> 1) - 2);
      if ( (v7 & 0xFFFFFFFE) != 0 )
        goto LABEL_10;
    }
    else
    {
      v9 = 0;
      v45 = 0;
    }
    v7 |= 1u;
    v10 = 0;
LABEL_10:
    v12 = v8;
    LODWORD(v11) = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 224), v7, v8);
    v7 = v11;
  }
  while ( v12 != (_DWORD)v11 );
  if ( v4 )
  {
    if ( v9 )
    {
      if ( LdrAddRefDll(0, v4) >= 0 )
      {
        Instance[36] |= 0x100u;
        *((_QWORD *)Instance + 21) = v4;
      }
      else
      {
        v45 = 0;
        v6 = 1;
        v10 = 0;
      }
    }
    LODWORD(v11) = LdrUnlockLoaderLock(0, Cookie);
    if ( v6 )
    {
      TppBarrierAdjust((_RTL_SRWLOCK *)(v2 + 56), -1, 0);
      LODWORD(v11) = TppWorkCancelPendingCallbacks((_RTL_SRWLOCK *)v2);
    }
  }
  if ( v10 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)v2, 2u);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(v2 + 136),
        v2 + 192,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *(_QWORD *)(v2 + 104));
    v13 = *(char **)(v2 + 136);
    v14 = *(_DWORD *)(v2 + 184);
    v15 = *(unsigned int *)(v2 + 200);
    if ( !v13 )
      v13 = (char *)TppPoolpGlobalPool;
    if ( v13 == (char *)TppPoolpSerializedPool )
      v14 = 1;
    _m_prefetchw(v13 + 428);
    v16 = *((_DWORD *)v13 + 107);
    while ( 1 )
    {
      if ( v16 == -2 )
      {
        v17 = v15;
      }
      else
      {
        if ( v16 == -1 || v16 == (_DWORD)v15 )
        {
LABEL_32:
          v19 = v2 + 208;
          v20 = (_RTL_SRWLOCK *)(*(_QWORD *)&v13[8 * v14 + 16] + 24 * v15);
          RtlAcquireSRWLockExclusive(v20 + 2);
          Value = (_RTL_SRWLOCK **)v20[1].Value;
          *(_QWORD *)(v2 + 208) = v20;
          *(_QWORD *)(v2 + 216) = Value;
          if ( *Value != v20 )
            __fastfail(3u);
          *Value = (_RTL_SRWLOCK *)v19;
          v20[1].Value = v19;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)&v20[2], 0LL, 1LL);
          if ( v22 != 1 )
          {
            do
            {
              if ( (v22 & 4) != 0 || (v23 = 3LL, (v22 & 2) == 0) )
                v23 = -1LL;
              v24 = v23 + v22;
              v25 = v22;
              v22 = _InterlockedCompareExchange64((volatile signed __int64 *)&v20[2], v23 + v22, v22);
            }
            while ( v25 != v22 );
            if ( v23 == 3 )
              RtlpWakeSRWLock(&v20[2], v24, 0LL);
          }
          if ( *((_DWORD *)v13 + 106) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(v13);
          v26 = 0;
          ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
          if ( ThreadPoolData )
          {
            v28 = *ThreadPoolData;
            if ( *(char **)(v28 + 48) == v13 && *(_DWORD *)(v28 + 128) == 3 )
            {
              *(_DWORD *)(v28 + 128) = 4;
              v26 = 1;
            }
          }
          _m_prefetchw(v13 + 8);
          v29 = *((_QWORD *)v13 + 1);
          LODWORD(v46) = v29;
          do
          {
            if ( (v46 & 0xFFFF0000) != 0 || v26 )
            {
              v30 = 0;
            }
            else
            {
              LODWORD(v46) = (unsigned __int16)v46 ^ ((v46 & 0xFFFF0000) + 0x10000);
              v30 = 1;
            }
            v31 = v29;
            HIDWORD(v46) = HIDWORD(v29) + 1;
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 1, v46, v29);
            LODWORD(v46) = v29;
          }
          while ( v31 != v29 );
          if ( v30 )
            NtReleaseWorkerFactoryWorker(*((HANDLE *)v13 + 7));
          LODWORD(v11) = _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
          if ( (_DWORD)v11 == 1 )
            LODWORD(v11) = (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
          break;
        }
        v17 = -1;
      }
      v18 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)v13 + 107, v17, v16);
      if ( v18 == v16 )
        goto LABEL_32;
    }
  }
  if ( v45 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)Instance = 72LL;
      Instance[2] = 1;
      RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(v2 + 96));
      *((_BYTE *)Instance + 76) |= 1u;
    }
    Instance[36] |= 0x240u;
    *((_QWORD *)Instance + 23) = v2;
    if ( (*(_DWORD *)(v2 + 160) & 3) == 1 )
      TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
    v32 = *(void **)(v2 + 104);
    if ( v32 )
    {
      *((_QWORD *)Instance + 10) = v32;
      v33 = NtCurrentTeb();
      SubProcessTag = v33->SubProcessTag;
      v33->SubProcessTag = v32;
      if ( MEMORY[0x7FFE0390] )
      {
        if ( v32 != SubProcessTag )
        {
          v51 = (int)SubProcessTag;
          v50 = 1349;
          v52 = (int)v32;
          NtTraceEvent((HANDLE)MEMORY[0x7FFE0390], 0x402u, 8u, Fields);
        }
      }
    }
    v35 = v48;
    NtCurrentTeb()->ActivityId = *(_GUID *)(v2 + 112);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v2 + 136),
        v35,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *(_QWORD *)(v2 + 104));
    v36 = *(_QWORD *)(v2 + 104);
    v37 = *(_QWORD *)(v2 + 88);
    v38 = *(_QWORD *)(v2 + 80);
    v39 = NtCurrentTeb()->ThreadPoolData;
    if ( v39 )
    {
      v40 = v39[3];
      ++*((_QWORD *)v39 + 2);
      v41 = ((_BYTE)v40 - 1) & 1;
      v39[3] = v41;
      v42 = &v39[8 * v41];
      v42[4] = v38;
      v5 = v42 + 4;
      v42[5] = v37;
      v42[6] = v36;
      v42[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    *((_QWORD *)Instance + 11) = *(_QWORD *)(v2 + 80);
    *((_QWORD *)Instance + 12) = *(_QWORD *)(v2 + 88);
    LODWORD(v11) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(v2 + 80))(
                     Instance,
                     *(_QWORD *)(v2 + 88),
                     v2,
                     v38);
    if ( MEMORY[0x7FFE0386] )
      LODWORD(v11) = RtlpTpETWCallbackStop(
                       *(_QWORD *)(v2 + 136),
                       v35,
                       *(_QWORD *)(v2 + 80),
                       *(_QWORD *)(v2 + 88),
                       *(_QWORD *)(v2 + 104));
    if ( v5 )
    {
      v43 = v5[3];
      v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v43 )
      {
        v11 -= v43;
        v5[3] = v11;
      }
    }
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    LODWORD(v11) = (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
  }
  return v11;
}
