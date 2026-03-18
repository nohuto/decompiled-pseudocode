/*
 * XREFs of ?IsSetInstanceSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x1C006FCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWmiInstanceExternal::IsSetInstanceSupported(FxWmiInstanceInternal *this)
{
  return this->m_SetInstance != 0LL;
}
