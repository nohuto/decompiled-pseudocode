/*
 * XREFs of xxxProcessShowWindowEvent @ 0x1C0224C58
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     WPUpdateCheckPointSettings @ 0x1C0130DD8 (WPUpdateCheckPointSettings.c)
 */

__int64 __fastcall xxxProcessShowWindowEvent(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v7; // r8d
  __int64 result; // rax

  v7 = a4 & 0x10000;
  if ( a2 == 1 )
    v7 |= a3;
  result = xxxShowWindowEx((struct tagWND *)a1, a4, v7);
  if ( !a2 && (a3 & 4) != 0 && (*(_BYTE *)(a1 + 55) & 0x20) != 0 )
    return WPUpdateCheckPointSettings(a1, a3);
  return result;
}
