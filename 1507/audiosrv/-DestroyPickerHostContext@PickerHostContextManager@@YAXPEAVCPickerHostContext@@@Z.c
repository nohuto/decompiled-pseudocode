/*
 * XREFs of ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18000592C
 * Callers:
 *     HHOSTEDAPPMANAGERCONTEXT_rundown @ 0x180005920 (HHOSTEDAPPMANAGERCONTEXT_rundown.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Find@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPickerHostContext@@PEAU3@@Z @ 0x180005B78 (-Find@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180005C4C (-RemoveAt@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@AT.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180008DD4 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x18002D818 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PickerHostContextManager::DestroyPickerHostContext(
        PickerHostContextManager *this,
        struct CPickerHostContext *a2,
        bool a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _GUID *v7; // rdx
  CHostedAppInteractivityManager *v8; // rcx
  struct _GUID **Next; // rax
  int v10; // eax
  _BYTE v11[32]; // [rsp+28h] [rbp-20h] BYREF
  PickerHostContextManager *v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v11, &PickerHostContextManager::s_csPickerHostContextList, a3);
  v5 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::Find(v4, &v12);
  if ( v5 )
  {
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAt(v6, v5);
    v13 = *(_QWORD **)this;
    while ( v13 )
    {
      Next = (struct _GUID **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v8, &v13);
      v7 = *Next;
      LODWORD(Next) = *(_DWORD *)&(*Next)->Data4[4];
      *(_DWORD *)&v7->Data4[4] = 0;
      if ( (_DWORD)Next )
      {
        v10 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
                v8,
                *(const unsigned __int16 **)&v7->Data1,
                *(_DWORD *)v7->Data4,
                0);
        if ( v10 < 0 )
        {
          v7 = &WPP_GLOBAL_Control;
          v8 = *(CHostedAppInteractivityManager **)&WPP_GLOBAL_Control.Data1;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              14LL,
              &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
              (unsigned int)v10);
          }
        }
      }
    }
    CPickerHostContext::`scalar deleting destructor'(this, (unsigned int)v7);
  }
  if ( v11[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v11);
}
