/*
 * XREFs of ??1?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAA@XZ @ 0x180042AF0
 * Callers:
 *     PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__ @ 0x180049130 (PickerHostContextManager--_dynamic_atexit_destructor_for__s_PickerHostContextList__.c)
 * Callees:
 *     <none>
 */

void ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::~CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>()
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&PickerHostContextManager::s_PickerHostContextList);
}
