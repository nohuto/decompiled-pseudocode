/*
 * XREFs of RtlpVerGetConditionMask @ 0x140158048
 * Callers:
 *     RtlVerifyVersionInfo @ 0x140157DD0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpVerGetConditionMask(unsigned __int64 a1, unsigned int a2)
{
  char v2; // al

  v2 = 0;
  do
  {
    ++v2;
    a2 >>= 1;
  }
  while ( a2 );
  return (a1 >> (3 * (v2 - 1))) & 7;
}
