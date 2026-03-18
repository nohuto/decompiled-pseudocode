/*
 * XREFs of CmpIsVirtEnabled @ 0x1403FBDC0
 * Callers:
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 */

__int64 CmpIsVirtEnabled()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rbx
  __int64 Process; // rsi
  void *v3; // rax
  void *v4; // rdi
  char v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = (__int64)CurrentThread;
  LODWORD(TokenInformation) = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v3 = (void *)PsReferenceImpersonationTokenEx(
                 (_DWORD)CurrentThread,
                 0,
                 (unsigned int)&v7,
                 (unsigned int)&v6,
                 (__int64)&v9,
                 0LL);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
  }
  else
  {
    v4 = (void *)ObFastReferenceObject((signed __int64 *)(Process + 856));
    if ( !v4 )
    {
      PspLockProcessShared(Process, v1);
      v4 = (void *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
      PspUnlockProcessShared(Process, v1);
    }
    SeQueryInformationToken(v4, TokenVirtualizationEnabled, &TokenInformation);
    ObFastDereferenceObject(
      (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
      (unsigned __int64)v4);
  }
  return (unsigned __int8)TokenInformation;
}
