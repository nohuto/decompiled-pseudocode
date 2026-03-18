/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00DC340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v6 = gptiCurrent;
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( *(_DWORD *)(v2 + 344) == 2 )
    {
      do
      {
        v6 = *(_QWORD *)(v2 + 88);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v2 + 24);
          v8 = 0LL;
          if ( v7 )
          {
            v9 = *(_QWORD *)(v7 + 8);
            if ( v9 )
              v8 = *(_QWORD *)(v9 + 16);
          }
          if ( v6 == v8 )
            break;
        }
        v2 = *(_QWORD *)(v2 + 88);
      }
      while ( v6 );
      if ( v5 == v2 )
      {
        v4 = 1;
      }
      else if ( !v2 || *(_DWORD *)(v2 + 364) == 1 )
      {
        do
        {
          if ( *(_DWORD *)(v5 + 364) )
            break;
          v5 = *(_QWORD *)(v5 + 88);
        }
        while ( v5 );
        if ( v5 && *(_DWORD *)(v5 + 364) == 1 )
          v4 = 1;
      }
    }
    ThreadUnlock1(v6, v5);
  }
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
