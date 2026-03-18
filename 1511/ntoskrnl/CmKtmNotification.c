/*
 * XREFs of CmKtmNotification @ 0x1404BA500
 * Callers:
 *     <none>
 * Callees:
 *     TmCommitComplete @ 0x140001138 (TmCommitComplete.c)
 *     TmDereferenceEnlistmentKey @ 0x140001160 (TmDereferenceEnlistmentKey.c)
 *     TmPrepareComplete @ 0x1400011B0 (TmPrepareComplete.c)
 *     TmReadOnlyEnlistment @ 0x1400011D0 (TmReadOnlyEnlistment.c)
 *     TmReferenceEnlistmentKey @ 0x1400011F0 (TmReferenceEnlistmentKey.c)
 *     TmRollbackComplete @ 0x140001208 (TmRollbackComplete.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     CmpIsCmRm @ 0x1403D5A78 (CmpIsCmRm.c)
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1404BA95C (CmpAccountForLogReservation.c)
 *     CmpTransMgrRollback @ 0x1404BA9E8 (CmpTransMgrRollback.c)
 *     CmLogTmRmAction @ 0x1404BAA68 (CmLogTmRmAction.c)
 *     CmpQueryNameString @ 0x1404C2294 (CmpQueryNameString.c)
 *     CmpQueueLazyCommitWorker @ 0x1405E3B98 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x1405E5AF8 (CmpRecoverEnlistment.c)
 */

NTSTATUS __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _QWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v7; // r15
  char v9; // r12
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  ULONG_PTR v17; // rcx
  int v18; // eax
  PVOID v19; // rdx
  char v20; // r13
  __int64 v21; // rcx
  NTSTATUS OnlyEnlistment; // eax
  int v23; // eax
  char v25; // [rsp+30h] [rbp-51h] BYREF
  char v26; // [rsp+31h] [rbp-50h]
  char v27; // [rsp+32h] [rbp-4Fh]
  PVOID Key; // [rsp+38h] [rbp-49h] BYREF
  int v29; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-29h]
  HANDLE Handle; // [rsp+60h] [rbp-21h]
  int v33; // [rsp+68h] [rbp-19h] BYREF
  __int64 v34; // [rsp+6Ch] [rbp-15h]
  int v35; // [rsp+74h] [rbp-Dh]
  __int128 v36; // [rsp+78h] [rbp-9h] BYREF

  v7 = 0;
  Handle = 0LL;
  v27 = 0;
  v25 = 0;
  v29 = 0;
  UnicodeString.Length = 0;
  v9 = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v33 = 0;
  v34 = 0LL;
  v35 = 0;
  v26 = 1;
  if ( !CmpIsCmRm(RMContext) )
    return -1073741811;
  if ( (RMContext[13] & 8) != 0 )
    return 0;
  if ( TransactionNotification == 256 )
    return CmpRecoverEnlistment(RMContext, v12, Argument);
  if ( (TransactionNotification & 0xE) == 0 )
    return 0;
  result = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  v14 = result;
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v16 = *((_DWORD *)Key + 26);
    if ( (v16 & 8) != 0 )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          *((_DWORD *)Key + 26) = v16 | 1;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 26) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 26) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = qword_1402C77F0;
    if ( CmRmSystem != RMContext )
      v17 = RMContext[10];
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v17 + 2664), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((char *)&v33, (char *)0x20000);
      v36 = *((_OWORD *)Key + 5);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner != KeGetCurrentThread() )
    {
      LOCK_HIVE_LOAD();
      v7 = 1;
    }
    if ( CmpIsCmRm(RMContext) )
    {
      switch ( TransactionNotification )
      {
        case 8u:
          v18 = CmpTransMgrRollback(Key, &v29);
          break;
        case 2u:
          v18 = CmpTransMgrPrepare((__int64)RMContext, (__int64)Key, &v29, &v25);
          break;
        case 4u:
          v18 = CmpTransMgrCommit((__int64)RMContext, (__int64)Key, &v29);
          break;
        default:
          v14 = -1073741811;
          goto LABEL_16;
      }
      v14 = v18;
LABEL_16:
      v31 = v14;
      if ( v14 >= 0 || TransactionNotification == 4 )
      {
        v19 = Key;
        if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
        {
          v26 = 0;
        }
        else
        {
          v23 = CmLogTmRmAction((int)RMContext);
          v19 = Key;
          v14 = v23;
          if ( TransactionNotification != 2 )
            v14 = 0;
        }
        v20 = 1;
        if ( TransactionNotification == 4 )
        {
LABEL_21:
          if ( *((_QWORD *)v19 + 8) )
            Handle = (HANDLE)*((_QWORD *)v19 + 9);
          if ( (*((_DWORD *)v19 + 26) & 0x20) != 0 )
          {
            if ( (int)CmpAccountForLogReservation(RMContext, v19, 0LL) >= 0 )
              *((_DWORD *)Key + 26) &= ~0x20u;
            v19 = Key;
          }
          if ( v14 < 0 && TransactionNotification == 4 )
          {
            CmpQueueLazyCommitWorker(v19);
            v14 = 0;
          }
          else
          {
            CmpCleanupTransactionState(RMContext, v19, TransactionNotification);
          }
LABEL_29:
          TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
          if ( v7 )
            UNLOCK_HIVE_LOAD();
          if ( v20 != 1 )
            goto LABEL_37;
          switch ( TransactionNotification )
          {
            case 2u:
              if ( v25 == 1 )
                OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
              else
                OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
              break;
            case 4u:
              TmCommitComplete(EnlistmentObject, 0LL);
              goto LABEL_37;
            case 8u:
              OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
              break;
            default:
LABEL_37:
              if ( Handle )
                ZwClose(Handle);
              switch ( TransactionNotification )
              {
                case 2u:
                  v9 = 31;
                  break;
                case 4u:
                  v9 = 30;
                  break;
                case 8u:
                  v9 = 32;
                  break;
              }
              if ( !CmpTraceTxrRoutine || !v9 )
                goto LABEL_44;
              if ( UnicodeString.Buffer )
              {
                LOBYTE(v21) = v9;
                CmpTraceTxrRoutine(v21, &v33, &v36, v31, v29, &UnicodeString);
LABEL_44:
                if ( UnicodeString.Buffer )
                  RtlFreeAnsiString(&UnicodeString);
                return v14;
              }
              return v14;
          }
          v14 = OnlyEnlistment;
          goto LABEL_37;
        }
      }
      else
      {
        v19 = Key;
        v20 = v27;
      }
      if ( TransactionNotification != 8 && v25 != 1 )
        goto LABEL_29;
      goto LABEL_21;
    }
    if ( v7 )
      UNLOCK_HIVE_LOAD();
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    return -1073741811;
  }
  return result;
}
