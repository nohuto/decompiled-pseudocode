/*
 * XREFs of ?VAD_DllProcessAttach@@YAHXZ @ 0x180042A40
 * Callers:
 *     DllMain @ 0x18006B014 (DllMain.c)
 * Callees:
 *     <none>
 */

_BOOL8 VAD_DllProcessAttach(void)
{
  return !ATL::CAtlBaseModule::m_bInitFailed;
}
