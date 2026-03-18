/*
 * XREFs of NtUserSetCursorContents @ 0x1C021FE20
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     zzzSetCursorContents @ 0x1C01E9D5C (zzzSetCursorContents.c)
 */

__int64 __fastcall NtUserSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v4 = HMValidateHandle(a1, 3);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v5 = HMValidateHandle(a2, 3);
    if ( v5 )
    {
      v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v12;
      v12[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      v7 = zzzSetCursorContents(v8, v5);
      ThreadUnlock1(v10, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
