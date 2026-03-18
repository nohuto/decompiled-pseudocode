/*
 * XREFs of xxxSetShellWindow @ 0x1C00ED41C
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00ED2E0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     DwmAsyncShellWindowChange @ 0x1C0093E64 (DwmAsyncShellWindowChange.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     _RegisterHotKey @ 0x1C0097DFC (_RegisterHotKey.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CleanupIAMAccess @ 0x1C00ED600 (CleanupIAMAccess.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01CA984 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-58h]
  _QWORD v22[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  if ( *(_QWORD *)(v4 + 160) )
  {
    v5 = 5LL;
LABEL_22:
    UserSetLastError(v5);
    return 0LL;
  }
  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 || *((_QWORD *)a1 + 13) || (*((_BYTE *)a1 + 48) & 8) != 0 )
  {
    v5 = 87LL;
    goto LABEL_22;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, 0LL, 61744, 2, BugCheckParameter2);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  if ( v6 && (!*(_QWORD *)(v4 + 168) || (*(_DWORD *)(v6 + 768) & 0x30) == 0x20) )
    *(_QWORD *)(v4 + 168) = v6;
  HMAssignmentLock(v4 + 160, a1);
  HMAssignmentLock(v4 + 176, a2);
  PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 408LL), v22, UserDereferenceObject, v7);
  v8 = *(void **)(gptiCurrent + 408LL);
  if ( v8 )
    ObfReferenceObject(v8);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 408LL));
  v9 = *(_QWORD *)(gptiCurrent + 408LL);
  v10 = SystemPrng(&v23, 8LL);
  if ( v10 )
  {
    *(_QWORD *)(v9 + 272) = v23;
  }
  else
  {
    if ( (int)xxxCallGenerateIAMKey((struct tagIAM_KKEY *)(v9 + 264)) >= 0 )
    {
LABEL_17:
      *(_DWORD *)(v9 + 264) = 1;
      goto LABEL_18;
    }
    v10 = 0;
  }
  if ( v10 )
    goto LABEL_17;
LABEL_18:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v15 = *((_QWORD *)a1 + 3);
    v16 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
    DwmAsyncShellWindowChange(v16, *(_QWORD *)a1, *(_QWORD *)(v15 + 40));
  }
  SetOrClrWF(1, a1, 0x420u, 1);
  xxxSetWindowPosAndBand(a1, 1, 0, 0, 0, 0, 19, 0);
  PopAndFreeW32ThreadLock((__int64)v22, v17, v18, v19);
  return 1LL;
}
