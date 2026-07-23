/*
 * XREFs of TppUpdateSubQueueTimer @ 0x18000B484
 * Callers:
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18000B34C (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x18000B6E0 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x180001B7C (TppETWTimerSetNtTimer.c)
 *     TppETWTimerCancelNtTimer @ 0x180003B74 (TppETWTimerCancelNtTimer.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x1800A6290 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A8350 (ZwSetTimer2.c)
 */

int __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  LARGE_INTEGER DueTime; // [rsp+20h] [rbp-28h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  Parameters.Version = 0;
  Parameters.NoWakeTolerance = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = (unsigned __int128)((*(_QWORD *)(v3 + 32) - v5) * (__int128)0x346DC5D63886594BLL) >> 64;
    v7 = (unsigned __int64)v6 >> 63;
    v8 = ((unsigned __int64)v6 >> 63) + (v6 >> 11);
    if ( *(_QWORD *)a1 == v5 && *(_DWORD *)(a1 + 112) == (_DWORD)v8 )
      return v7;
    *(_QWORD *)a1 = v5;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)v8;
    *(_DWORD *)(a1 + 112) = v8;
    if ( !a2 )
    {
      v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      if ( v9 <= v5 )
      {
        v5 = v9 - v5;
        DueTime.QuadPart = v5;
LABEL_8:
        if ( MEMORY[0x7FFE0386] )
          TppETWTimerSetNtTimer(a1, v5, v8);
        LODWORD(v7) = ZwSetTimer2(*(HANDLE *)(a1 + 24), &DueTime, 0LL, &Parameters);
        return v7;
      }
      v5 = 0LL;
    }
    DueTime.QuadPart = v5;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerCancelNtTimer(a1);
    LODWORD(v7) = ZwCancelTimer2(*(HANDLE *)(a1 + 24), 0LL);
  }
  return v7;
}
