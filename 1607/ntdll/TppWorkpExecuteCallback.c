/*
 * XREFs of TppWorkpExecuteCallback @ 0x180020650
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180001338 (RtlpTpETWCallbackEnqueue.c)
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     LdrpWorkCallback @ 0x18000E110 (LdrpWorkCallback.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016370 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrUnlockLoaderLock @ 0x180029EC0 (LdrUnlockLoaderLock.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     LdrLockLoaderLock @ 0x18004E640 (LdrLockLoaderLock.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x180064030 (TppWorkCancelPendingCallbacks.c)
 *     RtlpWakeSRWLock @ 0x1800761DC (RtlpWakeSRWLock.c)
 *     TpCallbackMayRunLong @ 0x1800776C0 (TpCallbackMayRunLong.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A8F90 (NtReleaseWorkerFactoryWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
 */

void __fastcall TppWorkpExecuteCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  int v6; // r12d
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r15d
  int v10; // r14d
  signed __int32 v11; // ecx
  __int64 v12; // rbp
  int v13; // edx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  __int64 *v16; // r12
  __int64 v17; // r14
  __int64 **v18; // rax
  signed __int64 v19; // rax
  __int64 v20; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v22; // rax
  signed __int64 v23; // rax
  int v24; // ecx
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  void *v27; // rcx
  _QWORD *v28; // r14
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r10
  _DWORD *v33; // rcx
  int v34; // eax
  unsigned int v35; // eax
  _QWORD *v36; // r8
  void (*v37)(); // rax
  __int64 v38; // rcx
  struct _TEB *v39; // rax
  void *SubProcessTag; // rdx
  __int64 v41; // r10
  __int64 v42; // rdx
  signed __int64 v43; // rtt
  __int64 v44; // r9
  signed __int32 v45; // r8d
  signed __int32 v46; // ett
  signed __int64 v47; // [rsp+30h] [rbp-88h]
  __int64 v48; // [rsp+38h] [rbp-80h] BYREF
  __int64 v49; // [rsp+40h] [rbp-78h]
  char v50[6]; // [rsp+48h] [rbp-70h] BYREF
  __int16 v51; // [rsp+4Eh] [rbp-6Ah]
  int v52; // [rsp+68h] [rbp-50h]
  int v53; // [rsp+6Ch] [rbp-4Ch]

  v2 = a2 - 200;
  v49 = a2;
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 144), a2, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  v4 = *(_QWORD *)(v2 + 136);
  v5 = 0LL;
  v48 = 0LL;
  v6 = 0;
  if ( v4 )
    LdrLockLoaderLock(0LL, 0LL, &v48);
  _m_prefetchw((const void *)(v2 + 232));
  v7 = *(_DWORD *)(v2 + 232);
  do
  {
    v8 = v7;
    if ( v7 >> 1 )
    {
      v9 = 1;
      v10 = 1;
      v11 = v7 & 1 | (2 * (v7 >> 1) - 2);
      if ( (v11 & 0xFFFFFFFE) != 0 )
        goto LABEL_8;
      v11 |= 1u;
    }
    else
    {
      v9 = 0;
      v11 = v7 | 1;
    }
    v10 = 0;
LABEL_8:
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 232), v11, v8);
  }
  while ( v8 != v7 );
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
    LdrUnlockLoaderLock(0LL, v48);
    if ( v6 )
    {
      TppBarrierAdjust(v2 + 56, 0xFFFFFFFFLL, 0LL, v44);
      TppWorkCancelPendingCallbacks(v2);
    }
  }
  if ( v10 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)v2, 2u);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(v2 + 144),
        v2 + 200,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *(_QWORD *)(v2 + 104));
    v12 = *(_QWORD *)(v2 + 144);
    v13 = *(_DWORD *)(v2 + 192);
    if ( !v12 )
      v12 = TppPoolpGlobalPool;
    if ( v12 == TppPoolpSerializedPool )
      v13 = 1;
    v14 = *(unsigned int *)(v2 + 208);
    _m_prefetchw((const void *)(v12 + 428));
    v15 = *(_DWORD *)(v12 + 428);
    while ( 1 )
    {
      if ( v15 == -2 )
      {
        v45 = v14;
      }
      else
      {
        if ( v15 == (_DWORD)v14 || v15 == -1 )
        {
LABEL_20:
          v16 = (__int64 *)(v2 + 216);
          v17 = *(_QWORD *)(v12 + 8LL * v13 + 16) + 24 * v14;
          RtlAcquireSRWLockExclusive(v17 + 16);
          v18 = *(__int64 ***)(v17 + 8);
          if ( *v18 != (__int64 *)v17 )
            __fastfail(3u);
          *(_QWORD *)(v2 + 224) = v18;
          *v16 = v17;
          *v18 = v16;
          *(_QWORD *)(v17 + 8) = v16;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 16), 0LL, 1LL);
          if ( v19 != 1 )
          {
            do
            {
              v41 = -1LL;
              if ( (v19 & 6) == 2 )
                v41 = 3LL;
              v42 = v41 + v19;
              v43 = v19;
              v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 16), v41 + v19, v19);
            }
            while ( v43 != v19 );
            if ( v41 == 3 )
              RtlpWakeSRWLock(v17 + 16, v42, 0LL);
          }
          if ( *(_DWORD *)(v12 + 424) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(v12);
          v20 = 0LL;
          ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
          if ( ThreadPoolData )
          {
            v22 = *ThreadPoolData;
            if ( *(_QWORD *)(v22 + 48) == v12 && *(_DWORD *)(v22 + 128) == 3 )
            {
              *(_DWORD *)(v22 + 128) = 4;
              v20 = 1LL;
            }
          }
          _m_prefetchw((const void *)(v12 + 8));
          v23 = *(_QWORD *)(v12 + 8);
          LODWORD(v47) = v23;
          do
          {
            HIDWORD(v47) = HIDWORD(v23) + 1;
            if ( (v47 & 0xFFFF0000) != 0 || (_DWORD)v20 )
            {
              v24 = 0;
            }
            else
            {
              v24 = 1;
              LODWORD(v47) = (unsigned __int16)v47 ^ ((v47 & 0xFFFF0000) + 0x10000);
            }
            v25 = v47;
            v26 = v23;
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v47, v23);
            LODWORD(v47) = v23;
          }
          while ( v26 != v23 );
          if ( v24 )
            NtReleaseWorkerFactoryWorker(*(_QWORD *)(v12 + 56), v25, v20);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64))(v2 + 8))(v2);
          break;
        }
        v45 = -1;
      }
      v46 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 428), v45, v15);
      if ( v46 == v15 )
        goto LABEL_20;
    }
  }
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
    if ( (*(_DWORD *)(v2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(a1);
    v27 = *(void **)(v2 + 104);
    if ( v27 )
    {
      *(_QWORD *)(a1 + 80) = v27;
      v39 = NtCurrentTeb();
      SubProcessTag = v39->SubProcessTag;
      v39->SubProcessTag = v27;
      if ( MEMORY[0x7FFE0390] )
      {
        if ( v27 != SubProcessTag )
        {
          v52 = (int)SubProcessTag;
          v51 = 1349;
          v53 = (int)v27;
          NtTraceEvent(MEMORY[0x7FFE0390], 1026LL, 8LL, v50);
        }
      }
    }
    v28 = (_QWORD *)(v2 + 128);
    NtCurrentTeb()->ActivityId = *(_GUID *)(v2 + 112);
    if ( v2 != -128
      && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v28
      && (int)NtSetInformationThread(-2LL, 44LL, v2 + 128) >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v28;
    }
    v29 = v49;
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v2 + 144),
        v49,
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
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v2 + 88);
    v37 = *(void (**)())(v2 + 80);
    if ( v37 == LdrpWorkCallback )
      LdrpWorkCallback();
    else
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v37)(a1, *(_QWORD *)(v2 + 88), v2, v31);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(v2 + 144),
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
