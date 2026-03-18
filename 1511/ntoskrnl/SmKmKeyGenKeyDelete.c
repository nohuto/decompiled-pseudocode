/*
 * XREFs of SmKmKeyGenKeyDelete @ 0x14065A710
 * Callers:
 *     SmKmKeyGenGenerate @ 0x14065A5D4 (SmKmKeyGenGenerate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 */

void __fastcall SmKmKeyGenKeyDelete(unsigned __int64 *BugCheckParameter2, PPRIVILEGE_SET Privileges)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  PPRIVILEGE_SET *Luid; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v5, (ULONG_PTR)BugCheckParameter2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = *(_QWORD *)&Privileges->PrivilegeCount;
  Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid;
  if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges || *Luid != Privileges )
    __fastfail(3u);
  *Luid = (PPRIVILEGE_SET)v7;
  *(_QWORD *)(v7 + 8) = Luid;
  MiDeleteSubsection(Privileges);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
