/*
 * XREFs of RtlFindMostSignificantBit @ 0x180078760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindMostSignificantBit(unsigned __int64 a1)
{
  bool v1; // zf
  __int64 v2; // r8
  __int64 result; // rax

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, a1);
  result = 0xFFFFFFFFLL;
  if ( !v1 )
    return (unsigned __int8)v2;
  return result;
}
