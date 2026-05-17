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

__int64 __fastcall TppWorkpExecuteCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  _QWORD *v5; // rsi
  int v6; // r12d
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r13d
  int v10; // ebx
  __int64 result; // rax
  signed __int32 v12; // ett
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ecx
  signed __int32 v18; // ett
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 *v21; // rax
  signed __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  signed __int64 v25; // rtt
  __int64 v26; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v28; // rax
  signed __int64 v29; // rax
  __int64 v30; // rdx
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
  int v44; // [rsp+30h] [rbp-88h]
  signed __int64 v45; // [rsp+38h] [rbp-80h]
  unsigned __int64 v46; // [rsp+40h] [rbp-78h] BYREF
  __int64 v47; // [rsp+48h] [rbp-70h]
  char v48[6]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v49; // [rsp+56h] [rbp-62h]
  int v50; // [rsp+70h] [rbp-48h]
  int v51; // [rsp+74h] [rbp-44h]

  v2 = a2 - 192;
  v47 = a2;
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 136), a2, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  v4 = *(_QWORD *)(v2 + 128);
  v5 = 0LL;
  v46 = 0LL;
  v6 = 0;
  if ( v4 )
    LdrLockLoaderLock(0LL, 0LL, &v46);
  _m_prefetchw((const void *)(v2 + 224));
  v7 = *(_DWORD *)(v2 + 224);
  do
  {
    v8 = v7;
    if ( v7 >> 1 )
    {
      v44 = 1;
      v9 = 1;
      v10 = 1;
      v7 = v7 & 1 | (2 * (v7 >> 1) - 2);
      if ( (v7 & 0xFFFFFFFE) != 0 )
        goto LABEL_10;
    }
    else
    {
      v9 = 0;
      v44 = 0;
    }
    v7 |= 1u;
    v10 = 0;
LABEL_10:
    v12 = v8;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 224), v7, v8);
    v7 = result;
  }
  while ( v12 != (_DWORD)result );
  if ( v4 )
  {
    if ( v9 )
    {
      if ( (int)LdrAddRefDll(0, v4) >= 0 )
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v4;
      }
      else
      {
        v44 = 0;
        v6 = 1;
        v10 = 0;
      }
    }
    result = LdrUnlockLoaderLock(0LL, v46);
    if ( v6 )
    {
      TppBarrierAdjust((unsigned __int64 *)(v2 + 56), -1, 0);
      result = TppWorkCancelPendingCallbacks((_QWORD *)v2);
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
    v13 = *(_QWORD *)(v2 + 136);
    v14 = *(_DWORD *)(v2 + 184);
    v15 = *(unsigned int *)(v2 + 200);
    if ( !v13 )
      v13 = TppPoolpGlobalPool;
    if ( v13 == TppPoolpSerializedPool )
      v14 = 1;
    _m_prefetchw((const void *)(v13 + 428));
    v16 = *(_DWORD *)(v13 + 428);
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
          v20 = *(_QWORD *)(v13 + 8LL * v14 + 16) + 24 * v15;
          RtlAcquireSRWLockExclusive(v20 + 16);
          v21 = *(__int64 **)(v20 + 8);
          *(_QWORD *)(v2 + 208) = v20;
          *(_QWORD *)(v2 + 216) = v21;
          if ( *v21 != v20 )
            __fastfail(3u);
          *v21 = v19;
          *(_QWORD *)(v20 + 8) = v19;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 16), 0LL, 1LL);
          if ( v22 != 1 )
          {
            do
            {
              if ( (v22 & 4) != 0 || (v23 = 3LL, (v22 & 2) == 0) )
                v23 = -1LL;
              v24 = v23 + v22;
              v25 = v22;
              v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 16), v23 + v22, v22);
            }
            while ( v25 != v22 );
            if ( v23 == 3 )
              RtlpWakeSRWLock(v20 + 16, v24, 0LL);
          }
          if ( *(_DWORD *)(v13 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(v13);
          v26 = 0LL;
          ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
          if ( ThreadPoolData )
          {
            v28 = *ThreadPoolData;
            if ( *(_QWORD *)(v28 + 48) == v13 && *(_DWORD *)(v28 + 128) == 3 )
            {
              *(_DWORD *)(v28 + 128) = 4;
              v26 = 1LL;
            }
          }
          _m_prefetchw((const void *)(v13 + 8));
          v29 = *(_QWORD *)(v13 + 8);
          LODWORD(v45) = v29;
          do
          {
            if ( (v45 & 0xFFFF0000) != 0 || (_DWORD)v26 )
            {
              v30 = 0LL;
            }
            else
            {
              LODWORD(v45) = (unsigned __int16)v45 ^ ((v45 & 0xFFFF0000) + 0x10000);
              v30 = 1LL;
            }
            v31 = v29;
            HIDWORD(v45) = HIDWORD(v29) + 1;
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v45, v29);
            LODWORD(v45) = v29;
          }
          while ( v31 != v29 );
          if ( (_DWORD)v30 )
            NtReleaseWorkerFactoryWorker(*(_QWORD *)(v13 + 56), v30, v26);
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
          break;
        }
        v17 = -1;
      }
      v18 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 428), v17, v16);
      if ( v18 == v16 )
        goto LABEL_32;
    }
  }
  if ( v44 )
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
    v32 = *(void **)(v2 + 104);
    if ( v32 )
    {
      *(_QWORD *)(a1 + 80) = v32;
      v33 = NtCurrentTeb();
      SubProcessTag = v33->SubProcessTag;
      v33->SubProcessTag = v32;
      if ( MEMORY[0x7FFE0390] )
      {
        if ( v32 != SubProcessTag )
        {
          v50 = (int)SubProcessTag;
          v49 = 1349;
          v51 = (int)v32;
          NtTraceEvent(MEMORY[0x7FFE0390], 1026LL, 8LL, v48);
        }
      }
    }
    v35 = v47;
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
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v2 + 88);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v2 + 80))(a1, *(_QWORD *)(v2 + 88), v2, v38);
    if ( MEMORY[0x7FFE0386] )
      result = RtlpTpETWCallbackStop(
                 *(_QWORD *)(v2 + 136),
                 v35,
                 *(_QWORD *)(v2 + 80),
                 *(_QWORD *)(v2 + 88),
                 *(_QWORD *)(v2 + 104));
    if ( v5 )
    {
      v43 = v5[3];
      result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v43 )
      {
        result -= v43;
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
