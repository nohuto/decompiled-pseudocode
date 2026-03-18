/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C00FA1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v6 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v12[1] = v2;
    v7 = *(_DWORD *)(v2 + 352);
    ++*(_DWORD *)(v5 + 8);
    if ( (v7 & 0xF) == 2 )
    {
      v8 = *(_QWORD *)(v5 + 88);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v5 + 24);
        v6 = 0LL;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( v10 )
            v6 = *(_QWORD *)(v10 + 16);
        }
        if ( v8 == v6 && (*(_DWORD *)(v5 + 288) & 0x40000000) != 0 )
          v4 = 1;
      }
    }
    ThreadUnlock1(v6, v5);
  }
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
