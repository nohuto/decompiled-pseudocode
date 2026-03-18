/*
 * XREFs of ?DxgkEngIsDwmComposing@@YAHPEAH@Z @ 0x1C007F590
 * Callers:
 *     <none>
 * Callees:
 *     IsIsDwmActiveSupported_0 @ 0x1C00013F0 (IsIsDwmActiveSupported_0.c)
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
