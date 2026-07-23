/*
 * XREFs of CmpTransInitializeTransaction @ 0x1404BDABC
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     CmpTransReferenceTransaction @ 0x1403FDF98 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpAccountForLogReservation @ 0x1404BDBF4 (CmpAccountForLogReservation.c)
 *     CmTmCreateEnlistment @ 0x1404BDC80 (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x1404BDCF0 (CmpStartRMLogs.c)
 *     CmpTransSearchAddTransFromRm @ 0x1404C2298 (CmpTransSearchAddTransFromRm.c)
 */

__int64 __fastcall CmpTransInitializeTransaction(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebp
  int started; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 64;
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(PVOID *)(a1 + 64) != CmRmSystem )
    {
      started = CmpTransSearchAddTransFromRm((_DWORD)CmRmSystem, *(_QWORD *)(a1 + 56), 0, 1, (__int64)&v18);
      if ( started < 0 )
        return (unsigned int)started;
    }
    v1 = *(_QWORD *)(a1 + 56);
    started = CmpTransReferenceTransaction(v1);
    if ( started < 0 )
      return (unsigned int)started;
    started = CmpStartRMLogs(*(_QWORD *)(a1 + 64));
    if ( started < 0 )
      goto LABEL_16;
    started = CmTmCreateEnlistment(
                a1 + 80,
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFEuLL,
                a1);
    if ( started < 0 )
      goto LABEL_16;
    ObReferenceObjectByHandle(*(HANDLE *)(a1 + 80), 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v5) = 1;
    v6 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = Object;
    if ( (int)CmpAccountForLogReservation(v6, v7, v5) >= 0 )
      v3 = 96;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  if ( (*(_DWORD *)(a1 + 48) & 6) == 0 )
  {
    *(_DWORD *)(a1 + 48) = v3;
    --CmpTransactionInitializingCount;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    _InterlockedOr(v16, 0);
    if ( CmpTransactionInitializingEvent )
      ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
    return 0;
  }
  started = -1072103422;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
LABEL_16:
  if ( v1 )
    CmpTransDereferenceTransaction(v1);
  return (unsigned int)started;
}
