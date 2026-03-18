/*
 * XREFs of NtUserDeleteMenu @ 0x1C0126450
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0121D44 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 */

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r10
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
    v9 = 0;
  }
  else
  {
    v6 = ValidateHmenu(a1);
    v9 = 0;
    v10 = v6;
    if ( v6 )
    {
      v11 = *(_DWORD *)(v6 + 40);
      if ( (v11 & 0x40) == 0 && (v11 & 0x200) == 0 )
      {
        v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v15;
        v15[1] = v10;
        ++*(_DWORD *)(v10 + 8);
        v9 = xxxRemoveDeleteMenuHelper((struct tagMENU *)v10, a2, a3, 1);
        ThreadUnlock1(v13, v12);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
