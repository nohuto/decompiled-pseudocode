/*
 * XREFs of _RegisterHotKey @ 0x1C008A6EC
 * Callers:
 *     NtUserRegisterHotKey @ 0x1C008A600 (NtUserRegisterHotKey.c)
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     SetWindowArrangementHotKeys @ 0x1C009E738 (SetWindowArrangementHotKeys.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C009E784 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C009EA50 (SetDebugHotKeys.c)
 *     xxxSetShellWindow @ 0x1C00D49B4 (xxxSetShellWindow.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D5A10 (_RegisterWindowArrangementCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C00738DC (IsShellProcess.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C008A958 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG_PTR BugCheckParameter2)
{
  __int16 v5; // di
  int v6; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOL v13; // r15d
  __int64 v14; // rcx
  __int16 v15; // di
  unsigned __int16 v16; // si
  unsigned int v17; // edi
  struct tagHOTKEY *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v22; // rax
  int *i; // rcx
  int v24; // ecx
  __int16 v25; // dx
  struct tagHOTKEY *v26; // [rsp+40h] [rbp-38h] BYREF

  v5 = a4;
  v6 = a3;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS
    && grpWinStaList
    && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  v13 = v5 < 0 && PsGetCurrentProcess(v10, v9, v11, v12) == gpepCSRSS;
  v14 = *(_QWORD *)(gptiCurrent + 376LL);
  v15 = v5 & 0x7FFF;
  v16 = v15 & 0x7800;
  v17 = v15 & 0xF;
  if ( *(int *)(v14 + 12) < 0 )
  {
    v16 |= 0x2000u;
  }
  else if ( (v16 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v14) && !a2 )
  {
    v24 = 5;
LABEL_34:
    UserSetLastError(v24);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v24 = 1408;
    goto LABEL_34;
  }
  if ( (unsigned int)FindHotKey(gptiCurrent, a1, v6, v17, BugCheckParameter2, 0, &v26) )
  {
    v24 = 1409;
    goto LABEL_34;
  }
  v18 = v26;
  if ( v26 )
  {
    v25 = *((_WORD *)v26 + 13);
    if ( v25 < 0 || v13 )
      KeBugCheckEx(
        0x164u,
        0x10uLL,
        *((unsigned int *)v26 + 7) | 0x80000000LL,
        *((unsigned __int16 *)v26 + 12),
        (unsigned __int16)v25);
    *((_WORD *)v26 + 13) = v16;
    *((_WORD *)v18 + 12) = v17;
    *((_DWORD *)v18 + 7) = BugCheckParameter2;
    goto LABEL_20;
  }
  v19 = Win32AllocPool(48LL);
  if ( v19 )
  {
    if ( v13 )
    {
      v22 = 0LL;
      for ( i = dword_1C03217A4; *i; i += 2 )
      {
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= 2 )
        {
          Win32FreePool(v19);
          KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v17, v16);
        }
      }
      dword_1C03217A4[2 * v22] = BugCheckParameter2;
      *((_DWORD *)&gSasKeyList + 2 * v22) = v17;
    }
    *(_QWORD *)v19 = gptiCurrent;
    if ( (unsigned __int64)a1 < 2 )
    {
      *(_QWORD *)(v19 + 16) = a1;
    }
    else
    {
      *(_QWORD *)(v19 + 16) = 0LL;
      HMAssignmentLock(v19 + 16, a1);
    }
    *(_DWORD *)(v19 + 32) = v6;
    if ( v13 )
      *(_WORD *)(v19 + 26) = 0x8000;
    else
      *(_WORD *)(v19 + 26) = 0;
    *(_WORD *)(v19 + 26) |= v16;
    *(_WORD *)(v19 + 24) = v17;
    *(_DWORD *)(v19 + 28) = BugCheckParameter2;
    *(_QWORD *)(v19 + 8) = a2;
    v20 = *(_BYTE *)(v19 + 28) & 0x7F;
    *(_QWORD *)(v19 + 40) = (&gphkHashTable)[v20];
    (&gphkHashTable)[v20] = (struct tagHOTKEY * near *)v19;
LABEL_20:
    qword_1C03234F8 = 0LL;
    return 1LL;
  }
  return 0LL;
}
