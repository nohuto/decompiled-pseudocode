/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C0047058
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C0046F34 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C00B9380 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

__int64 __fastcall UserGetHDevFromMonitor(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi

  v2 = 0LL;
  v3 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v4 = a1 >> 16;
    v5 = qword_1C0102D48 + (unsigned int)(v3 * dword_1C0102D50);
    if ( ((_WORD)v4 == *(_WORD *)(v5 + 18) || (_WORD)v4 == 0xFFFF || !(_WORD)v4 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v5 + 17) & 1) == 0
      && *(_BYTE *)(v5 + 16) == 12
      && *(_QWORD *)v5 )
    {
      return *(_QWORD *)(*(_QWORD *)v5 + 160LL);
    }
  }
  UserSetLastError(1461LL, a2);
  return v2;
}
