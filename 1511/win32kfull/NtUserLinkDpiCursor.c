/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C021D1C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetCursorForDim @ 0x1C012391C (GetCursorForDim.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8

  EnterCrit(0LL, 1LL);
  v6 = HMValidateHandle(a1, 3);
  v9 = 0;
  v10 = v6;
  if ( v6 )
  {
    v11 = HMValidateHandle(a2, 3);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v10 + 80) & 0x1800) == 0
        && *(_QWORD *)(v11 + 48) == v11
        && (a3 == 32 || a3 == 48 || a3 == 64 || a3 == 96 || a3 == 128) )
      {
        if ( !GetCursorForDim(v10, a3) )
        {
          *(_QWORD *)(v12 + 48) = v10;
          v9 = 1;
          *(_QWORD *)(v12 + 40) = *(_QWORD *)(v10 + 40);
          *(_QWORD *)(v10 + 40) = v12;
          *(_DWORD *)(v12 + 76) = a3;
        }
      }
      else
      {
        UserSetLastError(87);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
