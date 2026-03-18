/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C00F79F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, __int128 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int128 v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+78h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v11;
      v11[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (__int128 *)W32UserProbeAddress;
      v12 = *a2;
      v13 = a2[1];
      v14 = *((_QWORD *)a2 + 4);
      v15 = *((_DWORD *)a2 + 10);
      if ( (_DWORD)v12 == 44 || *(_WORD *)(gptiCurrent + 552LL) < 0x400u )
        v7 = xxxSetWindowPlacement((struct tagWND *)v4);
      else
        UserSetLastError(87);
      ThreadUnlock1(v9, v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
