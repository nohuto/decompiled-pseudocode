/*
 * XREFs of NtUserDragDetect @ 0x1C02119F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 */

__int64 __fastcall NtUserDragDetect(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int IsDragging; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  IsDragging = 0;
  if ( v3 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    v10[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    IsDragging = xxxIsDragging(v3, a2);
    ThreadUnlock1(v8, v7);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return IsDragging;
}
