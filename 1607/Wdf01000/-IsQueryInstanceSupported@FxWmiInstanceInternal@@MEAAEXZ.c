/*
 * XREFs of ?IsQueryInstanceSupported@FxWmiInstanceInternal@@MEAAEXZ @ 0x1C006FCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWmiInstanceInternal::IsQueryInstanceSupported(FxWmiInstanceInternal *this)
{
  return this->m_QueryInstance != 0LL;
}
