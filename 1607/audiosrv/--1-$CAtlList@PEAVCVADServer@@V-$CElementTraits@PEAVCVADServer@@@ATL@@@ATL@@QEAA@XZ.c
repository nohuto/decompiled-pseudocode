/*
 * XREFs of ??1?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAA@XZ @ 0x1800358C8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_VADServerList__ @ 0x18003C9E0 (_dynamic_atexit_destructor_for__g_VADServerList__.c)
 * Callees:
 *     <none>
 */

void ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::~CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>()
{
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
}
