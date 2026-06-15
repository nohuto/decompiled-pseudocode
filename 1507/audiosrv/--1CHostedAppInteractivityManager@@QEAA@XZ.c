/*
 * XREFs of ??1CHostedAppInteractivityManager@@QEAA@XZ @ 0x180042AC8
 * Callers:
 *     _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x180049120 (_dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180001430 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 */

void __fastcall CHostedAppInteractivityManager::~CHostedAppInteractivityManager(CHostedAppInteractivityManager *this)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&qword_1800E8458);
  DeleteCriticalSection(&stru_1800E8430);
}
