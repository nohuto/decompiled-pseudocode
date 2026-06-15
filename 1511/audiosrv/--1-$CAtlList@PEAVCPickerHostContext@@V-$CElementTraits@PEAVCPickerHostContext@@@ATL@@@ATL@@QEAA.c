/*
 * XREFs of ??1?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAA@XZ @ 0x180046990
 * Callers:
 *     PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__ @ 0x18004D1E0 (PickerHostContextManager--_dynamic_atexit_destructor_for__s_PickerHostContextList__.c)
 * Callees:
 *     <none>
 */

void ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::~CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>()
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(&PickerHostContextManager::s_PickerHostContextList);
}
