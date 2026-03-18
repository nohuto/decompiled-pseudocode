/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C007D670
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeHookSupported_0 @ 0x1C0002830 (IsFreeHookSupported_0.c)
 *     FreeHook_0 @ 0x1C0002838 (FreeHook_0.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  if ( (int)IsFreeHookSupported_0() >= 0 )
    FreeHook_0();
}
