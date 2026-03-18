/*
 * XREFs of HMValidateHandle @ 0x1C004F6D8
 * Callers:
 *     ValidateHmenu @ 0x1C004F690 (ValidateHmenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ValidateHandleSecure @ 0x1C004F850 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateHandle(void *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = qword_1C01003E8 + (unsigned int)(unsigned __int16)a1 * dword_1C01003F0;
    if ( (WORD1(a1) == *(_WORD *)(v3 + 18) || WORD1(a1) == 0xFFFF || !WORD1(a1) && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v3 + 17) & 1) == 0
      && *(_BYTE *)(v3 + 16) == 2 )
    {
      v2 = *(_QWORD *)v3;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1) )
      v2 = 0LL;
  }
  else
  {
    v2 &= -(__int64)((unsigned int)ValidateHandleSecure(a1) != 0);
  }
  if ( v2 )
    return v2;
  UserSetLastError(1401LL, v4);
  return 0LL;
}
