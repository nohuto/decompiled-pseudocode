/*
 * XREFs of ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003904C
 * Callers:
 *     HHOSTEDAPPMANAGERCONTEXT_rundown @ 0x180039040 (HHOSTEDAPPMANAGERCONTEXT_rundown.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800325E4 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?Find@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPickerHostContext@@PEAU3@@Z @ 0x1800390E4 (-Find@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800391B8 (-RemoveAt@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@AT.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x180066F64 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PickerHostContextManager::DestroyPickerHostContext(__int64 **this, struct CPickerHostContext *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  CHostedAppInteractivityManager *v6; // rcx
  _QWORD *Next; // rax
  __int64 v8; // rdx
  int v9; // eax
  LPCRITICAL_SECTION v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  __int64 **v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, &PickerHostContextManager::s_csPickerHostContextList);
  v4 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::Find(v3, &v12);
  if ( v4 )
  {
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAt(v5, v4);
    v13 = *this;
    while ( v13 )
    {
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v6, &v13);
      v8 = *Next;
      LODWORD(Next) = *(_DWORD *)(*Next + 12LL);
      *(_DWORD *)(v8 + 12) = 0;
      if ( (_DWORD)Next )
      {
        v9 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
               v6,
               *(const unsigned __int16 **)v8,
               *(_DWORD *)(v8 + 8),
               0);
        if ( v9 < 0 )
        {
          v6 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              14LL,
              &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
              (unsigned int)v9);
          }
        }
      }
    }
    CPickerHostContext::`scalar deleting destructor'(this);
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
}
