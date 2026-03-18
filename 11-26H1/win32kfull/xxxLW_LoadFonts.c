/*
 * XREFs of xxxLW_LoadFonts @ 0x1400CC240
 * Callers:
 *     UserOnGreTextReady @ 0x1400CBFE0 (UserOnGreTextReady.c)
 *     NtUserLW_LoadFonts @ 0x1400CC200 (NtUserLW_LoadFonts.c)
 * Callees:
 *     xxxAddFontResourceW @ 0x140007100 (xxxAddFontResourceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1400CC45C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ClientLoadLocalT1Fonts @ 0x1401B620C (ClientLoadLocalT1Fonts.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401B68F4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x14025B96C (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     CloseFNTCache @ 0x14031BB10 (CloseFNTCache.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1, __int64 a2)
{
  int v2; // edi
  char v3; // bl
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const unsigned __int16 *v14; // r8
  const unsigned __int16 *v15; // r9
  const unsigned __int16 *v16; // r8
  const unsigned __int16 *v17; // r9
  const unsigned __int16 *v18; // r8
  const unsigned __int16 *v19; // r9
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int Count; // eax
  char v29; // [rsp+48h] [rbp+10h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1;
  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
  {
    v3 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v5);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v7, v6, v8) < 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( v3 )
      EnterMitRitHazardCrit();
    return 0LL;
  }
  else
  {
    EnterCrit(1LL, 0LL);
    if ( v3 )
      EnterMitRitHazardCrit();
    if ( v2 )
    {
      Interval.QuadPart = 0LL;
      v11 = 0;
      while ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 66072) )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v13, v12) + 68604) && v11 >= 0x960 )
          goto LABEL_10;
        Count = AtomicExecutionCheck::GetCount();
        if ( Count )
          KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v29, 1);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v29);
        ++v11;
      }
      xxxbEnumerateRegistryFonts(0x401u, 0x38u, v14, v15);
      xxxbEnumerateRegistryFonts(2u, 0x38u, v16, v17);
      xxxbEnumerateRegistryFonts(2u, 6u, v18, v19);
LABEL_10:
      *(_DWORD *)(W32GetUserGdiSessionState(v20) + 24) = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf", 1u, 0LL);
      if ( (unsigned int)xxxLoadPermanentFonts()
        && *(_DWORD *)(W32GetUserSessionState(v23, v22) + 66072)
        && !*(_DWORD *)(W32GetUserSessionState(v25, v24) + 66076) )
      {
        ClientLoadLocalT1Fonts();
        *(_DWORD *)(W32GetUserSessionState(v27, v26) + 66076) = 1;
        CloseFNTCache();
      }
    }
    return 1LL;
  }
}
