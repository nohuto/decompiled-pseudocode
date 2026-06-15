/*
 * XREFs of HHOSTEDAPPMANAGERCONTEXT_rundown @ 0x180005920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HHOSTEDAPPMANAGERCONTEXT_rundown(PickerHostContextManager *a1, struct CPickerHostContext *a2)
{
  PickerHostContextManager::DestroyPickerHostContext(a1, a2);
}
