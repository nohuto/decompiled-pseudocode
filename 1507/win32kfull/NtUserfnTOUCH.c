/*
 * XREFs of NtUserfnTOUCH @ 0x1C0223450
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ForwardTouchMessage @ 0x1C01DC718 (ForwardTouchMessage.c)
 */

__int64 __fastcall NtUserfnTOUCH(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        struct tagTOUCHINPUT *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0LL;
  v8[0] = 0LL;
  if ( a2 == 576
    && a6 >= 0x29E
    && (a6 <= 0x29F || a6 > 0x2AA && (a6 <= 0x2AC || a6 > 0x2B0 && (a6 <= 0x2B4 || a6 - 695 <= 1))) )
  {
    if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400);
    }
    else if ( (unsigned int)ForwardTouchMessage(gptiCurrent, a1, 0x240u, a3, a4, 0, a5, a6, v8) )
    {
      return v8[0];
    }
  }
  return v6;
}
