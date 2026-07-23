/*
 * XREFs of CmpCallCallBacks @ 0x140496120
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     NtEnumerateValueKey @ 0x1404273A0 (NtEnumerateValueKey.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     NtEnumerateKey @ 0x1404C6220 (NtEnumerateKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140651088 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x140498B70 (CmpCallbackFillObjectContext.c)
 *     CmpFatalFilter @ 0x140652B2C (CmpFatalFilter.c)
 */

__int64 __fastcall CmpCallCallBacks(unsigned int a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r14
  _QWORD *v9; // rax
  struct _KTHREAD *CurrentThread; // r12
  PVOID Object; // rax
  __int64 *v12; // r12
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r9
  _SLIST_ENTRY *v17; // r13
  int v18; // esi
  signed __int64 v19; // rcx
  ULONG_PTR v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  _QWORD *v24; // r14
  signed __int64 v25; // rcx
  ULONG_PTR v26; // rtt
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v30; // rdx
  _SLIST_ENTRY **v31; // rax
  int v32; // eax
  __int64 v33; // r9
  _SLIST_ENTRY *v34; // rbx
  _SLIST_ENTRY **v35; // rax
  _SLIST_ENTRY *v36; // rsi
  PVOID *v37; // rax
  unsigned int v38; // ecx
  struct _KTHREAD *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r9
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v43; // rax
  PVOID *v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  int v47; // eax
  signed __int32 v48[8]; // [rsp+0h] [rbp-D8h] BYREF
  char v49; // [rsp+20h] [rbp-B8h]
  char v50; // [rsp+21h] [rbp-B7h]
  int v51; // [rsp+24h] [rbp-B4h]
  _QWORD *v52; // [rsp+30h] [rbp-A8h]
  _SLIST_ENTRY *v53; // [rsp+38h] [rbp-A0h]
  struct _KTHREAD *v54; // [rsp+40h] [rbp-98h]
  void *v55; // [rsp+48h] [rbp-90h]
  _QWORD v56[15]; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v57; // [rsp+F8h] [rbp+20h]

  v57 = a4;
  v6 = a3;
  v51 = 0;
  v9 = 0LL;
  v52 = 0LL;
  v49 = 0;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  if ( a3 == 1 )
  {
    Object = CurrentThread[1].WaitBlock[0].Object;
    if ( Object )
      v12 = (__int64 *)*((_QWORD *)Object + 1);
    else
      v12 = &CallbackListHead;
    v50 = 1;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v15, (ULONG_PTR)&CmpCallbackListLock, v16);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v17 = (_SLIST_ENTRY *)a6;
    while ( 1 )
    {
      do
      {
        v12 = (__int64 *)*v12;
        v55 = v12;
        if ( v12 == &CallbackListHead )
          goto LABEL_10;
      }
      while ( *((int *)v12 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
      _m_prefetchw(&CmpCallbackListLock);
      if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v25 = CmpCallbackListLock - 16;
      else
        v25 = 0LL;
      if ( (CmpCallbackListLock & 2) != 0
        || (v26 = CmpCallbackListLock,
            v26 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpCallbackListLock,
                     v25,
                     CmpCallbackListLock)) )
      {
        ExfReleasePushLock(&CmpCallbackListLock, v14);
      }
      KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
      v27 = KeGetCurrentThread();
      v28 = v27->KernelApcDisable + 1;
      v27->KernelApcDisable = v28;
      if ( !v28
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
        && !v27->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v50 = 0;
      PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !PoolWithTag )
        PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v53 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v12;
      PoolWithTag[2].Next = 0LL;
      v30 = v54;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)v54[1].WaitBlock[0].Object;
      v30[1].WaitBlock[0].Object = &PoolWithTag[1];
      v31 = *(_SLIST_ENTRY ***)(a6 + 8);
      PoolWithTag->Next = (_SLIST_ENTRY *)a6;
      *((_QWORD *)&PoolWithTag->Next + 1) = v31;
      if ( *v31 != (_SLIST_ENTRY *)a6 )
        __fastfail(3u);
      *v31 = PoolWithTag;
      *(_QWORD *)(a6 + 8) = PoolWithTag;
      CmpCallbackFillObjectContext(a1, a2, v12 + 3);
      v32 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v12[5])(v12[4], (int)a1, a2);
      v51 = v32;
      if ( a1 == 14 )
      {
        v51 = 0;
      }
      else if ( v32 < 0 )
      {
        Next = PoolWithTag->Next;
        v43 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v43 != PoolWithTag )
          __fastfail(3u);
        *v43 = Next;
        *((_QWORD *)&Next->Next + 1) = v43;
        v44 = (PVOID *)v54[1].WaitBlock[0].Object;
        if ( v44 )
          v54[1].WaitBlock[0].Object = *v44;
        v45 = CmpCallBackCount * KeNumberProcessors_0;
        if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
          v45 = 64;
        if ( LOWORD(CmpCallbackContextSList.Alignment) >= v45 )
          ExFreePoolWithTag(PoolWithTag, 0);
        else
          RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
        {
          _InterlockedOr(v48, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v6 = 0;
        v49 = 1;
LABEL_10:
        v18 = v51;
        goto LABEL_11;
      }
      switch ( a1 )
      {
        case 0x1Cu:
LABEL_56:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
          *(_QWORD *)(a2 + 80) = 0LL;
          break;
        case 8u:
LABEL_63:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
          *(_QWORD *)(a2 + 48) = 0LL;
          break;
        case 7u:
LABEL_62:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
          break;
        case 0xEu:
LABEL_42:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_42;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_62;
            case 2u:
            case 4u:
            case 0x22u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 16);
              *(_QWORD *)(a2 + 16) = 0LL;
              break;
            case 3u:
            case 0x24u:
            case 0x2Fu:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 32);
              *(_QWORD *)(a2 + 32) = 0LL;
              break;
            case 9u:
              goto LABEL_63;
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x16u:
            case 0x17u:
            case 0x18u:
            case 0x19u:
            case 0x1Bu:
            case 0x1Du:
            case 0x1Fu:
            case 0x21u:
            case 0x23u:
            case 0x25u:
            case 0x27u:
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x30u:
              *(_QWORD *)(a2 + 32) = PoolWithTag[2].Next;
              break;
            case 0x1Au:
              goto LABEL_56;
            case 0x20u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 64);
              *(_QWORD *)(a2 + 64) = 0LL;
              break;
            case 0x26u:
            case 0x29u:
            case 0x2Bu:
            case 0x2Du:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 24);
              *(_QWORD *)(a2 + 24) = 0LL;
              break;
            default:
              goto LABEL_57;
          }
          break;
      }
