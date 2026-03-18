/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1401FC6A0
 * Callers:
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x140206EE0 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 * Callees:
 *     UpdateCheckpoint @ 0x140030480 (UpdateCheckpoint.c)
 */

struct CHECKPOINT *__fastcall WPUpdateCheckPointSettings(struct tagWND *a1, char a2)
{
  struct CHECKPOINT *result; // rax
  int v4; // ecx
  unsigned int v5; // ecx

  result = UpdateCheckpoint(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *((_DWORD *)result + 4) |= 1u;
    v4 = *((_DWORD *)result + 4);
    if ( (a2 & 2) != 0 )
      v5 = v4 | 2;
    else
      v5 = v4 & 0xFFFFFFFD;
    *((_DWORD *)result + 4) = v5;
  }
  return result;
}
