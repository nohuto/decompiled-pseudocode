/*
 * XREFs of NtUserIsWindowBroadcastingDpiToChildren @ 0x1C00DCF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsWindowBroadcastingDpiToChildren(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
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
      v7 = *(_QWORD *)(v2 + 88);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v5 + 24);
        v6 = 0LL;
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( v9 )
            v6 = *(_QWORD *)(v9 + 16);
        }
        if ( v7 == v6 && *(_DWORD *)(v5 + 364) == 1 )
          v4 = 1;
      }
    }
    ThreadUnlock1(v6, v5);
  }
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
