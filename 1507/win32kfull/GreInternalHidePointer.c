/*
 * XREFs of GreInternalHidePointer @ 0x1C00E5A10
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C003A54C (SetPointerMetaVisibility.c)
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB320 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01DB748 (-xxxSwitchCursors@@YAXH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C0221120 (NtUserShowSystemCursor.c)
 * Callees:
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     GreSetPointer @ 0x1C00913EC (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreHidePointer@@YAXPEAUHDEV__@@@Z @ 0x1C015B6E8 (-GreHidePointer@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreInternalHidePointer(HDEV HDEV, int a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  HDEV v15; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 == 2 )
    return 1LL;
  v6 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( a3 == 1 )
    HDEV = (HDEV)UserGetHDEV();
  if ( HDEV )
  {
    v15 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
      GreAcquireSemaphore(ghsemGreLock);
    v14[0] = *((_QWORD *)v15 + 9);
    GreAcquireSemaphore(v14[0]);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v9 = CurrentProcessWin32Process;
    if ( a2 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000000) == 0 )
        {
          v13 = gulCachedPointerRefs;
          if ( gulCachedPointerRefs != -1 )
          {
            if ( !gulCachedPointerRefs )
            {
              GreHidePointer(HDEV);
              v13 = gulCachedPointerRefs;
            }
            *(_DWORD *)(v9 + 12) |= 0x40000000u;
            gulCachedPointerRefs = v13 + 1;
          }
        }
      }
    }
    else if ( CurrentProcessWin32Process )
    {
      v10 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v10 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v9 + 12) = v10 & 0xBFFFFFFF;
        v12 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v12 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              GreSetPointer(
                gCachedSetPointerState,
                (struct _CURSINFO *)&xmmword_1C0322858,
                dword_1C0322890,
                dword_1C0322894,
                dword_1C0322898);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(gCachedMovePointerState, dword_1C0328B50, dword_1C0328B54, dword_1C0328B58);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)v14);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
  }
  else
  {
    v6 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v6;
}
