/*
 * XREFs of NtUserDragDetect @ 0x1C0218EB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxIsDragging @ 0x1C01239CC (xxxIsDragging.c)
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

  EnterCrit(1LL);
  v3 = ValidateHwnd(a1);
  IsDragging = 0;
  if ( v3 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v10;
    v10[1] = v3;
    ++*(_DWORD *)(v3 + 8);
    IsDragging = xxxIsDragging(v3, a2);
    ThreadUnlock1(v8, v7);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return IsDragging;
}
