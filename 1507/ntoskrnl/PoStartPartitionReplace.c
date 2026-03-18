/*
 * XREFs of PoStartPartitionReplace @ 0x1406B5F08
 * Callers:
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
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
