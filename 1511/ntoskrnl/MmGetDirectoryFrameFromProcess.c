/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1404C06E8
 * Callers:
 *     PfpLogApplicationEvent @ 0x14001B76C (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
