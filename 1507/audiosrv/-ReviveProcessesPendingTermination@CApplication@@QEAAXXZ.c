/*
 * XREFs of ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800035CC
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180002700 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001BF14 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@@Z @ 0x1800A38CC (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ReviveProcessesPendingTermination(CApplication *this)
{
  __int64 v2; // rcx
  __int64 *Next; // rax
  __int64 v4; // rdx
  char *v5; // [rsp+38h] [rbp-18h] BYREF
  char v6; // [rsp+40h] [rbp-10h]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+18h] BYREF
  _QWORD *v9; // [rsp+70h] [rbp+20h] BYREF

  v5 = (char *)this + 24;
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v5);
  v8 = 0;
  v7 = 1;
  CApplicationManager::GetApplicationPBMStatus(
    g_ApplicationManager,
    this,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v9,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v8,
    (enum _PLM_EXEMPTION *)&v7);
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v9 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v2, &v9);
    v2 = *Next;
    if ( *(_DWORD *)(*Next + 416) == 1 )
    {
      *(_DWORD *)(v2 + 416) = 0;
      CProcess::RefreshPBMState(v2, v4, v8, v7);
    }
  }
  if ( v6 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v5);
}
