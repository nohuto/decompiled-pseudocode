/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C00B32B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+78h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      v12[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( a2 >= W32UserProbeAddress )
        a2 = W32UserProbeAddress;
      v13[0] = *(_OWORD *)a2;
      v13[1] = *(_OWORD *)(a2 + 16);
      v14 = *(_QWORD *)(a2 + 32);
      v15 = *(_DWORD *)(a2 + 40);
      if ( LODWORD(v13[0]) == 44 || *(_WORD *)(gptiCurrent + 552LL) < 0x400u )
        v8 = xxxSetWindowPlacement((struct tagWND *)v4, (__int64)v13, v4, v7);
      else
        UserSetLastError(87LL);
      ThreadUnlock1(v10, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v8;
}
