/*
 * XREFs of RtlCrc32 @ 0x18007B6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCrc32(__int64 a1, __int64 a2, unsigned int a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, &Crc32Ctrl);
}
