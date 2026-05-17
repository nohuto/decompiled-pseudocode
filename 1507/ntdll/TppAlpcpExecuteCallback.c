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

__int64 __fastcall TppAlpcpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rsi
  signed __int32 v8; // eax
  char v9; // r15
  signed __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  signed __int64 v12; // rbx
  _QWORD *v13; // rdi
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  _DWORD *ThreadPoolData; // rcx
  int v19; // eax
  unsigned int v20; // eax
  _QWORD *v21; // r8
  __int64 result; // rax
  __int64 v23; // rcx
  struct _TEB *v24; // rax
  void *SubProcessTag; // rdx
  __int64 v26; // rbx
  _BYTE v27[6]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v28; // [rsp+3Eh] [rbp-6Ah]
  int v29; // [rsp+58h] [rbp-50h]
  int v30; // [rsp+5Ch] [rbp-4Ch]

  v4 = *(_QWORD *)(a2 + 200);
  v5 = a3;
  v6 = a2;
  if ( v4 )
  {
    result = LdrAddRefDll(0LL, *(_QWORD *)(a2 + 200));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 72));
  if ( (*(_BYTE *)(v6 + 280) & 3) == 3 )
  {
    while ( 1 )
    {
      a3 = MEMORY[0x7FFE03C0];
      v8 = *(_DWORD *)(v6 + 276);
      a2 = (unsigned int)(MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v6 + 208) + 420LL));
      a4 = (unsigned int)(a2 + MEMORY[0x7FFE03C0]);
      if ( v8 >= (int)a2 && v8 <= (int)a4 + MEMORY[0x7FFE03C0] )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 276), a4, v8) )
        AlpcAdjustCompletionListConcurrencyCount(*(_QWORD *)(v6 + 264), (unsigned int)a4);
    }
  }
  v9 = 0;
  _m_prefetchw((const void *)(v6 + 128));
  v10 = *(_QWORD *)(v6 + 128);
  do
  {
    if ( v9 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 136));
      v9 = 0;
    }
    v11 = v10;
    v12 = (v10 ^ (v10 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v10;
    if ( (v12 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v11 >> 60) & 8) != 0 )
    {
      v12 &= ~0x8000000000000000uLL;
      v9 = 1;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 136), (char *)a2, a3, a4);
    }
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 128), v12, v11);
  }
  while ( v11 != v10 );
  v13 = 0LL;
  if ( v9 )
  {
    v26 = *(_QWORD *)(v6 + 144);
    *(_QWORD *)(v6 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 136));
    TppIteWakeWaiters(v26);
  }
  if ( (unsigned __int64)(*(_QWORD *)(v6 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(v6 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = v6 + 72;
  if ( (*(_DWORD *)(v6 + 232) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v14 = *(void **)(v6 + 176);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 80) = v14;
    v24 = NtCurrentTeb();
    SubProcessTag = v24->SubProcessTag;
    v24->SubProcessTag = v14;
    if ( MEMORY[0x7FFE0390] )
    {
      if ( v14 != SubProcessTag )
      {
        v29 = (int)SubProcessTag;
        v28 = 1349;
        v30 = (int)v14;
        NtTraceEvent(MEMORY[0x7FFE0390], 1026LL, 8LL, v27);
      }
    }
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(v6 + 184);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(v6 + 208),
      v6,
      *(_QWORD *)(v6 + 152),
      *(_QWORD *)(v6 + 160),
      *(_QWORD *)(v6 + 176));
  v15 = *(_QWORD *)(v6 + 176);
  v16 = *(_QWORD *)(v6 + 160);
  v17 = *(_QWORD *)(v6 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v19 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v20 = ((_BYTE)v19 - 1) & 1;
    ThreadPoolData[3] = v20;
    v21 = &ThreadPoolData[8 * v20];
    v13 = v21 + 4;
    v21[4] = v17;
    v21[5] = v16;
    v21[6] = v15;
    v21[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(v6 + 152);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(v6 + 160);
  if ( (*(_BYTE *)(v6 + 280) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = v6;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v6 + 152))(
               a1,
               *(_QWORD *)(v6 + 160),
               v6,
               v5);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v6 + 152))(
               a1,
               *(_QWORD *)(v6 + 160),
               v6,
               v16);
  }
  if ( MEMORY[0x7FFE0386] )
    result = RtlpTpETWCallbackStop(
               *(_QWORD *)(v6 + 208),
               v6,
               *(_QWORD *)(v6 + 152),
               *(_QWORD *)(v6 + 160),
               *(_QWORD *)(v6 + 176));
  if ( v13 )
  {
    v23 = v13[3];
    result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v23 )
    {
      result -= v23;
      v13[3] = result;
    }
  }
  return result;
}
