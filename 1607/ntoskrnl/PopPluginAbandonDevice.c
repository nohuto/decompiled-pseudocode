/*
 * XREFs of PopPluginAbandonDevice @ 0x14020435C
 * Callers:
 *     PoFxAbandonDevice @ 0x1404849B4 (PoFxAbandonDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

char __fastcall PopPluginAbandonDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v4 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 96))(2LL, &v4) )
    PopFxBugCheck(0x605uLL, 2uLL, BugCheckParameter3, 0LL);
  return v5;
}
