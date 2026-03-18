/*
 * XREFs of ?NumberOfLeadingZeros@@YAH_K@Z @ 0x1C01C5A60
 * Callers:
 *     ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x1C01C6BBC (-uDiv128by64@@YA_K_K00AEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NumberOfLeadingZeros(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = 64LL;
  if ( HIDWORD(a1) )
  {
    v1 = 32LL;
    a1 >>= 32;
  }
  if ( a1 >> 16 )
  {
    v1 -= 16LL;
    a1 >>= 16;
  }
  if ( a1 >> 8 )
  {
    v1 -= 8LL;
    a1 >>= 8;
  }
  if ( a1 >> 4 )
  {
    v1 -= 4LL;
    a1 >>= 4;
  }
  if ( a1 >> 2 )
  {
    v1 -= 2LL;
    a1 >>= 2;
  }
  if ( (a1 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return v1 - 2;
  else
    return v1 - a1;
}
