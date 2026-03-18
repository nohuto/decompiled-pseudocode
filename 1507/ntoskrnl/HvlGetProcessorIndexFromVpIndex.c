/*
 * XREFs of HvlGetProcessorIndexFromVpIndex @ 0x1401E5760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetProcessorIndexFromVpIndex(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  char v3; // cl
  char *i; // rdx

  result = 0LL;
  if ( HvlpVirtualProcessorsIdentityMapped )
    return a1;
  v2 = a1 >> 6;
  v3 = a1 & 0x3F;
  if ( !(_DWORD)KeNumberProcessors_0 )
    return 0LL;
  for ( i = HvlpVirtualProcessorMapping; *i != (_BYTE)v2 || i[1] != v3; i += 2 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= (unsigned int)KeNumberProcessors_0 )
      return 0LL;
  }
  return result;
}
