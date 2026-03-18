/*
 * XREFs of TtmpUpdatePrimaryDisplayWnf @ 0x1406776F4
 * Callers:
 *     TtmpPushTerminalState @ 0x140677528 (TtmpPushTerminalState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     TtmpStartCallout @ 0x14067764C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406776BC (TtmpStopCallout.c)
 */

__int64 __fastcall TtmpUpdatePrimaryDisplayWnf(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _BYTE v4[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      TtmpStartCallout((__int64)v4, a1, a2, 0x57445053u, a3);
      ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v5, 4LL);
      return TtmpStopCallout((__int64)v4, 0);
    }
  }
  return result;
}
