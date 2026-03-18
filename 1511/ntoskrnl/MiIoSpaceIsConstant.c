/*
 * XREFs of MiIoSpaceIsConstant @ 0x1400C1C20
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiIoSpaceIsConstant(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *result; // rax

  for ( result = (unsigned __int64 *)MiPermanentIoSpace; ; result += 3 )
  {
    if ( (unsigned __int64)result >= MiPermanentIoSpaceEnd )
      return 0LL;
    if ( a1 >= *result && a1 <= result[1] )
      break;
  }
  if ( a2 + a1 - 1 > result[1] )
    return 0LL;
  return result;
}
