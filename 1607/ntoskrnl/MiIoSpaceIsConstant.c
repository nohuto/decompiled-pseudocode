/*
 * XREFs of MiIoSpaceIsConstant @ 0x14009BF58
 * Callers:
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiIoSpaceIsConstant(unsigned __int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx

  result = (_QWORD *)qword_140327660;
  v3 = a1 + a2 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !result )
        return 0LL;
      if ( v3 >= result[3] )
        break;
      result = (_QWORD *)*result;
    }
    if ( a1 <= result[4] )
      break;
    result = (_QWORD *)result[1];
  }
  if ( a1 >= result[3] )
  {
    v4 = result[4];
    if ( a1 <= v4 && v3 > v4 )
      return 0LL;
  }
  return result;
}
