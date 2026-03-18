/*
 * XREFs of DestroyWindowsHotKeys @ 0x14018D328
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x14018D44C (-MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14018D620 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14018D720 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x140294E10 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 */

char __fastcall DestroyWindowsHotKeys(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  unsigned __int64 v4; // rbp
  tagHOTKEY **v5; // rdi
  tagHOTKEY *v6; // rcx
  struct tagHOTKEY **v7; // rbx
  struct tagHOTKEY *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 v12; // rsi
  __int64 **v13; // rax

  UserSessionState = *((_QWORD *)a1 + 2);
  if ( *(_DWORD *)(UserSessionState + 944) )
  {
    v4 = 0LL;
    UserSessionState = W32GetUserSessionState(a1, a2);
    v5 = (tagHOTKEY **)(UserSessionState + 12944);
    do
    {
      v6 = *v5;
      v7 = v5;
      while ( v6 )
      {
        LOBYTE(UserSessionState) = tagHOTKEY::MatchHandle(v6, a1);
        if ( (_BYTE)UserSessionState )
        {
          LOBYTE(UserSessionState) = HKRemoveHotkeyOrMakePlaceholder(v7);
          if ( !(_BYTE)UserSessionState )
            v7 = (struct tagHOTKEY **)((char *)*v7 + 48);
        }
        else
        {
          v10 = v9 + 56;
          v11 = *(__int64 **)(v9 + 56);
          if ( v11 != (__int64 *)(v9 + 56) )
          {
            do
            {
              UserSessionState = *(_QWORD *)a1;
              v12 = *v11;
              if ( *(v11 - 3) == *(_QWORD *)a1 )
              {
                if ( *(__int64 **)(v12 + 8) != v11 || (v13 = (__int64 **)v11[1], *v13 != v11) )
                  __fastfail(3u);
                *v13 = (__int64 *)v12;
                *(_QWORD *)(v12 + 8) = v13;
                LOBYTE(UserSessionState) = FreeHotKey<CHILDHOTKEY *>();
              }
              v11 = (__int64 *)v12;
            }
            while ( v12 != v10 );
          }
          v8 = *v7;
          if ( _bittest16((const signed __int16 *)*v7 + 17, 8u)
            && (UserSessionState = (__int64)v8 + 56, *(_QWORD *)UserSessionState == UserSessionState) )
          {
            *v7 = (struct tagHOTKEY *)*((_QWORD *)v8 + 6);
            LOBYTE(UserSessionState) = FreeHotKey<tagHOTKEY *>();
          }
          else
          {
            v7 = (struct tagHOTKEY **)((char *)v8 + 48);
          }
        }
        v6 = *v7;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 0x80 );
  }
  return UserSessionState;
}
