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

__int64 __fastcall TppAlpcpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 result; // rax
  signed __int32 v8; // eax
  char v9; // bp
  signed __int64 v10; // rbx
  signed __int64 v11; // rdi
  signed __int64 v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  void *v15; // rcx
  struct _TEB *v16; // rax
  void *SubProcessTag; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *ThreadPoolData; // rcx
  int v22; // eax
  unsigned int v23; // eax
  _QWORD *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-78h]
  _BYTE v27[6]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v28; // [rsp+46h] [rbp-62h]
  int v29; // [rsp+60h] [rbp-48h]
  int v30; // [rsp+64h] [rbp-44h]

  v4 = *(_QWORD *)(a2 + 200);
  v5 = a2;
  v26 = a3;
  if ( v4 )
  {
    result = LdrAddRefDll(0, v4);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 72));
  if ( (*(_BYTE *)(v5 + 280) & 3) == 3 )
  {
    while ( 1 )
    {
      a4 = MEMORY[0x7FFE03C0];
      v8 = *(_DWORD *)(v5 + 276);
      a2 = (unsigned int)(MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v5 + 208) + 420LL));
      a3 = (unsigned int)(a2 + MEMORY[0x7FFE03C0]);
      if ( v8 >= (int)a2 && v8 <= (int)a3 + MEMORY[0x7FFE03C0] )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 276), a3, v8) )
        AlpcAdjustCompletionListConcurrencyCount(*(_QWORD *)(v5 + 264), (unsigned int)a3);
    }
  }
  v9 = 0;
  _m_prefetchw((const void *)(v5 + 128));
  v10 = *(_QWORD *)(v5 + 128);
  do
  {
    if ( v9 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 136));
      v9 = 0;
    }
    v11 = v10;
    v12 = (v10 ^ (v10 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v10;
    if ( v11 < 0 && (v12 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v12 &= ~0x8000000000000000uLL;
      v9 = 1;
      RtlAcquireSRWLockExclusive(v5 + 136, (char *)a2, a3, a4);
    }
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 128), v12, v11);
  }
  while ( v11 != v10 );
  v13 = 0LL;
  if ( v9 )
  {
    v14 = *(_QWORD **)(v5 + 144);
    *(_QWORD *)(v5 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 136));
    TppIteWakeWaiters(v14);
  }
  if ( (unsigned __int64)(*(_QWORD *)(v5 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(v5 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = v5 + 72;
  if ( (*(_DWORD *)(v5 + 232) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v15 = *(void **)(v5 + 176);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 80) = v15;
    v16 = NtCurrentTeb();
    SubProcessTag = v16->SubProcessTag;
    v16->SubProcessTag = v15;
    if ( MEMORY[0x7FFE0390] )
    {
      if ( v15 != SubProcessTag )
      {
        v29 = (int)SubProcessTag;
        v28 = 1349;
        v30 = (int)v15;
        NtTraceEvent(MEMORY[0x7FFE0390], 1026LL, 8LL, v27);
      }
    }
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(v5 + 184);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(v5 + 208),
      v5,
      *(_QWORD *)(v5 + 152),
      *(_QWORD *)(v5 + 160),
      *(_QWORD *)(v5 + 176));
  v18 = *(_QWORD *)(v5 + 176);
  v19 = *(_QWORD *)(v5 + 160);
  v20 = *(_QWORD *)(v5 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v22 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v23 = ((_BYTE)v22 - 1) & 1;
    ThreadPoolData[3] = v23;
    v24 = &ThreadPoolData[8 * v23];
    v24[4] = v20;
    v13 = v24 + 4;
    v24[5] = v19;
    v24[6] = v18;
    v24[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(v5 + 152);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(v5 + 160);
  if ( (*(_BYTE *)(v5 + 280) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = v5;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v5 + 152))(
               a1,
               *(_QWORD *)(v5 + 160),
               v5,
               v26);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v5 + 152))(
               a1,
               *(_QWORD *)(v5 + 160),
               v5,
               v20);
  }
  if ( MEMORY[0x7FFE0386] )
    result = RtlpTpETWCallbackStop(
               *(_QWORD *)(v5 + 208),
               v5,
               *(_QWORD *)(v5 + 152),
               *(_QWORD *)(v5 + 160),
               *(_QWORD *)(v5 + 176));
  if ( v13 )
  {
    v25 = v13[3];
    result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25 )
    {
      result -= v25;
      v13[3] = result;
    }
  }
  return result;
}
