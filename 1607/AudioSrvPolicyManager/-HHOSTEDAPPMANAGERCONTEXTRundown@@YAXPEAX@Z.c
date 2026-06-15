/*
 * XREFs of ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180019190
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180016BD8 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x180017020 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(CPickerHostContext *this)
{
  __int64 v2; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&PickerHostContextManager::s_csPickerHostContextList;
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = PickerHostContextManager::s_PickerHostContextList;
  if ( PickerHostContextManager::s_PickerHostContextList )
  {
    while ( *(CPickerHostContext **)(v2 + 16) != this )
    {
      v2 = *(_QWORD *)v2;
      if ( !v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v2 = 0LL;
  }
  if ( v2 )
  {
    if ( v2 == PickerHostContextManager::s_PickerHostContextList )
      PickerHostContextManager::s_PickerHostContextList = *(_QWORD *)v2;
    else
      **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    if ( v2 == qword_1800344B8 )
      qword_1800344B8 = *(_QWORD *)(v2 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    *(_QWORD *)v2 = qword_1800344D0;
    qword_1800344D0 = v2;
    if ( !--qword_1800344C0 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&PickerHostContextManager::s_PickerHostContextList);
    CPickerHostContext::RevokeInteractivityFromApps(this);
    if ( this )
      CPickerHostContext::`scalar deleting destructor'(this);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
