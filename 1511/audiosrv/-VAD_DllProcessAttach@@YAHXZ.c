/*
 * XREFs of ?VAD_DllProcessAttach@@YAHXZ @ 0x180045AD0
 * Callers:
 *     DllMain @ 0x180069D28 (DllMain.c)
 * Callees:
 *     <none>
 */

_BOOL8 VAD_DllProcessAttach(void)
{
  return !ATL::CAtlBaseModule::m_bInitFailed;
}
