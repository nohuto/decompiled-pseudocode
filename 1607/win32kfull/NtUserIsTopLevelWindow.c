/*
 * XREFs of NtUserIsTopLevelWindow @ 0x1C00FD190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 88);
    if ( v4 )
    {
      v6 = *(_QWORD *)(v2 + 24);
      v3 = 0LL;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
          v3 = *(_QWORD *)(v7 + 16);
      }
      if ( v4 == v3 )
        v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
