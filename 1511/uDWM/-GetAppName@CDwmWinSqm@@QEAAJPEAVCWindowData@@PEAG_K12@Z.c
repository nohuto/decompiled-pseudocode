/*
 * XREFs of ?GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z @ 0x18008265C
 * Callers:
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x1800829A8 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003CFB0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CDwmWinSqm::GetAppName(
        CDwmWinSqm *this,
        struct CWindowData *a2,
        char *a3,
        __int64 a4,
        unsigned __int16 *lpExeName)
{
  HWND v5; // rcx
  unsigned int v7; // edi
  HANDLE v8; // rax
  void *v9; // rsi
  const wchar_t *v10; // rbx
  wchar_t *v11; // rax
  CDwmWinSqm *dwSize; // [rsp+40h] [rbp+8h] BYREF
  __int64 dwProcessId; // [rsp+58h] [rbp+20h] BYREF

  dwProcessId = a4;
  dwSize = this;
  v5 = (HWND)*((_QWORD *)a2 + 5);
  LODWORD(dwProcessId) = 0;
  v7 = -2147467259;
  GetWindowThreadProcessId(v5, (LPDWORD)&dwProcessId);
  v8 = OpenProcess(0x1000u, 0, dwProcessId);
  v9 = v8;
  if ( v8 )
  {
    v10 = lpExeName;
    LODWORD(dwSize) = 260;
    if ( QueryFullProcessImageNameW(v8, 0, lpExeName, (PDWORD)&dwSize) )
    {
      if ( (unsigned int)dwSize < 0x105uLL )
        v10[(unsigned int)dwSize] = 0;
      v11 = wcsrchr(v10, 0x5Cu);
      if ( v11 && (unsigned int)(v11 - v10) < 0x103 )
        v7 = StringCchCopyW(a3, 64LL, (char *)v11 + 2);
    }
    CloseHandle(v9);
  }
  return v7;
}
