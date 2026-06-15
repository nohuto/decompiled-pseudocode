/*
 * XREFs of ??1CHostedAppInteractivityManager@@QEAA@XZ @ 0x180046968
 * Callers:
 *     _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x18004D1D0 (_dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18003273C (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 */

void __fastcall CHostedAppInteractivityManager::~CHostedAppInteractivityManager(CHostedAppInteractivityManager *this)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(&qword_1800E6458);
  DeleteCriticalSection(&stru_1800E6430);
}
