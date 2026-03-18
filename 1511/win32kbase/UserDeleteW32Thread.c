/*
 * XREFs of UserDeleteW32Thread @ 0x1C0044720
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0022594 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0022AB0 (Win32FreeToPagedLookasideList.c)
 *     UnlockObjectAssignment @ 0x1C0042150 (UnlockObjectAssignment.c)
 *     ?ResetW32ThreadAndLeaveCrit@ReEnterLeaveCrit@@QEAAXPEAU_ETHREAD@@PEAU_W32THREADNONPAGED@@@Z @ 0x1C00A93DC (-ResetW32ThreadAndLeaveCrit@ReEnterLeaveCrit@@QEAAXPEAU_ETHREAD@@PEAU_W32THREADNONPAGED@@@Z.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  struct _ETHREAD *v1; // rsi
  struct _W32THREADNONPAGED *ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(struct _ETHREAD **)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v7 = *(void **)(a1 + 648);
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( *(_QWORD *)(a1 + 760) )
      Win32FreePool();
    if ( *(_QWORD *)(a1 + 448) )
      Win32FreePool();
    v8 = *(_QWORD *)(a1 + 384);
    if ( v8 )
    {
      --*(_DWORD *)(v8 + 340);
      v4 = *(_QWORD *)(a1 + 384);
      if ( !*(_DWORD *)(v4 + 340) && !*(_DWORD *)(v4 + 336) )
        Win32FreeToPagedLookasideList();
    }
    if ( *(_QWORD *)(a1 + 408) )
      UnlockObjectAssignment((void **)(a1 + 408));
    ThreadWin32Thread = (struct _W32THREADNONPAGED *)PsGetThreadWin32Thread(v1, v4, v6);
    Win32FreePool();
    if ( ThreadWin32Thread )
      ReEnterLeaveCrit::ResetW32ThreadAndLeaveCrit((ReEnterLeaveCrit *)&v9, v1, ThreadWin32Thread);
  }
  if ( !v9 )
    UserSessionSwitchLeaveCrit(v5, v4);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
