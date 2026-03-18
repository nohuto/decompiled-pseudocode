/*
 * XREFs of UserDeleteW32Thread @ 0x1C0015F20
 * Callers:
 *     <none>
 * Callees:
 *     UnlockObjectAssignment @ 0x1C00155E0 (UnlockObjectAssignment.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00160F8 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001CD88 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0036730 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall UserDeleteW32Thread(void **a1)
{
  void *v1; // rsi
  void *ThreadWin32Thread; // rdi
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  if ( !*((_DWORD *)a1 + 2) )
  {
    v5 = a1[81];
    if ( v5 )
      ObfDereferenceObject(v5);
    v6 = a1[96];
    if ( v6 )
      Win32FreePool(v6);
    v7 = a1[56];
    if ( v7 )
      Win32FreePool(v7);
    v8 = a1[48];
    if ( v8 )
    {
      --v8[87];
      v9 = a1[48];
      if ( !v9[87] && !v9[86] )
        Win32FreeToPagedLookasideList(QLookaside, v9);
    }
    if ( a1[51] )
      UnlockObjectAssignment(a1 + 51);
    ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
    Win32FreePool(a1);
    if ( ThreadWin32Thread )
    {
      EtwTraceReleaseUserCrit();
      PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    }
  }
  if ( !v10 )
    UserSessionSwitchLeaveCrit(v4);
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
