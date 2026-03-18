/*
 * XREFs of sub_14015DFD8 @ 0x14015DFD8
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x14015DE04 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringCopyStringEx @ 0x14015DE78 (RtlUnicodeStringCopyStringEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14015DFD8(
        unsigned __int16 *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6)
{
  __int64 result; // rax
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  __int64 v11; // r10

  result = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( a1 || (a6 & 0x100) == 0 )
  {
    v9 = *a1;
    if ( (*a1 & 1) != 0 )
      return 3221225485LL;
    v10 = a1[1];
    if ( (v10 & 1) != 0 )
      return 3221225485LL;
    if ( v9 > v10 )
      return 3221225485LL;
    if ( v10 == 0xFFFFLL )
      return 3221225485LL;
    v11 = *((_QWORD *)a1 + 1);
    if ( !v11 && (v9 || v10) )
    {
      return 3221225485LL;
    }
    else
    {
      *a3 = (unsigned __int64)v10 >> 1;
      *a2 = v11;
    }
  }
  return result;
}
