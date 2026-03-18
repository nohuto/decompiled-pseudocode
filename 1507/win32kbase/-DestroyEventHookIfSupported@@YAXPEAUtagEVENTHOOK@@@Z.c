/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0016170
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroyEventHookSupported_0 @ 0x1C0002860 (IsDestroyEventHookSupported_0.c)
 *     DestroyEventHook_0 @ 0x1C0002868 (DestroyEventHook_0.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  if ( (int)IsDestroyEventHookSupported_0() >= 0 )
    DestroyEventHook_0();
}
