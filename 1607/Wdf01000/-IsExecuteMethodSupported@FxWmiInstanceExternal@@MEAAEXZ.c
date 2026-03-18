/*
 * XREFs of ?IsExecuteMethodSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x1C006FC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxWmiInstanceExternal::IsExecuteMethodSupported(FxWmiInstanceInternal *this)
{
  return this->m_ExecuteMethod != 0LL;
}
