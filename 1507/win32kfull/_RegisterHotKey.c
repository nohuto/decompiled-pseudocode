/*
 * XREFs of _RegisterHotKey @ 0x1C003D9A4
 * Callers:
 *     NtUserRegisterHotKey @ 0x1C003D8E0 (NtUserRegisterHotKey.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 *     SetWindowArrangementHotKeys @ 0x1C0146920 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C014696C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C0146C38 (SetDebugHotKeys.c)
 *     xxxSetShellWindow @ 0x1C014992C (xxxSetShellWindow.c)
 *     _RegisterWindowArrangementCallout @ 0x1C0154AF0 (_RegisterWindowArrangementCallout.c)
 * Callees:
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C003DC18 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003DD20 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0080B7C (IsShellProcess.c)
 */

__int64 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  BOOL v8; // r15d
  int v9; // esi
  __int16 v10; // r12
  unsigned int v11; // edi
  struct tagHOTKEY *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // rax
  int *i; // rcx
  __int64 v18; // rcx
  struct tagHOTKEY *v19; // [rsp+40h] [rbp-48h] BYREF

  if ( PsGetCurrentProcess() != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || a5 == 231 )
  {
    return 0LL;
  }
  v8 = (a4 & 0x8000) != 0 && PsGetCurrentProcess() == gpepCSRSS;
  v9 = (a4 >> 13) & 1;
  v10 = a4 & 0x7000;
  v11 = a4 & 0xFFFF0FFF;
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) < 0 )
  {
    v9 = 1;
  }
  else if ( v9 && !(unsigned int)IsShellProcess() && !a2 )
  {
    v18 = 5LL;
LABEL_38:
    UserSetLastError(v18);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v18 = 1408LL;
    goto LABEL_38;
  }
  if ( (unsigned int)FindHotKey(gptiCurrent, a1, a3, v11, a5, 0, &v19) )
  {
    v18 = 1409LL;
    goto LABEL_38;
  }
  v12 = v19;
  if ( v19 )
  {
    *((_WORD *)v19 + 13) = v10;
    *((_WORD *)v12 + 12) = v11;
    *((_DWORD *)v12 + 7) = a5;
LABEL_21:
    qword_1C0322C08 = 0LL;
    return 1LL;
  }
  v13 = Win32AllocPool(48LL, 1802007381LL);
  if ( v13 )
  {
    if ( v8 )
    {
      v16 = 0LL;
      for ( i = dword_1C0323504; *i; i += 2 )
      {
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= 4 )
        {
          Win32FreePool(v13);
          return 0LL;
        }
      }
      dword_1C0323504[2 * v16] = a5;
      *((_DWORD *)&gSasKeyList + 2 * v16) = v11;
    }
    *(_QWORD *)v13 = gptiCurrent;
    if ( (unsigned __int64)a1 < 2 )
    {
      *(_QWORD *)(v13 + 16) = a1;
    }
    else
    {
      *(_QWORD *)(v13 + 16) = 0LL;
      HMAssignmentLock(v13 + 16, a1);
    }
    *(_DWORD *)(v13 + 32) = a3;
    if ( v8 )
    {
      *(_WORD *)(v13 + 26) = 0x8000;
    }
    else if ( v9 )
    {
      *(_WORD *)(v13 + 26) |= 0x2000u;
    }
    else
    {
      *(_WORD *)(v13 + 26) = 0;
    }
    *(_WORD *)(v13 + 26) |= v10;
    *(_WORD *)(v13 + 24) = v11;
    *(_DWORD *)(v13 + 28) = a5;
    *(_QWORD *)(v13 + 8) = a2;
    v14 = *(_BYTE *)(v13 + 28) & 0x7F;
    *(_QWORD *)(v13 + 40) = (&gphkHashTable)[v14];
    (&gphkHashTable)[v14] = (struct tagHOTKEY * near *)v13;
    goto LABEL_21;
  }
  return 0LL;
}
