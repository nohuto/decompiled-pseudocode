/*
 * XREFs of FreeWindowStation @ 0x1C00F92C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxCloseClipboard @ 0x1C00F8DF0 (xxxCloseClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00F94D0 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C00F94F0 (xxxEmptyClipboard.c)
 *     TraceLoggingDesktopAllocFailureEventForSession @ 0x1C021F5D8 (TraceLoggingDesktopAllocFailureEventForSession.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _RTL_ATOM_TABLE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  v4 = *a1;
  TraceLoggingDesktopAllocFailureEventForSession(
    0,
    *(_QWORD *)(v4 + 200),
    *(_DWORD *)(v4 + 184),
    a4,
    ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
  - *(_BYTE *)(v4 + 192),
    *(_DWORD *)v4);
  v7 = *(_QWORD *)(v4 + 176);
  *(_DWORD *)(v4 + 32) |= 0x10u;
  if ( v7 )
  {
    Win32FreePool(v7, v5, v6);
    *(_QWORD *)(v4 + 176) = 0LL;
    *(_DWORD *)(v4 + 168) = 0;
  }
  if ( (*(_DWORD *)(v4 + 32) & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent(gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v27);
  v11 = *(struct _RTL_ATOM_TABLE **)(v4 + 136);
  if ( v11 )
    RtlDestroyAtomTable(v11);
  *(_QWORD *)(v4 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
  HMAssignmentUnlock(v4 + 80);
  HMAssignmentUnlock(v4 + 72);
  HMAssignmentUnlock(v4 + 64);
  xxxEmptyClipboard((PVOID)v4);
  if ( (*(_DWORD *)(v4 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v4, v12, v13, v14);
  CloseClipboardToken((struct tagWINDOWSTATION *)v4);
  while ( *(_QWORD *)(v4 + 120) )
  {
    v28 = *(_QWORD *)(v4 + 120);
    *(_QWORD *)(v4 + 120) = *(_QWORD *)(v28 + 280);
    *(_QWORD *)(v28 + 280) = 0LL;
    *(_DWORD *)(v28 + 288) &= ~1u;
    HMAssignmentUnlock(&v28);
  }
  if ( (*(_DWORD *)(v4 + 32) & 4) == 0 )
  {
    v17 = (_QWORD *)(v4 + 40);
    v18 = *(_QWORD *)(v4 + 40);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 24);
      if ( v18 != v19 )
      {
        do
        {
          v20 = *v17;
          v21 = *(_QWORD *)(*v17 + 16LL);
          HMMarkObjectDestroy(*v17);
          *(_DWORD *)(v20 + 32) |= 0x20000000u;
          HMAssignmentLock(v4 + 40, v21);
        }
        while ( *v17 != v19 );
      }
      v22 = *v17;
      HMMarkObjectDestroy(*v17);
      *(_DWORD *)(v22 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v4 + 40);
      gdwHydraHint |= 0x10000u;
    }
  }
  v23 = *(_QWORD *)(v4 + 160);
  if ( v23 )
  {
    Win32FreePool(v23, v15, v16);
    *(_QWORD *)(v4 + 160) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v27 )
    UserSessionSwitchLeaveCrit(v25, v24);
  return 0LL;
}
