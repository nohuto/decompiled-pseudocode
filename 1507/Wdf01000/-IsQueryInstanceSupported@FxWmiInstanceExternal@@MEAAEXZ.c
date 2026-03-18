/*
 * XREFs of ?IsQueryInstanceSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x1C00693D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiInstanceExternal::IsQueryInstanceSupported(FxWmiInstanceExternal *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( this->m_UseContextForQuery || this->m_QueryInstanceCallback.m_Method || this->m_ExecuteMethodCallback.m_Method )
    return 1LL;
  return result;
}
