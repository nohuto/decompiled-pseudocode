/*
 * XREFs of TppTimerQueueExpiration @ 0x18003CAA0
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x1800019BC (TppETWTimerSetNtTimer.c)
 *     TppETWTimerExpirationBegin @ 0x1800024EC (TppETWTimerExpirationBegin.c)
 *     TppETWTimerExpirationEnd @ 0x180002544 (TppETWTimerExpirationEnd.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x18003D0E0 (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x18003EA58 (TppSingleTimerExpiration.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800941C0 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x180095220 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
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
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]

  v25 = 0;
  v4 = (volatile signed __int64 *)a3;
  v26 = 0LL;
  v5 = *(_QWORD *)(a4 + 8) != 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v6 = a3 + 8;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v6 = a3 + 128;
    a4 = 2147353520LL;
    a2 = (char *)RtlpFreezeTimeBias;
    a3 = MEMORY[0x7FFE03B0];
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v23 = &v22;
  v22 = &v22;
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerExpirationBegin(v6);
  RtlAcquireSRWLockExclusive(v4, a2, a3, a4);
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
    v26 = 10000LL * (unsigned int)v17;
    if ( !v5 )
      v14 = v7 - v14;
    v24 = v14;
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerSetNtTimer(v6, v14, v17);
    ZwSetTimer2(*(_QWORD *)(v6 + 24), &v24, 0LL, &v25);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v4);
  v19 = v22;
  while ( v19 != &v22 )
  {
    v20 = v19 - 30;
    LOBYTE(v18) = v5;
    v19 = (_QWORD *)*v19;
    TppSingleTimerExpiration(v20, v4, v18);
  }
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerExpirationEnd(v6);
  return ZwAssociateWaitCompletionPacket(
           *(_QWORD *)(v6 + 32),
           *((_QWORD *)v4 - 6),
           *(_QWORD *)(v6 + 24),
           v6 + 40,
           v4,
           0,
           v5,
           0LL);
}
