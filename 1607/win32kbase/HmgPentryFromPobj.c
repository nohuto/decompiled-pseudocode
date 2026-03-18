/*
 * XREFs of HmgPentryFromPobj @ 0x1C0029BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall HmgPentryFromPobj(struct OBJECT *a1)
{
  return GdiHandleManager::GetEntryFromObject((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, a1);
}
