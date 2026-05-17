/*
 * XREFs of RtlClearBit @ 0x1800E36F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 *__fastcall RtlClearBit(__int64 a1, unsigned int a2)
{
  signed __int32 *result; // rax

  result = *(signed __int32 **)(a1 + 8);
  _bittestandreset(result, a2);
  return result;
}
