/*
 * XREFs of GreInternalHidePointer @ 0x1C010A9B0
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C009409C (SetPointerMetaVisibility.c)
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01D335C (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01D374C (-xxxSwitchCursors@@YAXH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C021B0F0 (NtUserShowSystemCursor.c)
 * Callees:
 *     GreSetPointer @ 0x1C005DA90 (GreSetPointer.c)
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreHidePointer@@YAXPEAUHDEV__@@@Z @ 0x1C010ABF0 (-GreHidePointer@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreInternalHidePointer(HDEV HDEV, int a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  HDEV v16; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 == 2 )
    return 1LL;
  v6 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( a3 == 1 )
    HDEV = (HDEV)UserGetHDEV();
  if ( HDEV )
  {
    v16 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
      GreAcquireSemaphore(ghsemGreLock);
    v15[0] = *((_QWORD *)v16 + 9);
    GreAcquireSemaphore(v15[0]);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7);
    v10 = CurrentProcessWin32Process;
    if ( a2 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000000) == 0 )
        {
          v14 = gulCachedPointerRefs;
          if ( gulCachedPointerRefs != -1 )
          {
            if ( !gulCachedPointerRefs )
            {
              GreHidePointer(HDEV);
              v14 = gulCachedPointerRefs;
            }
            *(_DWORD *)(v10 + 12) |= 0x40000000u;
            gulCachedPointerRefs = v14 + 1;
          }
        }
      }
    }
    else if ( CurrentProcessWin32Process )
    {
      v11 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v11 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v10 + 12) = v11 & 0xBFFFFFFF;
        v13 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v13 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              GreSetPointer(
                gCachedSetPointerState,
                (struct _CURSINFO *)&xmmword_1C0328468,
                dword_1C03284A0,
                dword_1C03284A4,
                dword_1C03284A8);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(
                gCachedMovePointerState,
                (unsigned int)dword_1C0331C90,
                (unsigned int)dword_1C0331C94,
                (unsigned int)dword_1C0331C98);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)v15);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
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
