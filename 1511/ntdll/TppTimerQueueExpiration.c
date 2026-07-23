/*
 * XREFs of TppTimerQueueExpiration @ 0x18000AC60
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x180001B7C (TppETWTimerSetNtTimer.c)
 *     TppETWTimerExpirationBegin @ 0x180002620 (TppETWTimerExpirationBegin.c)
 *     TppETWTimerExpirationEnd @ 0x180002678 (TppETWTimerExpirationEnd.c)
 *     TppPHDelete @ 0x18000B1A4 (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x18000B6E0 (TppSingleTimerExpiration.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A6230 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A8350 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  bool v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // r15
  __int64 v9; // r11
  _QWORD *v10; // r14
  __int64 v11; // r11
  _QWORD **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  _QWORD *v22; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-28h]
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp-20h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+58h] [rbp-18h] BYREF

  Parameters.Version = 0;
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
    a2 = RtlpFreezeTimeBias;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v23 = &v22;
  v22 = &v22;
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerExpirationBegin(v6);
  RtlAcquireSRWLockExclusive(a3);
  v8 = (_QWORD *)(v6 + 8);
  while ( *v8 && *(_QWORD *)(*v8 + 40LL) <= v7 )
  {
    TppPHDelete(v6 + 8, *v8);
    v10 = (_QWORD *)(v9 - 40);
    TppPHDelete(v6 + 16, v9 - 40);
    *(_BYTE *)(v11 + 64) = 0;
    v12 = (_QWORD **)v23;
    *v10 = &v22;
    v10[1] = v12;
    if ( *v12 != &v22 )
      __fastfail(3u);
    *v12 = v10;
    v23 = v10;
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
  RtlReleaseSRWLockExclusive(a3);
  v19 = v22;
  while ( v19 != &v22 )
  {
    v20 = v19 - 30;
    LOBYTE(v18) = v5;
    v19 = (_QWORD *)*v19;
    TppSingleTimerExpiration(v20, a3, v18);
  }
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerExpirationEnd(v6);
  return ZwAssociateWaitCompletionPacket(
           *(HANDLE *)(v6 + 32),
           a3[-6].Ptr,
           *(HANDLE *)(v6 + 24),
           (PVOID)(v6 + 40),
           a3,
           0,
           v5,
           0LL);
}
