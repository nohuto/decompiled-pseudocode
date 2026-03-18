/*
 * XREFs of RtlCrc64 @ 0x1401044CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCrc64(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, &Crc64Ctrl);
}
