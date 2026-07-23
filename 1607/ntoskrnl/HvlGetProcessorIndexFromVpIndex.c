/*
 * XREFs of HvlGetProcessorIndexFromVpIndex @ 0x1401BFC60
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall HvlGetProcessorIndexFromVpIndex(unsigned int a1)
{
  unsigned int v1; // ebx
  char v3; // di
  unsigned int v4; // esi
  ULONG ActiveProcessorCount; // eax
  _BYTE *i; // rcx

  v1 = 0;
  if ( HvlpVirtualProcessorsIdentityMapped )
    return a1;
  v3 = a1 & 0x3F;
  v4 = a1 >> 6;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !ActiveProcessorCount )
    return 0LL;
  for ( i = &HvlpVirtualProcessorMapping; *i != (_BYTE)v4 || i[1] != v3; i += 2 )
  {
    if ( ++v1 >= ActiveProcessorCount )
      return 0LL;
  }
  return v1;
}
