/*
 * XREFs of UserDeleteW32Thread @ 0x1C0050C30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0035760 (Win32FreeToPagedLookasideList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0044C44 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0050160 (UnlockObjectAssignment.c)
 */

void __fastcall UserDeleteW32Thread(void **a1)
{
  void *v1; // rsi
  void *ThreadWin32Thread; // rdi
  void *v4; // rcx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  if ( !*((_DWORD *)a1 + 2) )
  {
    v4 = a1[82];
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( a1[96] )
      Win32FreePool();
    if ( a1[57] )
      Win32FreePool();
    v5 = a1[49];
    if ( v5 )
    {
      --v5[85];
      v6 = a1[49];
      if ( !v6[85] && !v6[84] )
        Win32FreeToPagedLookasideList();
    }
    if ( a1[52] )
      UnlockObjectAssignment(a1 + 52);
    ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
    Win32FreePool();
  }
  if ( !v7 )
    UserSessionSwitchLeaveCrit();
  if ( ThreadWin32Thread )
  {
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    ExFreePoolWithTag(ThreadWin32Thread, 0);
  }
}