LABEL_57:
      v50 = 1;
      v39 = KeGetCurrentThread();
      --v39->KernelApcDisable;
      v40 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0LL, v33);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v40, (ULONG_PTR)&CmpCallbackListLock, v41);
      if ( v40 )
        *(_BYTE *)(v40 + 26) |= 1u;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
    {
      _InterlockedOr(v48, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v18 = -1073741670;
    v51 = -1073741670;
    v49 = 1;
    v6 = 0;
LABEL_11:
    if ( v50 )
    {
      _m_prefetchw(&CmpCallbackListLock);
      if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v19 = CmpCallbackListLock - 16;
      else
        v19 = 0LL;
      if ( (CmpCallbackListLock & 2) != 0
        || (v20 = CmpCallbackListLock,
            v20 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpCallbackListLock,
                     v19,
                     CmpCallbackListLock)) )
      {
        ExfReleasePushLock(&CmpCallbackListLock, v14);
      }
      KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v18 = v51;
    }
    v9 = v52;
    CurrentThread = v54;
  }
  else
  {
    v17 = (_SLIST_ENTRY *)a6;
    v18 = v51;
  }
  if ( !v6 )
  {
    if ( v49 == 1 )
    {
      memset(v56, 0, 0x38uLL);
      v24 = v56;
      v52 = v56;
      a1 = v57;
      if ( ((v57 - 27) & 0xFFFFFFFD) != 0 )
      {
        v56[0] = a5;
      }
      else
      {
        if ( v18 == -1073740541 )
          v46 = **(_QWORD **)(a2 + 72);
        else
          v46 = 0LL;
        v56[0] = v46;
      }
      v47 = v18;
      if ( v18 == -1073740541 )
        v47 = 0;
      LODWORD(v56[1]) = v47;
      LODWORD(v56[3]) = v47;
      v56[2] = a2;
    }
    else
    {
      v24 = (_QWORD *)a2;
      v52 = (_QWORD *)a2;
    }
    while ( v17->Next != v17 )
    {
      v34 = (_SLIST_ENTRY *)*((_QWORD *)&v17->Next + 1);
      v55 = v34;
      v35 = (_SLIST_ENTRY **)*((_QWORD *)&v34->Next + 1);
      if ( v34->Next != v17 || *v35 != v34 )
        __fastfail(3u);
      *((_QWORD *)&v17->Next + 1) = v35;
      *v35 = v17;
      v53 = (_SLIST_ENTRY *)*((_QWORD *)&v34[1].Next + 1);
      v36 = v53;
      v24[4] = v34[2].Next;
      CmpCallbackFillObjectContext(a1, v24, &v36[1].Next + 1);
      v51 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _QWORD *))&v36[2].Next + 1))(v36[2].Next, (int)a1, v24);
      v37 = (PVOID *)CurrentThread[1].WaitBlock[0].Object;
      if ( v37 )
        CurrentThread[1].WaitBlock[0].Object = *v37;
      v38 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v38 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v38 )
        ExFreePoolWithTag(v34, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v34);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v36[1]) == 0x80000000 )
      {
        _InterlockedOr(v48, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v51 == -1073740541 )
        *((_DWORD *)v24 + 2) = *((_DWORD *)v24 + 6);
      v18 = 0;
      v51 = 0;
    }
    v9 = v52;
  }
  if ( v49 == 1 )
  {
    if ( v9 )
    {
      v18 = *((_DWORD *)v9 + 6);
      if ( v18 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v18;
}
