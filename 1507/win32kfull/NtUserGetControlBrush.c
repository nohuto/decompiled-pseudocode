/*
 * XREFs of NtUserGetControlBrush @ 0x1C00F3420
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlBrush @ 0x1C00F34C4 (xxxGetControlBrush.c)
 */

__int64 __fastcall NtUserGetControlBrush(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ControlBrush; // rbx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  ControlBrush = 0LL;
  if ( v6 )
  {
    v10 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v12;
    v12[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( a2 && a3 - 306 <= 6 )
      ControlBrush = xxxGetControlBrush(v6, a2, a3);
    ThreadUnlock1(v10, v7);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return ControlBrush;
}
