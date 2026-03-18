/*
 * XREFs of xxxCloseClipboard @ 0x1401B02A0
 * Callers:
 *     NtUserCloseClipboard @ 0x1401B0120 (NtUserCloseClipboard.c)
 *     ForceEmptyClipboard @ 0x1401B18B0 (ForceEmptyClipboard.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401AF5E0 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B1920 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B19BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1)
{
  struct tagWINDOWSTATION *v1; // rbx
  int v2; // eax
  PACCESS_TOKEN v4; // rax
  __int64 v5; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v1 = a1;
  if ( !a1 )
  {
    v1 = CheckClipboardAccess(0LL);
    if ( !v1 )
      return 0LL;
  }
  if ( *((struct tagTHREADINFO **)v1 + 6) != PtiCurrent((__int64)a1) )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v7, v1);
  if ( (*((_DWORD *)v1 + 8) & 0x40) != 0 )
  {
    MungeClipData(v1);
    CloseClipboardToken(v1);
    if ( *((_DWORD *)v1 + 26) )
    {
      CopyOnOpen = 0;
      EffectiveOnly = 0;
      ImpersonationLevel = SecurityAnonymous;
      v4 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v4 )
      {
        *((_DWORD *)v1 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5);
        v4 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v1 + 16) = v4;
    }
  }
  HMAssignmentUnlock((char *)v1 + 64);
  v2 = *((_DWORD *)v1 + 8);
  *((_QWORD *)v1 + 6) = 0LL;
  if ( (v2 & 0x40) != 0 )
    xxxDrawClipboard(v1);
  if ( v7[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v7);
  return 1LL;
}
