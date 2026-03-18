/*
 * XREFs of CmKtmNotification @ 0x1404EF414
 * Callers:
 *     <none>
 * Callees:
 *     TmCommitComplete @ 0x140001138 (TmCommitComplete.c)
 *     TmDereferenceEnlistmentKey @ 0x140001160 (TmDereferenceEnlistmentKey.c)
 *     TmPrepareComplete @ 0x1400011B0 (TmPrepareComplete.c)
 *     TmReadOnlyEnlistment @ 0x1400011D0 (TmReadOnlyEnlistment.c)
 *     TmReferenceEnlistmentKey @ 0x1400011F0 (TmReferenceEnlistmentKey.c)
 *     TmRollbackComplete @ 0x140001208 (TmRollbackComplete.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     CmLogTmRmAction @ 0x1404EF350 (CmLogTmRmAction.c)
 *     CmpIsCmRm @ 0x1404EF7E8 (CmpIsCmRm.c)
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmpAccountForLogReservation @ 0x1404F1D78 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x1405640A8 (CmpTransMgrRollback.c)
 *     CmpQueueLazyCommitWorker @ 0x14065AC08 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x14065CBDC (CmpRecoverEnlistment.c)
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
  char v8; // r13
  __int64 v11; // rdx
  NTSTATUS result; // eax
  __int64 v13; // r9
  int v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rsi
  int v20; // eax
  signed __int32 v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rcx
  char v28; // si
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // r12d
  PVOID v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  NTSTATUS OnlyEnlistment; // eax
  NTSTATUS v38; // eax
  signed __int32 v39; // eax
  struct _KTHREAD *v40; // rdx
  __int16 v41; // ax
  signed __int32 v43; // eax
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  signed __int32 v46; // eax
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  char v49; // [rsp+30h] [rbp-51h] BYREF
  char v50; // [rsp+31h] [rbp-50h]
  char v51; // [rsp+32h] [rbp-4Fh]
  PVOID Key; // [rsp+38h] [rbp-49h] BYREF
  int v53; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-39h] BYREF
  int v55; // [rsp+58h] [rbp-29h]
  HANDLE Handle; // [rsp+60h] [rbp-21h]
  int v57; // [rsp+68h] [rbp-19h] BYREF
  __int64 v58; // [rsp+6Ch] [rbp-15h]
  int v59; // [rsp+74h] [rbp-Dh]
  __int128 v60; // [rsp+78h] [rbp-9h] BYREF

  v55 = 0;
  Handle = 0LL;
  v50 = 0;
  v49 = 0;
  v8 = 0;
  v53 = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v57 = 0;
  v58 = 0LL;
  v59 = 0;
  v51 = 1;
  if ( !(unsigned __int8)CmpIsCmRm(RMContext, RMContext, TransactionContext) )
    return -1073741811;
  if ( (RMContext[26] & 8) != 0 )
    return 0;
  if ( TransactionNotification == 256 )
    return CmpRecoverEnlistment(RMContext, v11, Argument);
  if ( (TransactionNotification & 0xE) == 0 )
    return 0;
  result = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  v14 = result;
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = KeGetCurrentThread();
    v17 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v13);
    v18 = v17;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    qword_14034D768 = (__int64)v16;
    v20 = *((_DWORD *)Key + 26);
    if ( (v20 & 8) != 0 )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          *((_DWORD *)Key + 26) = v20 | 1;
          qword_14034D768 = 0LL;
          v46 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
          if ( v46 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v46);
          KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
          v47 = KeGetCurrentThread();
          v48 = v47->KernelApcDisable + 1;
          v47->KernelApcDisable = v48;
          if ( !v48
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
            && !v47->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 26) = v20 | 4;
          qword_14034D768 = 0LL;
          v43 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
          if ( v43 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v43);
          KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
          v44 = KeGetCurrentThread();
          v45 = v44->KernelApcDisable + 1;
          v44->KernelApcDisable = v45;
          if ( !v45
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
            && !v44->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 26) = v20 | 2;
          qword_14034D768 = 0LL;
          v39 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
          if ( v39 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v39);
          KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
          v40 = KeGetCurrentThread();
          v41 = v40->KernelApcDisable + 1;
          v40->KernelApcDisable = v41;
          if ( !v41
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
            && !v40->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    qword_14034D768 = 0LL;
    v21 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
    if ( v21 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v21);
    KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v27 = qword_1403168C0;
    if ( CmRmSystem != RMContext )
      v27 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && CmpQueryNameString(*(void **)(v27 + 2664), &UnicodeString) >= 0 )
    {
      EtwGetKernelTraceTimestamp((char *)&v57, (char *)0x20000);
      v60 = *((_OWORD *)Key + 5);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
    {
      v28 = 0;
    }
    else
    {
      LOCK_HIVE_LOAD(v27, v22, v23, v24);
      v28 = 1;
    }
    if ( (unsigned __int8)CmpIsCmRm(RMContext, v22, v23) )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          v31 = CmpTransMgrPrepare(RMContext, Key, &v53, &v49);
          v32 = 4;
          break;
        case 4u:
          v31 = CmpTransMgrCommit(RMContext, Key, &v53);
          v32 = 16;
          break;
        case 8u:
          v31 = CmpTransMgrRollback(Key, &v53);
          v32 = 8;
          break;
        default:
          v32 = v55;
          v14 = -1073741811;
          goto LABEL_25;
      }
      v14 = v31;
LABEL_25:
      v33 = v14;
      if ( v14 >= 0 || TransactionNotification == 4 )
      {
        v34 = Key;
        if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
        {
          v51 = 0;
        }
        else
        {
          v38 = CmLogTmRmAction((__int64)RMContext, (__int64)Key, v32);
          v34 = Key;
          v14 = v38;
          if ( TransactionNotification != 2 )
            v14 = 0;
        }
        v50 = 1;
        if ( TransactionNotification == 4 )
        {
LABEL_30:
          if ( *((_QWORD *)v34 + 8) )
            Handle = (HANDLE)*((_QWORD *)v34 + 9);
          if ( (*((_DWORD *)v34 + 26) & 0x20) != 0 )
          {
            if ( (int)CmpAccountForLogReservation(RMContext, v34, 0LL) >= 0 )
              *((_DWORD *)Key + 26) &= ~0x20u;
            v34 = Key;
          }
          if ( v14 < 0 && TransactionNotification == 4 )
          {
            CmpQueueLazyCommitWorker(v34);
            v14 = 0;
          }
          else
          {
            CmpCleanupTransactionState(RMContext, v34, TransactionNotification);
          }
LABEL_38:
          TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
          if ( v28 )
            UNLOCK_HIVE_LOAD(v36, v35);
          if ( v50 != 1 )
            goto LABEL_46;
          switch ( TransactionNotification )
          {
            case 2u:
              if ( v49 == 1 )
                OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
              else
                OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
              break;
            case 4u:
              TmCommitComplete(EnlistmentObject, 0LL);
              goto LABEL_46;
            case 8u:
              OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
              break;
            default:
LABEL_46:
              if ( Handle )
                ZwClose(Handle);
              switch ( TransactionNotification )
              {
                case 2u:
                  v8 = 31;
                  break;
                case 4u:
                  v8 = 30;
                  break;
                case 8u:
                  v8 = 32;
                  break;
              }
              if ( !CmpTraceTxrRoutine || !v8 )
                goto LABEL_53;
              if ( UnicodeString.Buffer )
              {
                LOBYTE(v36) = v8;
                CmpTraceTxrRoutine(v36, &v57, &v60, v33, v53, &UnicodeString);
LABEL_53:
                if ( UnicodeString.Buffer )
                  RtlFreeAnsiString(&UnicodeString);
              }
              return v14;
          }
          v14 = OnlyEnlistment;
          goto LABEL_46;
        }
      }
      else
      {
        v34 = Key;
      }
      if ( TransactionNotification != 8 && v49 != 1 )
        goto LABEL_38;
      goto LABEL_30;
    }
    if ( v28 )
      UNLOCK_HIVE_LOAD(v30, v29);
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    return -1073741811;
  }
  return result;
}
