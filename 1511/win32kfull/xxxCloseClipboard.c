/*
 * XREFs of xxxCloseClipboard @ 0x1C00DBC30
 * Callers:
 *     NtUserCloseClipboard @ 0x1C00DBC00 (NtUserCloseClipboard.c)
 *     FreeWindowStation @ 0x1C00DC0E0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00DBFC0 (CheckClipboardAccess.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DC228 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014A038 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014C8A4 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1)
{
  struct tagWINDOWSTATION *v1; // rbx
  PACCESS_TOKEN v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v1 = a1;
  if ( !a1 )
  {
    v1 = (struct tagWINDOWSTATION *)CheckClipboardAccess();
    if ( !v1 )
      return 0LL;
  }
  if ( *((_QWORD *)v1 + 6) != gptiCurrent )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v1, v9, UserDereferenceObject);
  ObfReferenceObject(v1);
  if ( (*((_DWORD *)v1 + 8) & 0x40) != 0 )
  {
    MungeClipData(v1);
    CloseClipboardToken(v1);
    if ( *((_DWORD *)v1 + 26) )
    {
      v3 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v3 )
      {
        *((_DWORD *)v1 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5, v4, v6, v7);
        v3 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v1 + 16) = v3;
    }
  }
  HMAssignmentUnlock((char *)v1 + 64);
  *((_QWORD *)v1 + 6) = 0LL;
  if ( (*((_DWORD *)v1 + 8) & 0x40) != 0 )
    xxxDrawClipboard(v1);
  PopAndFreeW32ThreadLock((__int64)v9);
  return 1LL;
}
