/*
 * XREFs of ?IsDebug@FxObject@@IEAAEXZ @ 0x1C000B5E0
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxObject::IsDebug(FxObject *this)
{
  return SLOBYTE(this->m_ObjectFlags) < 0;
}
