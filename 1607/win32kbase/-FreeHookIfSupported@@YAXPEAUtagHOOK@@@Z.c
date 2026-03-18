/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C0081940
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeHookSupported_0 @ 0x1C0002840 (IsFreeHookSupported_0.c)
 *     FreeHook_0 @ 0x1C0002848 (FreeHook_0.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  if ( (int)IsFreeHookSupported_0() >= 0 )
    FreeHook_0();
}
