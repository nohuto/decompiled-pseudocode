/*
 * XREFs of NtUserSetSystemMenu @ 0x1C021A6C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetSystemMenu @ 0x1C0234264 (xxxSetSystemMenu.c)
 */

__int64 __fastcall NtUserSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    v9 = ValidateHmenu(a2);
    if ( v9 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v15;
      v15[1] = v9;
      ++*(_DWORD *)(v9 + 8);
      v7 = xxxSetSystemMenu(v8);
      ThreadUnlock1(v12, v11);
    }
    ThreadUnlock1(v10, v9);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
