/*
 * XREFs of ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180002EBC
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180002F3C (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x180002E0C (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180003678 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180007890 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHXZ @ 0x180013450 (-HasSmtcSubscription@CApplication@@QEAAHXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 */

void __fastcall CApplication::ApplySmtcRelatedPolicy(CApplication *this, __int64 a2, bool a3)
{
  int v4; // edi
  CProcess *v5; // rcx
  CProcess **Next; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  v8 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v8 )
  {
    Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v5, &v8);
    v5 = *Next;
    if ( !*((_DWORD *)*Next + 104) )
      v4 += CProcess::GetActiveRenderStreamCount(v5, 2u);
  }
  if ( v7[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v7);
  if ( v4 )
  {
    if ( !(unsigned int)CApplication::HasSmtcSubscription(this) )
    {
      CApplication::AddCategoryOverrideToProcesses((__int64)this, 4, 4, 1);
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u);
      TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 29), this);
    }
  }
}
