/*
 * XREFs of _RegisterHotKey @ 0x1C0097DFC
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     SetWindowArrangementHotKeys @ 0x1C00974D8 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C009781C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     NtUserRegisterHotKey @ 0x1C0097D10 (NtUserRegisterHotKey.c)
 *     xxxSetShellWindow @ 0x1C00ED41C (xxxSetShellWindow.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00ED9E0 (_RegisterWindowArrangementCallout.c)
 *     SetDebugHotKeys @ 0x1C01345E8 (SetDebugHotKeys.c)
 * Callees:
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C009805C (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0098290 (CheckWinstaAttributeAccess.c)
 *     IsShellProcess @ 0x1C009B064 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, int a3, __int16 a4, ULONG_PTR BugCheckParameter2)
{
  __int64 v9; // rcx
  BOOL v10; // r15d
  __int16 v11; // di
  unsigned __int16 v12; // si
  unsigned int v13; // edi
  struct tagHOTKEY *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  int *i; // rcx
  __int16 v21; // dx
  struct tagHOTKEY *v22; // [rsp+40h] [rbp-38h] BYREF

  if ( PsGetCurrentProcess(a1) != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  v10 = a4 < 0 && PsGetCurrentProcess(v9) == gpepCSRSS;
  v11 = a4 & 0x7FFF;
  v12 = v11 & 0x7800;
  v13 = v11 & 0xF;
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) < 0 )
  {
    v12 |= 0x2000u;
  }
  else if ( (v12 & 0x2000) != 0 && !(unsigned int)IsShellProcess() && !a2 )
  {
    v18 = 5LL;
LABEL_26:
    UserSetLastError(v18);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v18 = 1408LL;
    goto LABEL_26;
  }
  if ( (unsigned int)FindHotKey(gptiCurrent, a1, a3, v13, BugCheckParameter2, 0, &v22) )
  {
    v18 = 1409LL;
    goto LABEL_26;
  }
  v14 = v22;
  if ( v22 )
  {
    v21 = *((_WORD *)v22 + 13);
    if ( v21 < 0 || v10 )
      KeBugCheckEx(
        0x164u,
        0x10uLL,
        *((unsigned int *)v22 + 7) | 0x80000000LL,
        *((unsigned __int16 *)v22 + 12),
        (unsigned __int16)v21);
    *((_WORD *)v22 + 13) = v12;
    *((_WORD *)v14 + 12) = v13;
    *((_DWORD *)v14 + 7) = BugCheckParameter2;
    goto LABEL_20;
  }
  v15 = Win32AllocPool(48LL, 1802007381LL);
  if ( v15 )
  {
    if ( v10 )
    {
      v19 = 0LL;
      for ( i = dword_1C0326894; *i; i += 2 )
      {
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= 2 )
        {
          Win32FreePool(v15, 0x1C0000000uLL, 0LL);
          KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v13, v12);
        }
      }
      dword_1C0326894[2 * v19] = BugCheckParameter2;
      *((_DWORD *)&gSasKeyList + 2 * v19) = v13;
    }
    *(_QWORD *)v15 = gptiCurrent;
    if ( (unsigned __int64)a1 < 2 )
    {
      *(_QWORD *)(v15 + 16) = a1;
    }
    else
    {
      *(_QWORD *)(v15 + 16) = 0LL;
      HMAssignmentLock(v15 + 16, a1);
    }
    *(_DWORD *)(v15 + 32) = a3;
    if ( v10 )
      *(_WORD *)(v15 + 26) = 0x8000;
    else
      *(_WORD *)(v15 + 26) = 0;
    *(_WORD *)(v15 + 26) |= v12;
    *(_WORD *)(v15 + 24) = v13;
    *(_DWORD *)(v15 + 28) = BugCheckParameter2;
    *(_QWORD *)(v15 + 8) = a2;
    v16 = *(_BYTE *)(v15 + 28) & 0x7F;
    *(_QWORD *)(v15 + 40) = (&gphkHashTable)[v16];
    (&gphkHashTable)[v16] = (struct tagHOTKEY * near *)v15;
LABEL_20:
    qword_1C0328BA0 = 0LL;
    return 1LL;
  }
  return 0LL;
}
