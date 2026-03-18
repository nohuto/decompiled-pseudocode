/*
 * XREFs of xxxCloseClipboard @ 0x1C00F8DF0
 * Callers:
 *     NtUserCloseClipboard @ 0x1C00F8DC0 (NtUserCloseClipboard.c)
 *     FreeWindowStation @ 0x1C00F92C0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00F94D0 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014F720 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0151C14 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWINDOWSTATION *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PACCESS_TOKEN v9; // rax
  __int64 v10; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1;
  if ( !a1 )
  {
    v4 = (struct tagWINDOWSTATION *)CheckClipboardAccess();
    if ( !v4 )
      return 0LL;
  }
  if ( *((_QWORD *)v4 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v4, v12, UserDereferenceObject, a4);
  ObfReferenceObject(v4);
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
  {
    MungeClipData(v4);
    CloseClipboardToken(v4);
    if ( *((_DWORD *)v4 + 26) )
    {
      v9 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v9 )
      {
        *((_DWORD *)v4 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10);
        v9 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v4 + 16) = v9;
    }
  }
  HMAssignmentUnlock((char *)v4 + 64);
  *((_QWORD *)v4 + 6) = 0LL;
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
    xxxDrawClipboard(v4);
  PopAndFreeW32ThreadLock((__int64)v12, v5, v6, v7);
  return 1LL;
}
