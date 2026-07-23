/*
 * XREFs of SmKmKeyGenKeyDelete @ 0x140698420
 * Callers:
 *     SmKmKeyGenGenerate @ 0x1406982E4 (SmKmKeyGenGenerate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

void __fastcall SmKmKeyGenKeyDelete(unsigned __int64 *BugCheckParameter2, PPRIVILEGE_SET Privileges)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rcx
  PPRIVILEGE_SET *Luid; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v5, (ULONG_PTR)BugCheckParameter2);
  if ( v6 )
    v6[26] |= 1u;
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
