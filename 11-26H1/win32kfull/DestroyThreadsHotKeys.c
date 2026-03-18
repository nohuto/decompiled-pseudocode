/*
 * XREFs of DestroyThreadsHotKeys @ 0x14018D150
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14018D620 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14018D720 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x140294E10 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 */

char __fastcall DestroyThreadsHotKeys(__int64 a1)
{
  struct tagTHREADINFO *UserSessionState; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rsi
  unsigned __int64 v5; // r14
  struct tagHOTKEY **v6; // rdi
  struct tagHOTKEY *v7; // rcx
  struct tagHOTKEY **v8; // rbx
  struct tagHOTKEY *v9; // rcx
  struct tagTHREADINFO **v10; // r15
  struct tagTHREADINFO **v11; // rbp
  struct tagTHREADINFO **v12; // rdx

  UserSessionState = PtiCurrent(a1);
  v4 = UserSessionState;
  if ( *((_DWORD *)UserSessionState + 236) )
  {
    v5 = 0LL;
    UserSessionState = (struct tagTHREADINFO *)W32GetUserSessionState(v3, v2);
    v6 = (struct tagHOTKEY **)((char *)UserSessionState + 12944);
    do
    {
      v7 = *v6;
      v8 = v6;
      while ( v7 )
      {
        if ( *(struct tagTHREADINFO **)v7 == v4 )
        {
          LOBYTE(UserSessionState) = HKRemoveHotkeyOrMakePlaceholder(v8);
          if ( !(_BYTE)UserSessionState )
            v8 = (struct tagHOTKEY **)((char *)*v8 + 48);
        }
        else
        {
          v10 = (struct tagTHREADINFO **)((char *)v7 + 56);
          UserSessionState = (struct tagTHREADINFO *)*((_QWORD *)v7 + 7);
          if ( UserSessionState != (struct tagHOTKEY *)((char *)v7 + 56) )
          {
            do
            {
              v11 = *(struct tagTHREADINFO ***)UserSessionState;
              if ( *((struct tagTHREADINFO **)UserSessionState - 4) == v4 )
              {
                if ( v11[1] != UserSessionState
                  || (v12 = (struct tagTHREADINFO **)*((_QWORD *)UserSessionState + 1), *v12 != UserSessionState) )
                {
                  __fastfail(3u);
                }
                *v12 = (struct tagTHREADINFO *)v11;
                v11[1] = (struct tagTHREADINFO *)v12;
                FreeHotKey<CHILDHOTKEY *>();
              }
              UserSessionState = (struct tagTHREADINFO *)v11;
            }
            while ( v11 != v10 );
          }
          v9 = *v8;
          if ( _bittest16((const signed __int16 *)*v8 + 17, 8u)
            && (UserSessionState = (struct tagHOTKEY *)((char *)v9 + 56),
                *(struct tagTHREADINFO **)UserSessionState == UserSessionState) )
          {
            *v8 = (struct tagHOTKEY *)*((_QWORD *)v9 + 6);
            LOBYTE(UserSessionState) = FreeHotKey<tagHOTKEY *>();
          }
          else
          {
            v8 = (struct tagHOTKEY **)((char *)v9 + 48);
          }
        }
        v7 = *v8;
      }
      ++v5;
      ++v6;
    }
    while ( v5 < 0x80 );
    if ( *((_DWORD *)v4 + 236) )
      LOBYTE(UserSessionState) = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 847LL);
  }
  return (char)UserSessionState;
}
