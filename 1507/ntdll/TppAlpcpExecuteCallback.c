/*
 * XREFs of TppAlpcpExecuteCallback @ 0x18003B9F0
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TpCallbackMayRunLong @ 0x18003BD90 (TpCallbackMayRunLong.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800797A0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     TppIteWakeWaiters @ 0x18007DF04 (TppIteWakeWaiters.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

int __fastcall TppAlpcpExecuteCallback(_DWORD *Instance, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  signed __int32 v7; // eax
  int v8; // edx
  unsigned __int32 v9; // r9d
  char v10; // r15
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rbx
  _QWORD *v14; // rdi
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10
  _DWORD *ThreadPoolData; // rcx
  int v20; // eax
  unsigned int v21; // eax
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  struct _TEB *v25; // rax
  void *SubProcessTag; // rdx
  __int64 v27; // rbx
  _BYTE Fields[6]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v30; // [rsp+3Eh] [rbp-6Ah]
  int v31; // [rsp+58h] [rbp-50h]
  int v32; // [rsp+5Ch] [rbp-4Ch]

  v3 = *(_QWORD *)(a2 + 200);
  if ( v3 )
  {
    LODWORD(v23) = LdrAddRefDll(0, *(PVOID *)(a2 + 200));
    if ( (int)v23 < 0 )
      return v23;
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
    if ( (v13 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v12 >> 60) & 8) != 0 )
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
    v27 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    TppIteWakeWaiters(v27);
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
  v15 = *(void **)(a2 + 176);
  if ( v15 )
  {
    *((_QWORD *)Instance + 10) = v15;
    v25 = NtCurrentTeb();
    SubProcessTag = v25->SubProcessTag;
    v25->SubProcessTag = v15;
    if ( MEMORY[0x7FFE0390] )
    {
      if ( v15 != SubProcessTag )
      {
        v31 = (int)SubProcessTag;
        v30 = 1349;
        v32 = (int)v15;
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
  v16 = *(_QWORD *)(a2 + 176);
  v17 = *(_QWORD *)(a2 + 160);
  v18 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v20 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v21 = ((_BYTE)v20 - 1) & 1;
    ThreadPoolData[3] = v21;
    v22 = &ThreadPoolData[8 * v21];
    v14 = v22 + 4;
    v22[4] = v18;
    v22[5] = v17;
    v22[6] = v16;
    v22[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 152);
  *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 280) & 1) != 0 )
  {
    *((_QWORD *)Instance + 17) = a2;
    LODWORD(v23) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(
                     Instance,
                     *(_QWORD *)(a2 + 160),
                     a2,
                     a3);
  }
  else
  {
    LODWORD(v23) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(
                     Instance,
                     *(_QWORD *)(a2 + 160),
                     a2,
                     v17);
  }
  if ( MEMORY[0x7FFE0386] )
    LODWORD(v23) = RtlpTpETWCallbackStop(
                     *(_QWORD *)(a2 + 208),
                     a2,
                     *(_QWORD *)(a2 + 152),
                     *(_QWORD *)(a2 + 160),
                     *(_QWORD *)(a2 + 176));
  if ( v14 )
  {
    v24 = v14[3];
    v23 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v24 )
    {
      v23 -= v24;
      v14[3] = v23;
    }
  }
  return v23;
}
