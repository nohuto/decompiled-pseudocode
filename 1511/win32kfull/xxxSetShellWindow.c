/*
 * XREFs of xxxSetShellWindow @ 0x1C00D49B4
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00D4C40 (NtUserSetShellWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 *     DwmAsyncShellWindowChange @ 0x1C00D21C8 (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C00D4B40 (CleanupIAMAccess.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D2D84 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 */

__int64 __fastcall xxxSetShellWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct tagWND **v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  void *v14; // rax
  int v16; // ecx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
  v5 = (struct tagWND **)(v4 + 160);
  if ( *(_QWORD *)(v4 + 160) )
  {
    v16 = 5;
LABEL_21:
    UserSetLastError(v16);
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 || *(_QWORD *)(a1 + 104) || (*(_BYTE *)(a1 + 48) & 8) != 0 )
  {
    v16 = 87;
    goto LABEL_21;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey((struct tagWND *)a1, 0LL, 61744LL, 2LL, BugCheckParameter2);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( v6 && (!*(_QWORD *)(v4 + 168) || (*(_DWORD *)(v6 + 776) & 0x30) == 0x20) )
    *(_QWORD *)(v4 + 168) = v6;
  HMAssignmentLock(v4 + 160, a1);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 408LL));
  v7 = *(_QWORD *)(gptiCurrent + 408LL);
  v8 = SystemPrng(&v18, 8LL);
  if ( v8 )
  {
    *(_QWORD *)(v7 + 272) = v18;
  }
  else
  {
    if ( (int)xxxCallGenerateIAMKey((struct tagIAM_KKEY *)(v7 + 264)) >= 0 )
      goto LABEL_11;
    v8 = 0;
  }
  if ( v8 )
LABEL_11:
    *(_DWORD *)(v7 + 264) = 1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
    DwmAsyncShellWindowChange(v14, *(_QWORD *)a1, *(_QWORD *)(v13 + 40));
  }
  HMAssignmentLock(v4 + 176, a2);
  SetOrClrWF(1, *v5, 0x420u, 1);
  xxxSetWindowPosAndBand(*v5, 1, 0, 0, 0, 0, 19, 0);
  return 1LL;
}
