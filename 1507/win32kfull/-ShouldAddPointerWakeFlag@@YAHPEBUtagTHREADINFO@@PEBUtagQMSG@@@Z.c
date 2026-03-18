/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00E1CD0
 * Callers:
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 * Callees:
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C008BD5C (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10

  if ( a2 && (unsigned int)IsGenuineMouseInput((const struct tagQMSG *)((char *)a2 + 112)) )
    return IsMouseInPointerActive(v3, v2);
  else
    return 0LL;
}
