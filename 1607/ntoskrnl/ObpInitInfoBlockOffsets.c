/*
 * XREFs of ObpInitInfoBlockOffsets @ 0x1407B3018
 * Callers:
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 ObpInitInfoBlockOffsets()
{
  unsigned __int8 *v0; // rdx
  int v1; // ecx
  char v2; // al
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
      v2 += 16;
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
