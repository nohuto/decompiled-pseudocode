/*
 * XREFs of _DestroyCursor @ 0x1C00D9340
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C0086174 (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C00D91CC (DestroyClassSmIcon.c)
 *     DestroyUnlockedCursor @ 0x1C00D92B0 (DestroyUnlockedCursor.c)
 *     NtUserDestroyCursor @ 0x1C00D92C0 (NtUserDestroyCursor.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 *     _DuplicateCursor @ 0x1C012366C (_DuplicateCursor.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C0136358 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0136720 (zzzSetSystemImage.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C014FA18 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     xxxEnsureMonitorCursors @ 0x1C01E6A14 (xxxEnsureMonitorCursors.c)
 *     zzzSetCursorContents @ 0x1C01E9D5C (zzzSetCursorContents.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D94BC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D9584 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyCursor(struct tagCURSOR *a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct tagCURSOR *v14; // rax
  __int64 v15; // [rsp+40h] [rbp+8h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v4 = *((_QWORD *)a1 + 3);
  v5 = 0LL;
  v6 = gcachedCaptions[0];
  v7 = 0LL;
  v15 = CurrentProcessWin32Process;
  do
  {
    if ( *(struct tagCURSOR **)(v6 + v7) == a1 )
    {
      if ( !HMAssignmentUnlock(v6 + 24 * v5) )
        return 1LL;
      v6 = gcachedCaptions[0];
    }
    v5 = (unsigned int)(v5 + 1);
    v7 += 24LL;
  }
  while ( (unsigned int)v5 < 5 );
  if ( !a2 )
  {
    v10 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
    if ( *(_QWORD *)(v10 + 8) == PsGetProcessWin32Process(gpepCSRSS) && PsGetCurrentProcess(v12, v11) == gpepCSRSS )
      FixupGlobalCursor(a1, v15);
    goto LABEL_10;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      goto LABEL_9;
LABEL_10:
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( (*((_DWORD *)a1 + 20) & 0x1000) != 0 )
      {
        v13 = *((_QWORD *)a1 + 6);
        if ( v13 )
        {
          do
          {
            v14 = *(struct tagCURSOR **)(v13 + 40);
            if ( v14 == a1 )
              break;
            v13 = *(_QWORD *)(v13 + 40);
          }
          while ( v14 );
          if ( v13 )
            *(_QWORD *)(v13 + 40) = *((_QWORD *)a1 + 5);
        }
      }
      else
      {
        v8 = *((_QWORD *)a1 + 5);
        if ( v8 )
        {
          *(_DWORD *)(v8 + 80) &= ~0x1000u;
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = *((_QWORD *)a1 + 5);
          DestroyCursor(*((struct tagCURSOR **)a1 + 5));
          *((_QWORD *)a1 + 5) = 0LL;
        }
      }
      if ( a1 == (struct tagCURSOR *)gpcurLogCurrent )
        gpcurLogCurrent = 0LL;
      if ( a1 == (struct tagCURSOR *)gpcurPhysCurrent )
        gpcurPhysCurrent = 0LL;
      CleanupCursorObject(a1);
      if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 )
        UnlinkCursor(a1);
      HMFreeObject(a1);
      return 1LL;
    }
    return 0LL;
  }
  if ( v4 )
  {
    if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
      return 1LL;
    if ( v4 != v15 )
    {
      UserSetLastError(1435);
      return 0LL;
    }
LABEL_9:
    if ( v4 )
      goto LABEL_10;
    return 1LL;
  }
  return *((_BYTE *)a1 + 80) & 1;
}
