/*
 * XREFs of TtmpCallSetBuiltinPanelState @ 0x1406773A0
 * Callers:
 *     TtmpPushTerminalState @ 0x14067760C (TtmpPushTerminalState.c)
 * Callees:
 *     PoSessionBuiltinPanelState @ 0x14020D22C (PoSessionBuiltinPanelState.c)
 *     TtmpStartCallout @ 0x140677730 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406777A0 (TtmpStopCallout.c)
 */

__int64 __fastcall TtmpCallSetBuiltinPanelState(int *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      TtmpStartCallout((unsigned int)v6, (_DWORD)a1, a2, 1397768787, a3);
      PoSessionBuiltinPanelState(a3, *a1);
      return TtmpStopCallout(v6, 0LL);
    }
  }
  return result;
}
