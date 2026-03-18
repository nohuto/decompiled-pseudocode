/*
 * XREFs of HMValidateHandle @ 0x1C0076B18
 * Callers:
 *     ValidateHmenu @ 0x1C0076AD0 (ValidateHmenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     ValidateHandleSecure @ 0x1C00389C0 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateHandle(void *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = qword_1C011A128 + (unsigned int)(unsigned __int16)a1 * dword_1C011A130;
    if ( (WORD1(a1) == *(_WORD *)(v3 + 18)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*(_BYTE *)(v3 + 17) & 1) == 0
      && *(_BYTE *)(v3 + 16) == 2 )
    {
      v2 = *(_QWORD *)v3;
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3) )
      v2 = 0LL;
  }
  else
  {
    v2 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2) != 0);
  }
  if ( v2 )
    return v2;
  UserSetLastError(1401LL);
  return 0LL;
}
