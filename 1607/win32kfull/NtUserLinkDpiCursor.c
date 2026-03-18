/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C0216DC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     GetCursorForDim @ 0x1C008F7BC (GetCursorForDim.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8

  EnterCrit(0LL, 1LL);
  LOBYTE(v6) = 3;
  v9 = HMValidateHandle(a1, v6, v7, v8);
  v14 = 0;
  v15 = v9;
  if ( v9 )
  {
    LOBYTE(v10) = 3;
    v16 = HMValidateHandle(a2, v10, v12, v13);
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v15 + 80) & 0x1800) == 0
        && *(_QWORD *)(v16 + 48) == v16
        && (a3 == 32 || a3 == 48 || a3 == 64 || a3 == 96 || a3 == 128) )
      {
        if ( !GetCursorForDim(v15, a3) )
        {
          *(_QWORD *)(v17 + 48) = v15;
          v14 = 1;
          *(_QWORD *)(v17 + 40) = *(_QWORD *)(v15 + 40);
          *(_QWORD *)(v15 + 40) = v17;
          *(_DWORD *)(v17 + 76) = a3;
        }
      }
      else
      {
        UserSetLastError(87LL);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v14;
}
