/*
 * XREFs of FreeWindowStation @ 0x1C0131DB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxCloseClipboard @ 0x1C00D61F0 (xxxCloseClipboard.c)
 *     xxxEmptyClipboard @ 0x1C0128CAC (xxxEmptyClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0128D98 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  struct _RTL_ATOM_TABLE *v2; // rcx
  _QWORD *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  *(_DWORD *)(v1 + 32) |= 0x10u;
  if ( (*(_DWORD *)(v1 + 32) & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent(gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  v2 = *(struct _RTL_ATOM_TABLE **)(v1 + 136);
  if ( v2 )
    RtlDestroyAtomTable(v2);
  *(_QWORD *)(v1 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  HMAssignmentUnlock(v1 + 80);
  HMAssignmentUnlock(v1 + 72);
  HMAssignmentUnlock(v1 + 64);
  xxxEmptyClipboard((struct tagWINDOWSTATION *)v1);
  if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 120) )
  {
    v14 = *(_QWORD *)(v1 + 120);
    *(_QWORD *)(v1 + 120) = *(_QWORD *)(v14 + 280);
    *(_QWORD *)(v14 + 280) = 0LL;
    *(_DWORD *)(v14 + 288) &= ~1u;
    HMAssignmentUnlock(&v14);
  }
  if ( (*(_DWORD *)(v1 + 32) & 4) == 0 )
  {
    v3 = (_QWORD *)(v1 + 40);
    v4 = *(_QWORD *)(v1 + 40);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 24);
      if ( v4 != v5 )
      {
        do
        {
          v11 = *v3;
          v12 = *(_QWORD *)(*v3 + 16LL);
          HMMarkObjectDestroy(*v3);
          *(_DWORD *)(v11 + 32) |= 0x20000000u;
          HMAssignmentLock(v1 + 40, v12);
        }
        while ( *v3 != v5 );
      }
      v6 = *v3;
      HMMarkObjectDestroy(*v3);
      *(_DWORD *)(v6 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 40);
      gdwHydraHint |= 0x10000u;
    }
  }
  v7 = *(_QWORD *)(v1 + 160);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(v1 + 160) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v13 )
    UserSessionSwitchLeaveCrit(v9, v8);
  return 0LL;
}
