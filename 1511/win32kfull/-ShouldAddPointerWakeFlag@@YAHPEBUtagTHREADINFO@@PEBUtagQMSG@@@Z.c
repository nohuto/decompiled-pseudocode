/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0053C94
 * Callers:
 *     WakeSomeone @ 0x1C0051C7C (WakeSomeone.c)
 * Callees:
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0065430 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  __int64 v3; // r9
  __int64 v4; // r10

  if ( a2 && (unsigned int)IsGenuineMouseInput((const struct tagQMSG *)((char *)a2 + 112)) )
    return IsMouseInPointerActive(v4, v3);
  else
    return 0LL;
}
