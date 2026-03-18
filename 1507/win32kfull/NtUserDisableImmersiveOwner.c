/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C0218D30
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00FFE6C (IsImmersiveBandOrShellManaged.c)
 *     xxxDisableImmersiveOwner @ 0x1C0204174 (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v11;
    v11[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v2)
      && (unsigned int)IsTopLevelWindow(v7)
      && !(unsigned int)IsWindowBeingDestroyed(v6)
      && (*(_BYTE *)(v6 + 55) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 384LL))
       || *(_QWORD *)(gptiCurrent + 384LL) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL)) )
    {
      v5 = xxxDisableImmersiveOwner((struct tagWND *)v6);
    }
    else
    {
      UserSetLastError(5);
    }
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
