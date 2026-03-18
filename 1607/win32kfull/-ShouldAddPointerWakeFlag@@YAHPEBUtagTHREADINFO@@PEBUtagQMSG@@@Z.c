/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C010546C
 * Callers:
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 * Callees:
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005DA08 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  __int64 v2; // r10
  __int64 v3; // r11

  if ( a2 && (unsigned int)IsGenuineMouseInput((const struct tagQMSG *)((char *)a2 + 120)) )
    return IsMouseInPointerActive(v3, v2);
  else
    return 0LL;
}
