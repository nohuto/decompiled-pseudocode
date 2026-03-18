/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C011D870
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0052DC4 (xxxSetMenuInfo.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v12[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h]

  EnterCrit(1LL);
  if ( a2 >= W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  v12[0] = *(_OWORD *)a2;
  v12[1] = *(_OWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v7 = 0;
  if ( v4 && (*(_DWORD *)(v4 + 40) & 0x40) == 0 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v11;
    v11[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    v7 = xxxSetMenuInfo(v4, (__int64)v12);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
