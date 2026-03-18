/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C0057EA8
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C0057D1C (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C00C4890 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 */

__int64 __fastcall UserGetHDevFromMonitor(unsigned __int64 a1)
{
  __int64 v1; // rbx
  int v2; // r8d
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi

  v1 = 0LL;
  v2 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = a1 >> 16;
    v4 = qword_1C011A128 + (unsigned int)(v2 * dword_1C011A130);
    if ( ((_WORD)v3 == *(_WORD *)(v4 + 18) || (_WORD)v3 == 0xFFFF || !(_WORD)v3 && PsGetCurrentProcessWow64Process(v3))
      && (*(_BYTE *)(v4 + 17) & 1) == 0
      && *(_BYTE *)(v4 + 16) == 12
      && *(_QWORD *)v4 )
    {
      return *(_QWORD *)(*(_QWORD *)v4 + 160LL);
    }
  }
  UserSetLastError(1461LL);
  return v1;
}
