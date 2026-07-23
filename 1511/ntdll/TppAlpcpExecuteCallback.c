/*
 * XREFs of TppAlpcpExecuteCallback @ 0x18002E130
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     TppIteWakeWaiters @ 0x180004434 (TppIteWakeWaiters.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x18006BD10 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     TpCallbackMayRunLong @ 0x180072830 (TpCallbackMayRunLong.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

int __fastcall TppAlpcpExecuteCallback(_DWORD *Instance, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  __int64 v6; // rax
  signed __int32 v7; // eax
  int v8; // edx
  unsigned __int32 v9; // r8d
  char v10; // bp
  signed __int64 v11; // rbx
  signed __int64 v12; // rdi
  signed __int64 v13; // rbx
  _QWORD *v14; // rdi
  __int64 **v15; // rbx
  void *v16; // rcx
  struct _TEB *v17; // rax
  void *SubProcessTag; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *ThreadPoolData; // rcx
  int v23; // eax
  unsigned int v24; // eax
  _QWORD *v25; // r10
  __int64 v26; // rcx
  _BYTE Fields[6]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v30; // [rsp+46h] [rbp-62h]
  int v31; // [rsp+60h] [rbp-48h]
  int v32; // [rsp+64h] [rbp-44h]

  v3 = *(void **)(a2 + 200);
  if ( v3 )
  {
    LODWORD(v6) = LdrAddRefDll(0, v3);
    if ( (int)v6 < 0 )
      return v6;
    Instance[36] |= 0x100u;
    *((_QWORD *)Instance + 21) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 280) & 3) == 3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 276);
      v8 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a2 + 208) + 420LL);
      v9 = v8 + MEMORY[0x7FFE03C0];
      if ( v7 >= v8 && v7 <= (int)(v9 + MEMORY[0x7FFE03C0]) )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 276), v9, v7) )
        AlpcAdjustCompletionListConcurrencyCount(*(HANDLE *)(a2 + 264), v9);
    }
  }
  v10 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v11 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v10 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
      v10 = 0;
    }
    v12 = v11;
    v13 = (v11 ^ (v11 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v11;
    if ( v12 < 0 && (v13 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v13 &= ~0x8000000000000000uLL;
      v10 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v13, v12);
  }
  while ( v12 != v11 );
  v14 = 0LL;
  if ( v10 )
  {
    v15 = *(__int64 ***)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    TppIteWakeWaiters(v15);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(a2 + 168));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 232) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v16 = *(void **)(a2 + 176);
  if ( v16 )
  {
    *((_QWORD *)Instance + 10) = v16;
    v17 = NtCurrentTeb();
    SubProcessTag = v17->SubProcessTag;
    v17->SubProcessTag = v16;
    if ( MEMORY[0x7FFE0390] )
    {
      if ( v16 != SubProcessTag )
      {
        v31 = (int)SubProcessTag;
        v30 = 1349;
        v32 = (int)v16;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0390], 0x402u, 8u, Fields);
      }
    }
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(a2 + 208),
      a2,
      *(_QWORD *)(a2 + 152),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 176));
  v19 = *(_QWORD *)(a2 + 176);
  v20 = *(_QWORD *)(a2 + 160);
  v21 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v23 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v24 = ((_BYTE)v23 - 1) & 1;
    ThreadPoolData[3] = v24;
    v25 = &ThreadPoolData[8 * v24];
    v25[4] = v21;
    v14 = v25 + 4;
    v25[5] = v20;
    v25[6] = v19;
    v25[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 152);
  *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 280) & 1) != 0 )
  {
    *((_QWORD *)Instance + 17) = a2;
    LODWORD(v6) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(
                    Instance,
                    *(_QWORD *)(a2 + 160),
                    a2,
                    a3);
  }
  else
  {
    LODWORD(v6) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(
                    Instance,
                    *(_QWORD *)(a2 + 160),
                    a2,
                    v21);
  }
  if ( MEMORY[0x7FFE0386] )
    LODWORD(v6) = RtlpTpETWCallbackStop(
                    *(_QWORD *)(a2 + 208),
                    a2,
                    *(_QWORD *)(a2 + 152),
                    *(_QWORD *)(a2 + 160),
                    *(_QWORD *)(a2 + 176));
  if ( v14 )
  {
    v26 = v14[3];
    v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v26 )
    {
      v6 -= v26;
      v14[3] = v6;
    }
  }
  return v6;
}
