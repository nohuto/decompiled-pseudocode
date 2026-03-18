/*
 * XREFs of mth_PositiveSquare @ 0x1C001BA38
 * Callers:
 *     fsg_InitInterpreterTrans @ 0x1C001B460 (fsg_InitInterpreterTrans.c)
 *     scl_InitializeScaling @ 0x1C001B5AC (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall mth_PositiveSquare(_DWORD *a1)
{
  int v1; // edx
  _BOOL8 result; // rax

  v1 = a1[4];
  result = 0LL;
  if ( *a1 == v1 && !a1[1] && !a1[3] )
    return v1 >= 0;
  return result;
}
