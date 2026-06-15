/*
 * XREFs of ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180003150
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180002868 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::SendAppClosureNotification(CApplication *this, __int64 a2, bool a3)
{
  __int64 v4; // rcx
  _QWORD *Next; // rax
  __int64 v6; // rbx
  _QWORD *v7; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-38h]
  int v10; // [rsp+50h] [rbp-30h] BYREF
  __int128 v11; // [rsp+54h] [rbp-2Ch]
  __int64 v12; // [rsp+64h] [rbp-1Ch]
  int v13; // [rsp+6Ch] [rbp-14h]
  char v14; // [rsp+70h] [rbp-10h]

  v9 = -2LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  v7 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v7 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v7);
    v6 = *Next;
    if ( *(_DWORD *)(*Next + 436LL) && !*(_DWORD *)(v6 + 416) )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_SD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          29,
          (unsigned int)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
          *((_QWORD *)this + 2),
          *(_DWORD *)(v6 + 168));
      }
      v12 = 0LL;
      v13 = 0;
      v14 = 0;
      v10 = 33;
      v11 = 0x10000uLL;
      *(_QWORD *)((char *)&v11 + 4) = GetCurrentProcessId();
      HIDWORD(v12) = 1;
      GenerateMediaEvent(&v10, *(unsigned int *)(v6 + 168));
    }
  }
  if ( v8[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v8);
}
