/*
 * XREFs of ?DxgkEngIsDwmComposing@@YAHPEAH@Z @ 0x1C0084910
 * Callers:
 *     <none>
 * Callees:
 *     IsIsDwmActiveSupported_0 @ 0x1C0001450 (IsIsDwmActiveSupported_0.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(int *a1)
{
  if ( a1 )
    *a1 = 0;
  if ( (int)IsIsDwmActiveSupported_0() < 0 )
    return 0LL;
  else
    return IsDwmActive_0();
}
