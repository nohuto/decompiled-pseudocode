/*
 * XREFs of sub_180001310 @ 0x180001310
 * Callers:
 *     sub_180001420 @ 0x180001420 (sub_180001420.c)
 *     sub_180001564 @ 0x180001564 (sub_180001564.c)
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 *     sub_180003370 @ 0x180003370 (sub_180003370.c)
 *     sub_1800033D0 @ 0x1800033D0 (sub_1800033D0.c)
 *     sub_180003430 @ 0x180003430 (sub_180003430.c)
 *     sub_180003530 @ 0x180003530 (sub_180003530.c)
 *     sub_180003590 @ 0x180003590 (sub_180003590.c)
 *     sub_180003610 @ 0x180003610 (sub_180003610.c)
 * Callees:
 *     sub_1800010DC @ 0x1800010DC (sub_1800010DC.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001310(_DWORD *a1)
{
  ULONG result; // eax
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-29h] BYREF
  GUID *v3; // [rsp+50h] [rbp-9h]
  __int64 v4; // [rsp+58h] [rbp-1h]
  _DWORD *v5; // [rsp+60h] [rbp+7h]
  __int64 v6; // [rsp+68h] [rbp+Fh]
  _DWORD *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  _DWORD *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  _DWORD *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( (a1[2] || a1[3] || a1[4] || a1[5])
    && (unsigned int)dword_18000C020 > 5
    && (qword_18000C030 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_18000C038 & 0x400000000000LL) == qword_18000C038 )
    {
      v4 = 16LL;
      v3 = &ActivityId;
      v7 = a1 + 3;
      v9 = a1 + 4;
      v11 = a1 + 5;
      v5 = a1 + 2;
      v6 = 4LL;
      v8 = 4LL;
      v10 = 4LL;
      v12 = 4LL;
      return sub_1800010DC(
               (__int64)&dword_18000C020,
               (unsigned __int8 *)dword_1800097F7,
               (__int64)(a1 + 2),
               0LL,
               7u,
               &v2);
    }
  }
  return result;
}
