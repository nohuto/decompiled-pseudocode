/*
 * XREFs of TppTimerQueueExpiration @ 0x18003C880
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x1800016B8 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerExpirationBegin @ 0x180002488 (TppETWTimerExpirationBegin.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     TppPHDelete @ 0x18003CB0C (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x18003CC28 (TppSingleTimerExpiration.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A7590 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A9770 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
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
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-49h]
  int v23; // [rsp+28h] [rbp-41h]
  __int64 v24; // [rsp+30h] [rbp-39h]
  _QWORD *v25; // [rsp+40h] [rbp-29h] BYREF
  _QWORD **v26; // [rsp+48h] [rbp-21h]
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v28[6]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v29; // [rsp+5Eh] [rbp-Bh]
  __int64 v30; // [rsp+78h] [rbp+Fh]
  int v31; // [rsp+80h] [rbp+17h] BYREF
  __int64 v32; // [rsp+88h] [rbp+1Fh]

  v31 = 0;
  v4 = (volatile signed __int64 *)a3;
  v32 = 0LL;
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
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v26 = &v25;
  v25 = &v25;
  if ( MEMORY[0x7FFE0386] )
    TppETWTimerExpirationBegin(v6);
  RtlAcquireSRWLockExclusive((unsigned __int64)v4, a2, a3, a4);
  v8 = (_QWORD *)(v6 + 8);
  while ( *v8 && *(_QWORD *)(*v8 + 40LL) <= v7 )
  {
    TppPHDelete(v6 + 8, *v8);
    v10 = (_QWORD *)(v9 - 40);
    TppPHDelete(v6 + 16, v9 - 40);
    *(_BYTE *)(v11 + 64) = 0;
    v12 = v26;
    if ( *v26 != &v25 )
      __fastfail(3u);
    v10[1] = v26;
    *v10 = &v25;
    *v12 = v10;
    v26 = (_QWORD **)v10;
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
    v32 = 10000LL * (unsigned int)v17;
    if ( !v5 )
      v14 = v7 - v14;
    v27 = v14;
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerSetNtTimer(v6, v14, v17);
    ZwSetTimer2(*(_QWORD *)(v6 + 24), &v27, 0LL, &v31, v22, v23, v24);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v4);
  v19 = v25;
  while ( v19 != &v25 )
  {
    v20 = v19 - 31;
    LOBYTE(v18) = v5;
    v19 = (_QWORD *)*v19;
    TppSingleTimerExpiration(v20, v4, v18);
  }
  if ( MEMORY[0x7FFE0386] )
  {
    v30 = v6;
    v29 = 7215;
    NtTraceEvent(MEMORY[0x7FFE0386], 1026LL, 8LL, v28);
  }
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
