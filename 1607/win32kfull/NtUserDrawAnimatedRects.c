/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C0211BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+58h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v5 = 0LL;
  }
  v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v9;
  v9[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v2 = xxxDrawAnimatedRects((struct tagWND *)v5);
  ThreadUnlock1(v7, v6);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
