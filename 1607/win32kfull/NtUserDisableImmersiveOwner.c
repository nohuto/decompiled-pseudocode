/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C0211870
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012D2CC (IsImmersiveBandOrShellManaged.c)
 *     xxxDisableImmersiveOwner @ 0x1C01FB834 (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v2)
      && (unsigned int)IsTopLevelWindow(v7)
      && !(unsigned int)IsWindowBeingDestroyed(v6)
      && (*(_BYTE *)(v6 + 55) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL))
       || *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL)) )
    {
      v5 = xxxDisableImmersiveOwner((struct tagWND *)v6);
    }
    else
    {
      UserSetLastError(5LL);
    }
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
