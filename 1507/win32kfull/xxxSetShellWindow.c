/*
 * XREFs of xxxSetShellWindow @ 0x1C014992C
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C01497F0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     DwmAsyncShellWindowChange @ 0x1C0149F90 (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C014AD50 (CleanupIAMAccess.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D10E0 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  _QWORD v16[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( *(_QWORD *)(v4 + 160) )
  {
    v5 = 5;
LABEL_22:
    UserSetLastError(v5);
    return 0LL;
  }
  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 || *((_QWORD *)a1 + 13) || (*((_BYTE *)a1 + 48) & 8) != 0 )
  {
    v5 = 87;
    goto LABEL_22;
  }
  RegisterHotKey(a1, 0LL, 61744, 2u, 27);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL);
  if ( v6 && (!*(_QWORD *)(v4 + 168) || (*(_DWORD *)(v6 + 776) & 0x30) == 0x20) )
    *(_QWORD *)(v4 + 168) = v6;
  HMAssignmentLock(v4 + 160, a1);
  HMAssignmentLock(v4 + 176, a2);
  PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 416LL), v16, UserDereferenceObject);
  v7 = *(void **)(gptiCurrent + 416LL);
  if ( v7 )
    ObfReferenceObject(v7);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 416LL));
  v8 = *(_QWORD *)(gptiCurrent + 416LL);
  v9 = SystemPrng(&v17, 8LL);
  if ( v9 )
  {
    *(_QWORD *)(v8 + 264) = v17;
  }
  else
  {
    if ( (int)xxxCallGenerateIAMKey((struct tagIAM_KKEY *)(v8 + 264)) >= 0 )
    {
LABEL_17:
      *(_DWORD *)(v8 + 272) = 1;
      goto LABEL_18;
    }
    v9 = 0;
  }
  if ( v9 )
    goto LABEL_17;
LABEL_18:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v14 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
    DwmAsyncShellWindowChange(v14);
  }
  SetOrClrWF(1, a1, 0x420u, 1);
  xxxSetWindowPosAndBand(a1, 1LL, 0, 0, 0, 0, 19, 0);
  PopAndFreeW32ThreadLock((__int64)v16);
  return 1LL;
}
