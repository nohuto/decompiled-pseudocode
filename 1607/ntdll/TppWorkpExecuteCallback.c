/*
 * XREFs of TppWorkpExecuteCallback @ 0x180020640
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180001338 (RtlpTpETWCallbackEnqueue.c)
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     LdrpWorkCallback @ 0x18000E100 (LdrpWorkCallback.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrUnlockLoaderLock @ 0x180029EB0 (LdrUnlockLoaderLock.c)
 *     LdrAddRefDll @ 0x180039C10 (LdrAddRefDll.c)
 *     LdrLockLoaderLock @ 0x18004E630 (LdrLockLoaderLock.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x180064020 (TppWorkCancelPendingCallbacks.c)
 *     RtlpWakeSRWLock @ 0x1800761CC (RtlpWakeSRWLock.c)
 *     TpCallbackMayRunLong @ 0x1800776B0 (TpCallbackMayRunLong.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A8F90 (NtReleaseWorkerFactoryWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppAdjustRunningThreadGoal @ 0x1800FE164 (TppAdjustRunningThreadGoal.c)
 */

void __fastcall TppWorkpExecuteCallback(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // rbp
  _QWORD *v5; // rdi
  int v6; // r12d
  unsigned __int32 v7; // ecx
  signed __int32 v8; // eax
  int v9; // r15d
  int v10; // r14d
  signed __int32 v11; // ecx
  char *v12; // rbp
  int v13; // edx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  _RTL_SRWLOCK **v16; // r12
  _RTL_SRWLOCK *v17; // r14
  _RTL_SRWLOCK **Value; // rax
  signed __int64 v19; // rax
  int v20; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v22; // rax
  signed __int64 v23; // rax
  int v24; // ecx
  signed __int64 v25; // rtt
  void *v26; // rcx
  _QWORD *v27; // r14
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r10
  _DWORD *v32; // rcx
  int v33; // eax
  unsigned int v34; // eax
  _QWORD *v35; // r8
  void (__fastcall *v36)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK); // rax
  void *v37; // rdx
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
  PVOID Cookie; // [rsp+38h] [rbp-80h] BYREF
  __int64 v49; // [rsp+40h] [rbp-78h]
  char Fields[6]; // [rsp+48h] [rbp-70h] BYREF
  __int16 v51; // [rsp+4Eh] [rbp-6Ah]
  int v52; // [rsp+68h] [rbp-50h]
  int v53; // [rsp+6Ch] [rbp-4Ch]

  v2 = a2 - 200;
  v49 = a2;
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 144), a2, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  v4 = *(void **)(v2 + 136);
  v5 = 0LL;
  Cookie = 0LL;
  v6 = 0;
  if ( v4 )
    LdrLockLoaderLock(0, 0LL, &Cookie);
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
    v12 = *(char **)(v2 + 144);
    v13 = *(_DWORD *)(v2 + 192);
    if ( !v12 )
      v12 = (char *)TppPoolpGlobalPool;
    if ( v12 == (char *)TppPoolpSerializedPool )
      v13 = 1;
    v14 = *(unsigned int *)(v2 + 208);
    _m_prefetchw(v12 + 428);
    v15 = *((_DWORD *)v12 + 107);
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
          v16 = (_RTL_SRWLOCK **)(v2 + 216);
          v17 = (_RTL_SRWLOCK *)(*(_QWORD *)&v12[8 * v13 + 16] + 24 * v14);
          RtlAcquireSRWLockExclusive(v17 + 2);
          Value = (_RTL_SRWLOCK **)v17[1].Value;
          if ( *Value != v17 )
            __fastfail(3u);
          *(_QWORD *)(v2 + 224) = Value;
          *v16 = v17;
          *Value = (_RTL_SRWLOCK *)v16;
          v17[1].Value = (unsigned __int64)v16;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)&v17[2], 0LL, 1LL);
          if ( v19 != 1 )
          {
            do
            {
              v41 = -1LL;
              if ( (v19 & 6) == 2 )
                v41 = 3LL;
              v42 = v41 + v19;
              v43 = v19;
              v19 = _InterlockedCompareExchange64((volatile signed __int64 *)&v17[2], v41 + v19, v19);
            }
            while ( v43 != v19 );
            if ( v41 == 3 )
              RtlpWakeSRWLock(&v17[2], v42, 0LL);
          }
          if ( *((_DWORD *)v12 + 106) != MEMORY[0x7FFE03C0] )
            TppAdjustRunningThreadGoal(v12);
          v20 = 0;
          ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
          if ( ThreadPoolData )
          {
            v22 = *ThreadPoolData;
            if ( *(char **)(v22 + 48) == v12 && *(_DWORD *)(v22 + 128) == 3 )
            {
              *(_DWORD *)(v22 + 128) = 4;
              v20 = 1;
            }
          }
          _m_prefetchw(v12 + 8);
          v23 = *((_QWORD *)v12 + 1);
          LODWORD(v47) = v23;
          do
          {
            if ( (v47 & 0xFFFF0000) != 0 || v20 )
            {
              v24 = 0;
            }
            else
            {
              v24 = 1;
              LODWORD(v47) = (unsigned __int16)v47 ^ ((v47 & 0xFFFF0000) + 0x10000);
            }
            v25 = v23;
            HIDWORD(v47) = HIDWORD(v23) + 1;
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 1, v47, v23);
            LODWORD(v47) = v23;
          }
          while ( v25 != v23 );
          if ( v24 )
            NtReleaseWorkerFactoryWorker(*((HANDLE *)v12 + 7));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64))(v2 + 8))(v2);
          break;
        }
        v45 = -1;
      }
      v46 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)v12 + 107, v45, v15);
      if ( v46 == v15 )
        goto LABEL_20;
    }
  }
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
    if ( (*(_DWORD *)(v2 + 168) & 3) == 1 )
      TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)a1);
    v26 = *(void **)(v2 + 104);
    if ( v26 )
    {
      *((_QWORD *)a1 + 10) = v26;
      v39 = NtCurrentTeb();
      SubProcessTag = v39->SubProcessTag;
      v39->SubProcessTag = v26;
      if ( MEMORY[0x7FFE0390] )
      {
        if ( v26 != SubProcessTag )
        {
          v52 = (int)SubProcessTag;
          v51 = 1349;
          v53 = (int)v26;
          NtTraceEvent((HANDLE)MEMORY[0x7FFE0390], 0x402u, 8u, Fields);
        }
      }
    }
    v27 = (_QWORD *)(v2 + 128);
    NtCurrentTeb()->ActivityId = *(_GUID *)(v2 + 112);
    if ( v2 != -128
      && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v27
      && NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, (PVOID)(v2 + 128), 8u) >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v27;
    }
    v28 = v49;
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v2 + 144),
        v49,
        *(_QWORD *)(v2 + 80),
        *(_QWORD *)(v2 + 88),
        *(_QWORD *)(v2 + 104));
    v29 = *(_QWORD *)(v2 + 104);
    v30 = *(_QWORD *)(v2 + 88);
    v31 = *(_QWORD *)(v2 + 80);
    v32 = NtCurrentTeb()->ThreadPoolData;
    if ( v32 )
    {
      v33 = v32[3];
      ++*((_QWORD *)v32 + 2);
      v34 = ((_BYTE)v33 - 1) & 1;
      v32[3] = v34;
      v35 = &v32[8 * v34];
      v5 = v35 + 4;
      v35[4] = v31;
      v35[5] = v30;
      v35[6] = v29;
      v35[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    *((_QWORD *)a1 + 11) = *(_QWORD *)(v2 + 80);
    *((_QWORD *)a1 + 12) = *(_QWORD *)(v2 + 88);
    v36 = *(void (__fastcall **)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WORK))(v2 + 80);
    v37 = *(void **)(v2 + 88);
    if ( v36 == LdrpWorkCallback )
      LdrpWorkCallback((PTP_CALLBACK_INSTANCE)a1, v37, (PTP_WORK)v2);
    else
      ((void (__fastcall *)(_DWORD *, void *, __int64, __int64))v36)(a1, v37, v2, v30);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(v2 + 144),
        v28,
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
