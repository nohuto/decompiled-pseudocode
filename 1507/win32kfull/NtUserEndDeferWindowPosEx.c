/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C00F1D60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v4 = HMValidateHandle(a1, 4);
  v7 = 0;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
    {
      UserSetLastError(1405);
    }
    else
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v11;
      v11[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      v7 = xxxEndDeferWindowPosEx((struct tagSMWP *)v4, a2);
      ThreadUnlock1(v9, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
