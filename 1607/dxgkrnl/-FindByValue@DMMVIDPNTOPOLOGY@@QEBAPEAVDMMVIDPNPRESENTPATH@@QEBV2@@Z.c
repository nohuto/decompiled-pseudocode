/*
 * XREFs of ?FindByValue@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00047D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::FindByValue(
        DMMVIDPNTOPOLOGY *this,
        const struct DMMVIDPNPRESENTPATH *a2)
{
  return Set<DMMVIDPNPRESENTPATH>::FindByValue(this, a2);
}
