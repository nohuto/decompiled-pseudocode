/*
 * XREFs of SmKmKeyGenKeyDelete @ 0x1406DCEF0
 * Callers:
 *     SmKmKeyGenGenerate @ 0x1406DCD18 (SmKmKeyGenGenerate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 */

void __fastcall SmKmKeyGenKeyDelete(
        unsigned __int64 *BugCheckParameter2,
        PPRIVILEGE_SET Privileges,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rcx
  PPRIVILEGE_SET *Luid; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v7, (ULONG_PTR)BugCheckParameter2, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *(_QWORD *)&Privileges->PrivilegeCount;
  Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid;
  if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges || *Luid != Privileges )
    __fastfail(3u);
  *Luid = (PPRIVILEGE_SET)v10;
  *(_QWORD *)(v10 + 8) = Luid;
  ExFreePoolEx(Privileges);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
