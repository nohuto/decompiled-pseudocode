/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0079EF0
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroyEventHookSupported_0 @ 0x1C0002880 (IsDestroyEventHookSupported_0.c)
 *     DestroyEventHook_0 @ 0x1C0002888 (DestroyEventHook_0.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  if ( (int)IsDestroyEventHookSupported_0() >= 0 )
    DestroyEventHook_0();
}
