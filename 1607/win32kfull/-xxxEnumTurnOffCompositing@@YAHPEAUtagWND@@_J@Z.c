/*
 * XREFs of ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01DE290
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 */

__int64 __fastcall xxxEnumTurnOffCompositing(__m128i *a1)
{
  if ( (a1[3].m128i_i8[3] & 2) != 0 )
    xxxSetWindowStyle(a1, -20, a1[3].m128i_i32[0] & 0x87F77FF);
  return 1LL;
}
