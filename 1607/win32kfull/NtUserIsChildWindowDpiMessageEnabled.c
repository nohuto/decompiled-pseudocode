/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00F9CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v6 = gptiCurrent;
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = v2;
    v7 = *(_DWORD *)(v2 + 352);
    ++*(_DWORD *)(v5 + 8);
    if ( (v7 & 0xF) == 2 )
    {
      v8 = v5;
      do
      {
        v6 = *(_QWORD *)(v8 + 88);
        if ( v6 )
        {
          v9 = *(_QWORD *)(v8 + 24);
          v10 = 0LL;
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( v11 )
              v10 = *(_QWORD *)(v11 + 16);
          }
          if ( v6 == v10 )
            break;
        }
        v8 = *(_QWORD *)(v8 + 88);
      }
      while ( v6 );
      if ( v5 == v8 )
      {
        v4 = 1;
      }
      else if ( v8 && *(int *)(v8 + 288) < 0 )
      {
        v4 = 1;
      }
    }
    ThreadUnlock1(v6, v5);
  }
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
