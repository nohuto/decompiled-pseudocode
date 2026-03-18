/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0123C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0123DF0 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, int a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  InteractiveControlManager *v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0;
  if ( a3 )
  {
    v9 = ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_9;
  }
  else
  {
    v9 = 0LL;
  }
  v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v16;
  v16[1] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  if ( a2 && (unsigned int)(a2 - 744) > 0x11 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v10 = InteractiveControlManager::Instance();
    LOBYTE(v6) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v10, a1, v11, v12, (struct tagWND *)v9) >= 0;
  }
  ThreadUnlock1(v14, v13);
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
