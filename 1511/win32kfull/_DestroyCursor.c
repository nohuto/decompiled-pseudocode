/*
 * XREFs of _DestroyCursor @ 0x1C0123CD0
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     DestroyWindowSmIcon @ 0x1C00F9404 (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C011E1FC (DestroyClassSmIcon.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0123934 (zzzSetSystemImage.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0123BE0 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C0123C40 (DestroyUnlockedCursor.c)
 *     NtUserDestroyCursor @ 0x1C0123C50 (NtUserDestroyCursor.c)
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 *     _DuplicateCursor @ 0x1C014C640 (_DuplicateCursor.c)
 *     xxxEnsureMonitorCursors @ 0x1C01E6EA4 (xxxEnsureMonitorCursors.c)
 *     _SetCursorContents @ 0x1C01EA56C (_SetCursorContents.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0123F20 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0123FE4 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyCursor(__int64 a1, unsigned int a2)
{
  int v2; // esi
  int v4; // ebx
  unsigned int v5; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+80h] [rbp+18h]
  BOOL v27; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v4 = 0;
  v27 = *(_QWORD *)(a1 + 48) == a1;
  v5 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = gcachedCaptions[0];
  v24 = CurrentProcessWin32Process;
  v23 = *(_QWORD *)(a1 + 24);
  v8 = 0LL;
  v9 = 0LL;
  v26 = 0;
  v22 = 0LL;
  do
  {
    if ( *(_QWORD *)(v9 + v7) == a1 )
    {
      if ( !HMAssignmentUnlock(v7 + 24 * v8) )
        return v5;
      v7 = gcachedCaptions[0];
      LODWORD(v8) = v26;
      v9 = v22;
    }
    v8 = (unsigned int)(v8 + 1);
    v9 += 24LL;
    v26 = v8;
    v22 = v9;
  }
  while ( (unsigned int)v8 < 5 );
  v10 = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v11 = v23;
      if ( !v23 )
      {
        v2 = 1;
        v5 = *(_BYTE *)(a1 + 80) & 1;
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x84) != 0 )
        goto LABEL_15;
      if ( v23 != v24 )
      {
        UserSetLastError(1435);
        goto LABEL_18;
      }
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_23;
      v11 = v23;
    }
    if ( !v11 )
    {
LABEL_15:
      v2 = 1;
      goto LABEL_26;
    }
  }
  else
  {
    v12 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
    if ( *(_QWORD *)(v12 + 8) == PsGetProcessWin32Process(gpepCSRSS)
      && PsGetCurrentProcess(v14, v13, v15, v16) == gpepCSRSS )
    {
      FixupGlobalCursor(a1, v24);
    }
    v4 = 0;
  }
LABEL_23:
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    *(_DWORD *)(a1 + 80) |= 0x2000u;
    goto LABEL_25;
  }
LABEL_18:
  v2 = 1;
  v5 = 0;
LABEL_25:
  v10 = a2;
LABEL_26:
  if ( !v27 && (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 80LL) & 0x2000) != 0 )
    v4 = 1;
  if ( v2 )
  {
    if ( v4 )
    {
      v17 = a1;
      do
      {
        *(_QWORD *)(v17 + 48) = a1;
        v17 = *(_QWORD *)(v17 + 40);
      }
      while ( v17 );
    }
  }
  else
  {
    if ( v27 || v4 )
    {
      v20 = *(_QWORD *)(a1 + 40);
      if ( v20 )
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        DestroyCursor(v20, v10);
      }
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 48);
      if ( v18 )
      {
        do
        {
          v19 = *(_QWORD *)(v18 + 40);
          if ( v19 == a1 )
            break;
          v18 = *(_QWORD *)(v18 + 40);
        }
        while ( v19 );
        if ( v18 )
          *(_QWORD *)(v18 + 40) = *(_QWORD *)(a1 + 40);
      }
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_QWORD *)(a1 + 48) = a1;
    }
    if ( a1 == gpcurLogCurrent )
      gpcurLogCurrent = 0LL;
    if ( a1 == gpcurPhysCurrent )
      gpcurPhysCurrent = 0LL;
    CleanupCursorObject((struct tagCURSOR *)a1);
    if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
      UnlinkCursor((struct tagCURSOR *)a1);
    HMFreeObject(a1);
  }
  return v5;
}
