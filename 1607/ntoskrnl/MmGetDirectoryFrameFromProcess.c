/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1403E8FB8
 * Callers:
 *     PfpLogApplicationEvent @ 0x140006674 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
