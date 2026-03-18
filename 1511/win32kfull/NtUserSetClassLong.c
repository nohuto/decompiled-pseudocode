/*
 * XREFs of NtUserSetClassLong @ 0x1C021F940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetClassLong @ 0x1C01E88A4 (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13);
    else
      v11 = xxxSetClassLong(v8, a2, a3, a4);
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
