/*
 * XREFs of TppTimerQueueExpiration @ 0x18003C870
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x1800016B8 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerExpirationBegin @ 0x180002488 (TppETWTimerExpirationBegin.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppPHDelete @ 0x18003CAFC (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x18003CC18 (TppSingleTimerExpiration.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A7590 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A9770 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  _RTL_SRWLOCK *ApcContext; // rsi
  bool v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // r15
  __int64 v9; // r11
  _QWORD *v10; // r14
  __int64 v11; // r11
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  _QWORD *v22; // [rsp+40h] [rbp-29h] BYREF
  _QWORD **v23; // [rsp+48h] [rbp-21h]
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp-19h] BYREF
  _BYTE Fields[6]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v26; // [rsp+5Eh] [rbp-Bh]
  __int64 v27; // [rsp+78h] [rbp+Fh]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+80h] [rbp+17h] BYREF

  Parameters.Version = 0;
  ApcContext = a3;
  Parameters.NoWakeTolerance = 0LL;
  v5 = *(_QWORD *)(a4 + 8) != 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v6 = (__int64)&a3[1];
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v6 = (__int64)&a3[16];
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (_RTL_SRWLOCK *)MEMORY[0x7FFE03B0];
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v23 = &v22;
  v22 = &v22;
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerExpirationBegin(v6);
  RtlAcquireSRWLockExclusive(ApcContext);
  v8 = (_QWORD *)(v6 + 8);
  while ( *v8 && *(_QWORD *)(*v8 + 40LL) <= v7 )
  {
    TppPHDelete(v6 + 8, *v8);
    v10 = (_QWORD *)(v9 - 40);
    TppPHDelete(v6 + 16, v9 - 40);
    *(_BYTE *)(v11 + 64) = 0;
    v12 = v23;
    if ( *v23 != &v22 )
      __fastfail(3u);
    v10[1] = v23;
    *v10 = &v22;
    *v12 = v10;
    v23 = (_QWORD **)v10;
  }
  v13 = *(_QWORD *)(v6 + 16);
  if ( v13 )
  {
    v14 = *(_QWORD *)(*v8 + 32LL);
    v15 = *(_QWORD *)(v13 + 32) - v14;
    *(_QWORD *)v6 = v14;
    v16 = (__int64)((unsigned __int128)(v15 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
    v17 = (v16 >> 63) + v16;
    *(_DWORD *)(v6 + 112) = v17;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)v17;
    if ( !v5 )
      v14 = v7 - v14;
    DueTime.QuadPart = v14;
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerSetNtTimer(v6, v14, v17);
    ZwSetTimer2(*(HANDLE *)(v6 + 24), &DueTime, 0LL, &Parameters);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
  }
  RtlReleaseSRWLockExclusive(ApcContext);
  v19 = v22;
  while ( v19 != &v22 )
  {
    v20 = v19 - 31;
    LOBYTE(v18) = v5;
    v19 = (_QWORD *)*v19;
    TppSingleTimerExpiration(v20, ApcContext, v18);
  }
  if ( MEMORY[0x7FFE0386] )
  {
    v27 = v6;
    v26 = 7215;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 8u, Fields);
  }
  return ZwAssociateWaitCompletionPacket(
           *(HANDLE *)(v6 + 32),
           ApcContext[-6].Ptr,
           *(HANDLE *)(v6 + 24),
           (PVOID)(v6 + 40),
           ApcContext,
           0,
           v5,
           0LL);
}
