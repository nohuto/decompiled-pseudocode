/*
 * XREFs of unknown_libname_10 @ 0x180025554
 * Callers:
 *     sub_18002340C @ 0x18002340C (sub_18002340C.c)
 *     sub_180023890 @ 0x180023890 (sub_180023890.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
__int64 __fastcall unknown_libname_10(_WORD *a1)
{
  __int16 v1; // dx
  __int64 result; // rax

  v1 = a1[1] & 0x7F80;
  if ( v1 == 32640 )
  {
    if ( (a1[1] & 0x7F) != 0 )
      return 2LL;
    result = 1LL;
    if ( *a1 )
      return 2LL;
  }
  else
  {
    if ( (a1[1] & 0x7FFF) != 0 )
      return (unsigned int)(v1 != 0) - 2;
    result = 0LL;
    if ( *a1 )
      return (unsigned int)(v1 != 0) - 2;
  }
  return result;
}
