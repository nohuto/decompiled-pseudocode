/*
 * XREFs of TtmpUpdatePrimaryDisplayWnf @ 0x1406777D8
 * Callers:
 *     TtmpPushTerminalState @ 0x14067760C (TtmpPushTerminalState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     TtmpStartCallout @ 0x140677730 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406777A0 (TtmpStopCallout.c)
 */

__int64 __fastcall TtmpUpdatePrimaryDisplayWnf(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _BYTE v4[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int Buffer; // [rsp+80h] [rbp+18h] BYREF

  Buffer = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      TtmpStartCallout((__int64)v4, a1, a2, 0x57445053u, a3);
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
      return TtmpStopCallout((__int64)v4, 0);
    }
  }
  return result;
}
