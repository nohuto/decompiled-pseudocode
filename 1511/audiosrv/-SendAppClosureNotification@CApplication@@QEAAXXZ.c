/*
 * XREFs of ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180004AD0
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180004108 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::SendAppClosureNotification(CApplication *this)
{
  __int64 v2; // rcx
  __int64 Next; // rax
  __int64 v4; // rbx
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  char *v6; // [rsp+38h] [rbp-48h] BYREF
  char v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+50h] [rbp-30h] BYREF
  __int128 v10; // [rsp+54h] [rbp-2Ch]
  __int64 v11; // [rsp+64h] [rbp-1Ch]
  int v12; // [rsp+6Ch] [rbp-14h]
  char v13; // [rsp+70h] [rbp-10h]

  v8 = -2LL;
  v6 = (char *)this + 24;
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v6);
  v5 = *((_QWORD *)this + 8);
  while ( v5 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v2, &v5);
    v4 = *(_QWORD *)Next;
    if ( *(_DWORD *)(*(_QWORD *)Next + 436LL) && !*(_DWORD *)(v4 + 416) )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          29,
          (unsigned int)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
          *((_QWORD *)this + 2),
          *(_DWORD *)(v4 + 168));
      }
      v11 = 0LL;
      v12 = 0;
      v13 = 0;
      v9 = 33;
      v10 = 0x10000uLL;
      *(_QWORD *)((char *)&v10 + 4) = GetCurrentProcessId();
      HIDWORD(v11) = 1;
      GenerateMediaEvent(&v9, *(unsigned int *)(v4 + 168));
    }
  }
  if ( v7 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v6);
}
