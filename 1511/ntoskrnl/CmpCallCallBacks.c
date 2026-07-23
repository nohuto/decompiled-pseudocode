/*
 * XREFs of CmpCallCallBacks @ 0x140409130
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     NtSetValueKey @ 0x1403F2FD0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtEnumerateValueKey @ 0x140423C60 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140424400 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     NtRenameKey @ 0x1405DC010 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405DC458 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpFreeCallbackContext @ 0x1401A9E0C (CmpFreeCallbackContext.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x140409770 (CmpCallbackFillObjectContext.c)
 *     CmpFatalFilter @ 0x1405DD600 (CmpFatalFilter.c)
 */

__int64 __fastcall CmpCallCallBacks(unsigned int a1, __int64 a2, char a3, unsigned int a4, __int64 a5, __int64 a6)
{
  char v6; // r14
  _QWORD *v9; // rax
  struct _KTHREAD *CurrentThread; // r12
  PVOID Object; // rax
  __int64 *v12; // r12
  struct _KTHREAD *v13; // rax
  __int64 v14; // rsi
  _SLIST_ENTRY *v15; // r13
  int v16; // esi
  signed __int64 v17; // rcx
  ULONG_PTR v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  _QWORD *v22; // r14
  _SLIST_ENTRY *v23; // rbx
  _SLIST_ENTRY **v24; // rax
  _SLIST_ENTRY *v25; // rsi
  PVOID *v26; // rax
  unsigned int v27; // ecx
  signed __int64 v28; // rcx
  ULONG_PTR v29; // rtt
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v33; // rdx
  _SLIST_ENTRY **v34; // rax
  int v35; // eax
  struct _KTHREAD *v36; // rax
  __int64 v37; // rsi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v39; // rax
  PVOID *v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  signed __int32 v43[8]; // [rsp+0h] [rbp-D8h] BYREF
  char v44; // [rsp+20h] [rbp-B8h]
  char v45; // [rsp+21h] [rbp-B7h]
  int v46; // [rsp+24h] [rbp-B4h]
  _QWORD *v47; // [rsp+30h] [rbp-A8h]
  _SLIST_ENTRY *v48; // [rsp+38h] [rbp-A0h]
  struct _KTHREAD *v49; // [rsp+40h] [rbp-98h]
  void *v50; // [rsp+48h] [rbp-90h]
  _QWORD v51[15]; // [rsp+60h] [rbp-78h] BYREF

  v6 = a3;
  v46 = 0;
  v9 = 0LL;
  v47 = 0LL;
  v44 = 0;
  CurrentThread = KeGetCurrentThread();
  v49 = CurrentThread;
  if ( a3 == 1 )
  {
    Object = CurrentThread[1].WaitBlock[0].Object;
    if ( Object )
      v12 = (__int64 *)*((_QWORD *)Object + 1);
    else
      v12 = &CallbackListHead;
    v45 = 1;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v14, (ULONG_PTR)&CmpCallbackListLock);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = (_SLIST_ENTRY *)a6;
    while ( 1 )
    {
      do
      {
        v12 = (__int64 *)*v12;
        v50 = v12;
        if ( v12 == &CallbackListHead )
          goto LABEL_10;
      }
      while ( *((int *)v12 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
      _m_prefetchw(&CmpCallbackListLock);
      if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v28 = CmpCallbackListLock - 16;
      else
        v28 = 0LL;
      if ( (CmpCallbackListLock & 2) != 0
        || (v29 = CmpCallbackListLock,
            v29 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpCallbackListLock,
                     v28,
                     CmpCallbackListLock)) )
      {
        ExfReleasePushLock(&CmpCallbackListLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
      v30 = KeGetCurrentThread();
      v31 = v30->KernelApcDisable + 1;
      v30->KernelApcDisable = v31;
      if ( !v31
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
        && !v30->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v30);
      }
      v45 = 0;
      PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !PoolWithTag )
        PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v48 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v12;
      PoolWithTag[2].Next = 0LL;
      v33 = v49;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)v49[1].WaitBlock[0].Object;
      v33[1].WaitBlock[0].Object = &PoolWithTag[1];
      v34 = *(_SLIST_ENTRY ***)(a6 + 8);
      PoolWithTag->Next = (_SLIST_ENTRY *)a6;
      *((_QWORD *)&PoolWithTag->Next + 1) = v34;
      if ( *v34 != (_SLIST_ENTRY *)a6 )
        __fastfail(3u);
      *v34 = PoolWithTag;
      *(_QWORD *)(a6 + 8) = PoolWithTag;
      CmpCallbackFillObjectContext(a1, a2, v12 + 3);
      v35 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v12[5])(v12[4], (int)a1, a2);
      v46 = v35;
      if ( a1 == 14 )
      {
        v46 = 0;
      }
      else if ( v35 < 0 )
      {
        Next = PoolWithTag->Next;
        v39 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v39 != PoolWithTag )
          __fastfail(3u);
        *v39 = Next;
        *((_QWORD *)&Next->Next + 1) = v39;
        v40 = (PVOID *)v49[1].WaitBlock[0].Object;
        if ( v40 )
          v49[1].WaitBlock[0].Object = *v40;
        CmpFreeCallbackContext(PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
        {
          _InterlockedOr(v43, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v6 = 0;
        v44 = 1;
LABEL_10:
        v16 = v46;
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
LABEL_53:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_53;
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
      v45 = 1;
      v36 = KeGetCurrentThread();
      --v36->KernelApcDisable;
      v37 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v37, (ULONG_PTR)&CmpCallbackListLock);
      if ( v37 )
        *(_BYTE *)(v37 + 26) |= 1u;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
    {
      _InterlockedOr(v43, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v16 = -1073741670;
    v46 = -1073741670;
    v44 = 1;
    v6 = 0;
LABEL_11:
    if ( v45 )
    {
      _m_prefetchw(&CmpCallbackListLock);
      if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v17 = CmpCallbackListLock - 16;
      else
        v17 = 0LL;
      if ( (CmpCallbackListLock & 2) != 0
        || (v18 = CmpCallbackListLock,
            v18 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpCallbackListLock,
                     v17,
                     CmpCallbackListLock)) )
      {
        ExfReleasePushLock(&CmpCallbackListLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v19);
      }
      v16 = v46;
    }
    v9 = v47;
    CurrentThread = v49;
  }
  else
  {
    v15 = (_SLIST_ENTRY *)a6;
    v16 = v46;
  }
  if ( !v6 )
  {
    if ( v44 == 1 )
    {
      memset(v51, 0, 0x38uLL);
      v22 = v51;
      v47 = v51;
      a1 = a4;
      if ( ((a4 - 27) & 0xFFFFFFFD) != 0 )
      {
        v51[0] = a5;
      }
      else
      {
        if ( v16 == -1073740541 )
          v41 = **(_QWORD **)(a2 + 72);
        else
          v41 = 0LL;
        v51[0] = v41;
      }
      v42 = v16;
      if ( v16 == -1073740541 )
        v42 = 0;
      LODWORD(v51[1]) = v42;
      LODWORD(v51[3]) = v42;
      v51[2] = a2;
    }
    else
    {
      v22 = (_QWORD *)a2;
      v47 = (_QWORD *)a2;
    }
    while ( v15->Next != v15 )
    {
      v23 = (_SLIST_ENTRY *)*((_QWORD *)&v15->Next + 1);
      v50 = v23;
      v24 = (_SLIST_ENTRY **)*((_QWORD *)&v23->Next + 1);
      if ( v23->Next != v15 || *v24 != v23 )
        __fastfail(3u);
      *((_QWORD *)&v15->Next + 1) = v24;
      *v24 = v15;
      v48 = (_SLIST_ENTRY *)*((_QWORD *)&v23[1].Next + 1);
      v25 = v48;
      v22[4] = v23[2].Next;
      CmpCallbackFillObjectContext(a1, v22, &v25[1].Next + 1);
      v46 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _QWORD *))&v25[2].Next + 1))(v25[2].Next, (int)a1, v22);
      v26 = (PVOID *)CurrentThread[1].WaitBlock[0].Object;
      if ( v26 )
        CurrentThread[1].WaitBlock[0].Object = *v26;
      v27 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v27 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v27 )
        ExFreePoolWithTag(v23, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v23);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v25[1]) == 0x80000000 )
      {
        _InterlockedOr(v43, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v46 == -1073740541 )
        *((_DWORD *)v22 + 2) = *((_DWORD *)v22 + 6);
      v16 = 0;
      v46 = 0;
    }
    v9 = v47;
  }
  if ( v44 == 1 )
  {
    if ( v9 )
    {
      v16 = *((_DWORD *)v9 + 6);
      if ( v16 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v16;
}
