/*
 * XREFs of ClientNoMemoryPopup @ 0x1C020DE0C
 * Callers:
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientNoMemoryPopup(__int64 a1, __int64 a2)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  UserSessionSwitchLeaveCrit(a1, a2);
  EtwTraceBeginCallback(85LL);
  KeUserModeCallback(85LL, 0LL, 0LL, &v4, &v3);
  EtwTraceEndCallback(85LL);
  return EnterCrit(1LL);
}
