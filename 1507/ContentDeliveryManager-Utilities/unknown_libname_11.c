/*
 * XREFs of unknown_libname_11 @ 0x1800258D4
 * Callers:
 *     sub_180024A0C @ 0x180024A0C (sub_180024A0C.c)
 *     sub_180024EA4 @ 0x180024EA4 (sub_180024EA4.c)
 *     j_unknown_libname_11 @ 0x18002570C (j_unknown_libname_11.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_11(_WORD *a1)
{
  __int16 v1; // dx
  __int64 result; // rax

  v1 = a1[3] & 0x7FF0;
  if ( v1 == 32752 )
  {
    if ( (a1[3] & 0xF) != 0 )
      return 2LL;
    if ( a1[2] )
      return 2LL;
    if ( a1[1] )
      return 2LL;
    result = 1LL;
    if ( *a1 )
      return 2LL;
  }
  else
  {
    if ( (a1[3] & 0x7FFF) != 0 )
      return (unsigned int)(v1 != 0) - 2;
    result = 0LL;
    if ( a1[2] || a1[1] || *a1 )
      return (unsigned int)(v1 != 0) - 2;
  }
  return result;
}
