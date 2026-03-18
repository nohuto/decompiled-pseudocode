/*
 * XREFs of ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x140206EE0
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1401FC6A0 (WPUpdateCheckPointSettings.c)
 */

struct CHECKPOINT *__fastcall xxxProcessShowWindowEvent(const struct tagWND *a1, int a2, int a3, int a4)
{
  unsigned int v7; // r8d
  struct CHECKPOINT *result; // rax

  v7 = a4 & 0x10000;
  if ( a2 == 1 )
    v7 |= a3;
  result = (struct CHECKPOINT *)xxxShowWindowEx(a1, a4, v7);
  if ( !a2 && (a3 & 4) != 0 )
  {
    result = (struct CHECKPOINT *)*((_QWORD *)a1 + 5);
    if ( (*((_BYTE *)result + 31) & 0x20) != 0 )
      return WPUpdateCheckPointSettings(a1, a3);
  }
  return result;
}
