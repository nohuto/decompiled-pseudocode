/*
 * XREFs of ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x1800031D4
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180002868 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x1800A2EC0 (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::DisconnectExclusiveModeStreams(CApplication *this, __int64 a2, bool a3)
{
  CProcess *v4; // rcx
  CProcess **Next; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  v7 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v7 )
  {
    Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v4, &v7);
    v4 = *Next;
    if ( !*((_DWORD *)*Next + 104) )
      CProcess::DisconnectExclusiveModeStreams(v4);
  }
  if ( v6[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v6);
}
