/*
 * XREFs of PoStartPartitionReplace @ 0x1406365F8
 * Callers:
 *     PnprQuiesceDevices @ 0x1403B02B8 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPartitionReplace(_DWORD *a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  a1[4] = 10;
  PopDispatchStateCallout(a1, (__int64)&v4);
  a1[4] = 9;
  return PopDispatchStateCallout(a1, 0LL);
}
