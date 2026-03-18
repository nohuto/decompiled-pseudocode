/*
 * XREFs of NtUserUpdateDefaultDesktopThumbnail @ 0x1402C08A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ??$ReadFromUser@UtagRECT@@@UmpDetail@@YA?AUtagRECT@@PEBU1@@Z @ 0x1402512A4 (--$ReadFromUser@UtagRECT@@@UmpDetail@@YA-AUtagRECT@@PEBU1@@Z.c)
 *     DwmAsyncUpdateDefaultDesktopThumbnail @ 0x14034770C (DwmAsyncUpdateDefaultDesktopThumbnail.c)
 */

_BOOL8 __fastcall NtUserUpdateDefaultDesktopThumbnail(__int64 a1, void *a2, void *a3, char a4, int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rsi
  BOOL v11; // ebx
  NTSTATUS updated; // eax
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rax
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF
  __int128 v20; // [rsp+50h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
    {
      v11 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v20 = *UmpDetail::ReadFromUser<tagRECT>(&v20, a2);
  v19 = *UmpDetail::ReadFromUser<tagRECT>(&v19, a3);
  if ( !v10 || IsTopLevelWindow(v10) && (unsigned int)IsWindowDesktopComposed(v10) )
  {
    v13 = PtiCurrent(v9);
    v9 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 62832);
    if ( *((_QWORD *)v13 + 61) == v9
      && (!v10 || (v9 = *(_QWORD *)(W32GetUserSessionState(v9, v16) + 62832), *(_QWORD *)(v10 + 24) == v9)) )
    {
      v17 = (void *)ReferenceDwmApiPort(v9, v16);
      updated = DwmAsyncUpdateDefaultDesktopThumbnail(v17, a4, a5);
    }
    else
    {
      updated = -1073741790;
    }
  }
  else
  {
    updated = -1073741816;
  }
  v11 = updated >= 0;
  if ( updated < 0 )
  {
    v11 = 0;
    UserSetLastStatus(updated, 1);
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
