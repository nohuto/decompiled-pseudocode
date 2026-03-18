/*
 * XREFs of NtUserSetCursorContents @ 0x1C02198B0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     zzzSetCursorContents @ 0x1C01E0DEC (zzzSetCursorContents.c)
 */

__int64 __fastcall NtUserSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v12 = 0;
  v13 = v7;
  if ( v7 )
  {
    LOBYTE(v8) = 3;
    v8 = HMValidateHandle(a2, v8, v10, v11);
    if ( v8 )
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v13;
      ++*(_DWORD *)(v13 + 8);
      v12 = zzzSetCursorContents(v13, v8);
      ThreadUnlock1(v15, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v12;
}
