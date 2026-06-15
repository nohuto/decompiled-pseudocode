/*
 * XREFs of ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x180004B5C
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180004108 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x1800A0120 (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::DisconnectExclusiveModeStreams(CApplication *this)
{
  CProcess *v2; // rcx
  __int64 Next; // rax
  char *v4; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 24;
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v4);
  v6 = *((_QWORD *)this + 8);
  while ( v6 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v2, &v6);
    v2 = *(CProcess **)Next;
    if ( !*(_DWORD *)(*(_QWORD *)Next + 416LL) )
      CProcess::DisconnectExclusiveModeStreams(v2);
  }
  if ( v5 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v4);
}
