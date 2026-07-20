/*
 * XREFs of SmpLoadSubSystem @ 0x1400123A4
 * Callers:
 *     SmpExecuteCommand @ 0x14000350C (SmpExecuteCommand.c)
 * Callees:
 *     SmpExecuteImage @ 0x140003C84 (SmpExecuteImage.c)
 *     SmpSbCreateSession @ 0x14000524C (SmpSbCreateSession.c)
 *     SmpWaitForSubSysStartup @ 0x140005B9C (SmpWaitForSubSysStartup.c)
 *     SmpUnlockKnownSubSysList @ 0x140006B5C (SmpUnlockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x140007B10 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140007BA8 (SmpWaitForSingleSubSys.c)
 *     SmpAddKnownSubSys @ 0x140007DE0 (SmpAddKnownSubSys.c)
 *     SmpCreateKnownSubSys @ 0x140007E20 (SmpCreateKnownSubSys.c)
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 *     SmpDeleteSubSys @ 0x1400132D8 (SmpDeleteSubSys.c)
 */

__int64 __fastcall SmpLoadSubSystem(
        PUNICODE_STRING ImageFileName,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  _DWORD *KnownSubSys; // rax
  __int64 v12; // rdi
  int v13; // r9d
  NTSTATUS Session; // ebx
  __int64 v15; // r9
  _BYTE v16[16]; // [rsp+38h] [rbp-49h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v17; // [rsp+48h] [rbp-39h] BYREF

  v17.Size = 0;
  memset_0(&v17.ProcessHandle, 0, 0x60uLL);
  if ( (a6 & 0x10) != 0 )
    return 3221225524LL;
  KnownSubSys = SmpCreateKnownSubSys(0);
  v12 = (__int64)KnownSubSys;
  if ( !KnownSubSys )
    return 3221225495LL;
  KnownSubSys[16] = a4;
  SmpWaitForSubSysStartup(a4, 0, 0LL, (__int64)v16);
  SmpAddKnownSubSys((__int64)v16, (_DWORD *)v12);
  SmpUnlockKnownSubSysList((__int64)v16);
  Session = SmpExecuteImage(ImageFileName, a2, a3, v13, a6 | 0x20u, (struct _RTL_USER_PROCESS_PARAMETERS *)&v17);
  if ( Session >= 0 )
  {
    if ( (*(_QWORD *)(v12 + 32) = v17.ProcessHandle,
          *(CLIENT_ID *)(v12 + 48) = v17.ClientId,
          v17.ImageInformation.SubSystemType != 1)
      && (Session = SmpSbCreateSession(a4, (void *)0xFFFFFFFFFFFFFFFFLL, (__int128 *)&v17, v15, 0LL), Session < 0)
      || (Session = NtResumeThread(v17.ThreadHandle, 0LL), Session < 0)
      || (NtClose(v17.ThreadHandle), Session = SmpWaitForSingleSubSys(v12), Session >= 0) )
    {
      NtTerminateProcess(v17.ProcessHandle, Session);
      NtClose(v17.ThreadHandle);
    }
  }
  SmpDeleteSubSys((PVOID)v12);
  SmpDereferenceKnownSubSys((_BYTE *)v12);
  return (unsigned int)Session;
}
