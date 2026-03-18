/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C011CC00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 4;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v10 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL);
    }
    else
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      v14[1] = v7;
      ++*(_DWORD *)(v7 + 8);
      v10 = xxxEndDeferWindowPosEx((struct tagSMWP *)v7, a2, v7);
      ThreadUnlock1(v12, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
