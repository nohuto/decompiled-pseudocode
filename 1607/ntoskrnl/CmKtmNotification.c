/*
 * XREFs of CmKtmNotification @ 0x1404BD168
 * Callers:
 *     <none>
 * Callees:
 *     TmCommitComplete @ 0x140001138 (TmCommitComplete.c)
 *     TmDereferenceEnlistmentKey @ 0x140001160 (TmDereferenceEnlistmentKey.c)
 *     TmPrepareComplete @ 0x1400011B0 (TmPrepareComplete.c)
 *     TmReadOnlyEnlistment @ 0x1400011D0 (TmReadOnlyEnlistment.c)
 *     TmReferenceEnlistmentKey @ 0x1400011F0 (TmReferenceEnlistmentKey.c)
 *     TmRollbackComplete @ 0x140001208 (TmRollbackComplete.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpIsCmRm @ 0x1404BD670 (CmpIsCmRm.c)
 *     CmLogTmRmAction @ 0x1404BD708 (CmLogTmRmAction.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1404BDBF4 (CmpAccountForLogReservation.c)
 *     CmpTransMgrCommit @ 0x1404BDDA4 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404BDEEC (CmpTransMgrPrepare.c)
 *     CmpTransMgrRollback @ 0x1404CBA14 (CmpTransMgrRollback.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 *     CmpRecoverEnlistment @ 0x1406050FC (CmpRecoverEnlistment.c)
 */

NTSTATUS __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
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
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rdx
  __int16 v19; // ax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  ULONG_PTR v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  PVOID v33; // rcx
  char v34; // r13
  int v35; // eax
  __int64 v36; // rcx
  NTSTATUS OnlyEnlistment; // eax
  char v38; // [rsp+30h] [rbp-51h] BYREF
  char v39; // [rsp+31h] [rbp-50h]
  char v40; // [rsp+32h] [rbp-4Fh]
  PVOID Key; // [rsp+38h] [rbp-49h] BYREF
  int v42; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-29h]
  HANDLE Handle; // [rsp+60h] [rbp-21h]
  int v46; // [rsp+68h] [rbp-19h] BYREF
  __int64 v47; // [rsp+6Ch] [rbp-15h]
  int v48; // [rsp+74h] [rbp-Dh]
  __int128 v49; // [rsp+78h] [rbp-9h] BYREF

  v7 = 0;
  Handle = 0LL;
  v40 = 0;
  v38 = 0;
  v42 = 0;
  UnicodeString.Length = 0;
  v9 = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v46 = 0;
  v47 = 0LL;
  v48 = 0;
  v39 = 1;
  if ( !(unsigned __int8)CmpIsCmRm(RMContext, RMContext, TransactionContext) )
    return -1073741811;
  if ( (RMContext[26] & 8) != 0 )
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
    v16 = *((_DWORD *)Key + 12);
    if ( (v16 & 8) != 0 )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          *((_DWORD *)Key + 12) = v16 | 1;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          v23 = KeGetCurrentThread();
          v24 = v23->KernelApcDisable + 1;
          v23->KernelApcDisable = v24;
          if ( !v24
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v23->ApcState.ApcListHead[0].Flink != &v23->152
            && !v23->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v23);
          }
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 12) = v16 | 4;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          v21 = KeGetCurrentThread();
          v22 = v21->KernelApcDisable + 1;
          v21->KernelApcDisable = v22;
          if ( !v22
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v21->ApcState.ApcListHead[0].Flink != &v21->152
            && !v21->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v21);
          }
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 12) = v16 | 2;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          v18 = KeGetCurrentThread();
          v19 = v18->KernelApcDisable + 1;
          v18->KernelApcDisable = v19;
          if ( !v19
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v18->ApcState.ApcListHead[0].Flink != &v18->152
            && !v18->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v17);
          }
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v27);
    }
    v29 = qword_1402F2E60;
    if ( CmRmSystem != RMContext )
      v29 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && (int)CmpQueryNameString(*(_QWORD *)(v29 + 2664), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((char *)&v46, 0x20000uLL);
      v49 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner != KeGetCurrentThread() )
    {
      LOCK_HIVE_LOAD();
      v7 = 1;
    }
    if ( !(unsigned __int8)CmpIsCmRm(RMContext, v25, v26) )
    {
      if ( v7 )
        UNLOCK_HIVE_LOAD();
      TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
      if ( UnicodeString.Buffer )
        RtlFreeAnsiString(&UnicodeString);
      return -1073741811;
    }
    switch ( TransactionNotification )
    {
      case 2u:
        v32 = CmpTransMgrPrepare(RMContext, Key, &v42, &v38);
        break;
      case 4u:
        v32 = CmpTransMgrCommit(v31, Key, &v42);
        break;
      case 8u:
        v32 = CmpTransMgrRollback(Key, &v42);
        break;
      default:
        v14 = -1073741811;
LABEL_53:
        v44 = v14;
        if ( v14 >= 0 || TransactionNotification == 4 )
        {
          v33 = Key;
          if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
          {
            v39 = 0;
          }
          else
          {
            v35 = CmLogTmRmAction((_DWORD)RMContext);
            v33 = Key;
            v14 = v35;
            if ( TransactionNotification != 2 )
              v14 = 0;
          }
          v34 = 1;
          if ( TransactionNotification == 4 )
          {
LABEL_64:
            if ( *((_QWORD *)v33 + 9) )
              Handle = (HANDLE)*((_QWORD *)v33 + 10);
            if ( (*((_DWORD *)v33 + 12) & 0x20) != 0 )
            {
              if ( (int)CmpAccountForLogReservation(RMContext, v30, 0LL) >= 0 )
                *((_DWORD *)Key + 12) &= ~0x20u;
              v33 = Key;
            }
            if ( v14 >= 0 || TransactionNotification != 4 )
            {
              v14 = CmpTransMgrRollback(v33, &v42);
              CmpCleanupTransactionState(RMContext, Key, TransactionNotification);
            }
LABEL_73:
            TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
            if ( v7 )
              UNLOCK_HIVE_LOAD();
            if ( v34 == 1 )
            {
              switch ( TransactionNotification )
              {
                case 2u:
                  if ( v38 == 1 )
                    OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
                  else
                    OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
                  break;
                case 4u:
                  TmCommitComplete(EnlistmentObject, 0LL);
                  goto LABEL_85;
                case 8u:
                  OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
                  break;
                default:
                  goto LABEL_85;
              }
              v14 = OnlyEnlistment;
            }
LABEL_85:
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
            if ( CmpTraceTxrRoutine && v9 )
            {
              if ( !UnicodeString.Buffer )
                return v14;
              LOBYTE(v36) = v9;
              CmpTraceTxrRoutine(v36, &v46, &v49, v44, v42, &UnicodeString);
            }
            if ( UnicodeString.Buffer )
              RtlFreeAnsiString(&UnicodeString);
            return v14;
          }
        }
        else
        {
          v33 = Key;
          v34 = v40;
        }
        if ( TransactionNotification != 8 && v38 != 1 )
          goto LABEL_73;
        goto LABEL_64;
    }
    v14 = v32;
    goto LABEL_53;
  }
  return result;
}
