/*
 * XREFs of HMValidateHandle @ 0x1C0041588
 * Callers:
 *     ValidateHmenu @ 0x1C0041540 (ValidateHmenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     ValidateHandleSecure @ 0x1C0041700 (ValidateHandleSecure.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 CurrentProcessWow64Process; // rax

  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v7 = qword_1C0102D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0102D50;
    if ( (WORD1(a1) == *(_WORD *)(v7 + 18)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process()) != 0)
      && (*(_BYTE *)(v7 + 17) & 1) == 0
      && *(_BYTE *)(v7 + 16) == 2 )
    {
      v4 = *(_QWORD *)v7;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6) + 440) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1) )
      v4 = 0LL;
  }
  else
  {
    v4 &= -(__int64)((unsigned int)ValidateHandleSecure(a1) != 0);
  }
  if ( v4 )
    return v4;
  UserSetLastError(1401LL);
  return 0LL;
}
