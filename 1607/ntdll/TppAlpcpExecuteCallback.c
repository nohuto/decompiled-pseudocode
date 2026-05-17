/*
 * XREFs of TppAlpcpExecuteCallback @ 0x18001D460
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016370 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     TppIteWakeWaiters @ 0x180064004 (TppIteWakeWaiters.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800653F0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     TpCallbackMayRunLong @ 0x1800776C0 (TpCallbackMayRunLong.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppAlpcpExecuteCallback(__int64 a1, __int64 a2, __int64 a3)
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
  _QWORD *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r10
  _DWORD *ThreadPoolData; // rcx
  int v21; // eax
  unsigned int v22; // eax
  _QWORD *v23; // r8
  __int64 result; // rax
  __int64 v25; // rcx
  struct _TEB *v26; // rax
  void *SubProcessTag; // rdx
  __int64 v28; // rbx
  _BYTE v29[6]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v30; // [rsp+3Eh] [rbp-6Ah]
  int v31; // [rsp+58h] [rbp-50h]
  int v32; // [rsp+5Ch] [rbp-4Ch]

  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    result = LdrAddRefDll(0LL, *(_QWORD *)(a2 + 208));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 284);
      v8 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v9 = v8 + MEMORY[0x7FFE03C0];
      if ( v7 >= v8 && v7 <= (int)(v9 + MEMORY[0x7FFE03C0]) )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v9, v7) )
        AlpcAdjustCompletionListConcurrencyCount(*(_QWORD *)(a2 + 272), v9);
    }
  }
  v10 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v11 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v10 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
      v10 = 0;
    }
    v12 = v11;
    v13 = (v11 ^ (v11 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v11;
    if ( (v13 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v12 >> 60) & 8) != 0 )
    {
      v13 &= ~0x8000000000000000uLL;
      v10 = 1;
      RtlAcquireSRWLockExclusive(a2 + 136);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v13, v12);
  }
  while ( v12 != v11 );
  v14 = 0LL;
  if ( v10 )
  {
    v28 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
    TppIteWakeWaiters(v28);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v15 = *(void **)(a2 + 176);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 80) = v15;
    v26 = NtCurrentTeb();
    SubProcessTag = v26->SubProcessTag;
    v26->SubProcessTag = v15;
    if ( MEMORY[0x7FFE0390] )
    {
      if ( v15 != SubProcessTag )
      {
        v31 = (int)SubProcessTag;
        v30 = 1349;
        v32 = (int)v15;
        NtTraceEvent(MEMORY[0x7FFE0390], 1026LL, 8LL, v29);
      }
    }
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  v16 = (_QWORD *)(a2 + 200);
  if ( a2 != -200
    && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v16
    && (int)NtSetInformationThread(-2LL, 44LL, v16) >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v16;
  }
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(a2 + 216),
      a2,
      *(_QWORD *)(a2 + 152),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 176));
  v17 = *(_QWORD *)(a2 + 176);
  v18 = *(_QWORD *)(a2 + 160);
  v19 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v21 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v22 = ((_BYTE)v21 - 1) & 1;
    ThreadPoolData[3] = v22;
    v23 = &ThreadPoolData[8 * v22];
    v14 = v23 + 4;
    v23[4] = v19;
    v23[5] = v18;
    v23[6] = v17;
    v23[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = a2;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(
               a1,
               *(_QWORD *)(a2 + 160),
               a2,
               a3);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(
               a1,
               *(_QWORD *)(a2 + 160),
               a2,
               v18);
  }
  if ( MEMORY[0x7FFE0386] )
    result = RtlpTpETWCallbackStop(
               *(_QWORD *)(a2 + 216),
               a2,
               *(_QWORD *)(a2 + 152),
               *(_QWORD *)(a2 + 160),
               *(_QWORD *)(a2 + 176));
  if ( v14 )
  {
    v25 = v14[3];
    result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25 )
    {
      result -= v25;
      v14[3] = result;
    }
  }
  return result;
}
