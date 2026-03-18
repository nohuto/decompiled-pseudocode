/*
 * XREFs of NtUserEndPaint @ 0x1C00C8120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, __int128 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v12; // [rsp+50h] [rbp-58h]
  __int128 v13; // [rsp+60h] [rbp-48h]
  __int128 v14; // [rsp+70h] [rbp-38h]
  __int128 v15; // [rsp+80h] [rbp-28h]
  __int64 v16; // [rsp+90h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  if ( v4 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (__int128 *)W32UserProbeAddress;
    v12 = *a2;
    v13 = a2[1];
    v14 = a2[2];
    v15 = a2[3];
    v16 = *((_QWORD *)a2 + 8);
    v7 = xxxEndPaint((struct tagWND *)v4);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
