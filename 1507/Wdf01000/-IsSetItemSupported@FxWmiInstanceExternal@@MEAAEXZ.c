/*
 * XREFs of ?IsSetItemSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x1C0069420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWmiInstanceExternal::IsSetItemSupported(FxWmiInstanceInternal *this)
{
  return this->m_SetItem != 0LL;
}
