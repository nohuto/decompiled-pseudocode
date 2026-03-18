/*
 * XREFs of _DestroyCursor @ 0x1C008FEA4
 * Callers:
 *     DestroyWindowSmIcon @ 0x1C008E0D8 (DestroyWindowSmIcon.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C008F454 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C008F7D4 (zzzSetSystemImage.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C008FA80 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyClassSmIcon @ 0x1C008FD30 (DestroyClassSmIcon.c)
 *     DestroyUnlockedCursor @ 0x1C008FE10 (DestroyUnlockedCursor.c)
 *     NtUserDestroyCursor @ 0x1C008FE20 (NtUserDestroyCursor.c)
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     _DuplicateCursor @ 0x1C01536CC (_DuplicateCursor.c)
 *     xxxEnsureMonitorCursors @ 0x1C01DD64C (xxxEnsureMonitorCursors.c)
 *     zzzSetCursorContents @ 0x1C01E0DEC (zzzSetCursorContents.c)
 * Callees:
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00900A0 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0090168 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyCursor(struct tagCURSOR *a1, __int64 a2)
{
  int v2; // esi
  int v4; // ebx
  unsigned int v5; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagCURSOR *v11; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct tagCURSOR *v15; // rax
  __int64 v16; // rcx
  struct tagCURSOR *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h]
  BOOL v23; // [rsp+88h] [rbp+20h]

  v21 = a2;
  v2 = 0;
  v4 = 0;
  v23 = *((_QWORD *)a1 + 6) == (_QWORD)a1;
  v5 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v7 = gcachedCaptions[0];
  v20 = CurrentProcessWin32Process;
  v19 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  v9 = 0LL;
  v22 = 0;
  v18 = 0LL;
  do
  {
    if ( *(struct tagCURSOR **)(v9 + v7) == a1 )
    {
      if ( !HMAssignmentUnlock(v7 + 24 * v8) )
        return v5;
      v7 = gcachedCaptions[0];
      LODWORD(v8) = v22;
      v9 = v18;
    }
    v8 = (unsigned int)(v8 + 1);
    v9 += 24LL;
    v22 = v8;
    v18 = v9;
  }
  while ( (unsigned int)v8 < 5 );
  if ( !v21 )
  {
    v13 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
    if ( *(_QWORD *)(v13 + 8) == PsGetProcessWin32Process(gpepCSRSS) && PsGetCurrentProcess(v14) == gpepCSRSS )
      FixupGlobalCursor(a1, v20);
    v4 = 0;
    goto LABEL_10;
  }
  if ( v21 != 1 )
  {
    if ( v21 == 2 )
    {
      v10 = v19;
      goto LABEL_9;
    }
LABEL_10:
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      *((_DWORD *)a1 + 20) |= 0x2000u;
      goto LABEL_12;
    }
    goto LABEL_34;
  }
  v10 = v19;
  if ( v19 )
  {
    if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
      goto LABEL_31;
    if ( v19 != v20 )
    {
      UserSetLastError(1435LL);
LABEL_34:
      v2 = 1;
      v5 = 0;
      goto LABEL_12;
    }
LABEL_9:
    if ( v10 )
      goto LABEL_10;
LABEL_31:
    v2 = 1;
    goto LABEL_12;
  }
  v2 = 1;
  v5 = *((_BYTE *)a1 + 80) & 1;
LABEL_12:
  if ( !v23 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v4 = 1;
  if ( v2 )
  {
    if ( v4 )
    {
      v15 = a1;
      do
      {
        *((_QWORD *)v15 + 6) = a1;
        v15 = (struct tagCURSOR *)*((_QWORD *)v15 + 5);
      }
      while ( v15 );
    }
  }
  else
  {
    if ( v23 || v4 )
    {
      v11 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v11 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        DestroyCursor(v11);
      }
    }
    else
    {
      v16 = *((_QWORD *)a1 + 6);
      if ( v16 )
      {
        do
        {
          v17 = *(struct tagCURSOR **)(v16 + 40);
          if ( v17 == a1 )
            break;
          v16 = *(_QWORD *)(v16 + 40);
        }
        while ( v17 );
        if ( v16 )
          *(_QWORD *)(v16 + 40) = *((_QWORD *)a1 + 5);
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    if ( a1 == (struct tagCURSOR *)gpcurLogCurrent )
      gpcurLogCurrent = 0LL;
    if ( a1 == (struct tagCURSOR *)gpcurPhysCurrent )
      gpcurPhysCurrent = 0LL;
    CleanupCursorObject(a1);
    if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 )
      UnlinkCursor(a1);
    HMFreeObject(a1);
  }
  return v5;
}
