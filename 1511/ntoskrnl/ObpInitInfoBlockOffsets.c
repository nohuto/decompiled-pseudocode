/*
 * XREFs of ObpInitInfoBlockOffsets @ 0x140768448
 * Callers:
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 ObpInitInfoBlockOffsets()
{
  unsigned __int8 *v0; // r8
  int v1; // edx
  char v2; // cl
  __int64 result; // rax

  v0 = ObpInfoMaskToOffset;
  v1 = 0;
  do
  {
    v2 = 0;
    if ( (v1 & 1) != 0 )
      v2 = 32;
    if ( (v1 & 2) != 0 )
      v2 += 32;
    if ( (v1 & 4) != 0 )
      v2 += 16;
    if ( (v1 & 8) != 0 )
      v2 += 32;
    if ( (v1 & 0x10) != 0 )
      v2 += 16;
    if ( (v1 & 0x20) != 0 )
      v2 += 16;
    if ( (v1 & 0x40) != 0 )
      v2 += 32;
    if ( (v1 & 0x80u) != 0 )
      v2 += 4;
    ++v1;
    *v0 = v2;
    result = v1;
    ++v0;
  }
  while ( (unsigned __int64)v1 < 0x100 );
  return result;
}
