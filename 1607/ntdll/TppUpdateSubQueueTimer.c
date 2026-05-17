/*
 * XREFs of TppUpdateSubQueueTimer @ 0x18003C4BC
 * Callers:
 *     TppCancelTimer @ 0x18003C268 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18003C388 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x18003CC28 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x1800016B8 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerCancelNtTimer @ 0x1800032D0 (TppETWTimerCancelNtTimer.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x1800A75F0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A9770 (ZwSetTimer2.c)
 */

__int64 __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  LOBYTE(a4) = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v12 = 0;
  v13 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v7 = (unsigned __int128)((*(_QWORD *)(v4 + 32) - v6) * (__int128)0x346DC5D63886594BLL) >> 64;
    result = (unsigned __int64)v7 >> 63;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 11);
    if ( *(_QWORD *)a1 == v6 && *(_DWORD *)(a1 + 112) == (_DWORD)v9 )
      return result;
    *(_QWORD *)a1 = v6;
    v13 = 10000LL * (unsigned int)v9;
    *(_DWORD *)(a1 + 112) = v9;
    if ( !(_BYTE)a4 )
    {
      v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      if ( v10 <= v6 )
      {
        v6 = v10 - v6;
        v11 = v6;
LABEL_8:
        if ( MEMORY[0x7FFE0386] )
          TppETWTimerSetNtTimer(a1, v6, v9);
        return ((__int64 (__fastcall *)(_QWORD, __int64 *, _QWORD, int *))ZwSetTimer2)(
                 *(_QWORD *)(a1 + 24),
                 &v11,
                 0LL,
                 &v12);
      }
      v6 = 0LL;
    }
    v11 = v6;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( MEMORY[0x7FFE0386] )
      TppETWTimerCancelNtTimer(a1);
    return ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL, a3, a4);
  }
  return result;
}
