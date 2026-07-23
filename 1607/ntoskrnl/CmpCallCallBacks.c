/*
 * XREFs of CmpCallCallBacks @ 0x1404518D0
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140403170 (CmpSecurityMethod.c)
 *     CmpQueryKeyName @ 0x140403390 (CmpQueryKeyName.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1404F2CE0 (NtSetInformationKey.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405FA3C0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405FA624 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405FA8B4 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAAF0 (NtSaveKeyEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpFreeCallbackContext @ 0x1401B30B0 (CmpFreeCallbackContext.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x1404522A0 (CmpCallbackFillObjectContext.c)
 *     VrpShouldOperateOnCall @ 0x140463650 (VrpShouldOperateOnCall.c)
 *     CmpFatalFilter @ 0x1405FB530 (CmpFatalFilter.c)
 *     VrpFreeKeyContext @ 0x140612FBC (VrpFreeKeyContext.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14061563C (VrpPostOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x1406158DC (VrpPostQueryKey.c)
 *     VrpPostUnloadKey @ 0x140615C7C (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x140615CEC (VrpPreFlushKey.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x140616498 (VrpPreOpenOrCreate.c)
 *     VrpPreQueryKeyName @ 0x1406167BC (VrpPreQueryKeyName.c)
 *     VrpPreUnloadKey @ 0x1406169FC (VrpPreUnloadKey.c)
 */

__int64 __fastcall CmpCallCallBacks(
        unsigned int a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        _SLIST_ENTRY *a6)
{
  unsigned int v6; // r14d
  _QWORD *v9; // rax
  struct _KTHREAD *CurrentThread; // rcx
  PVOID Object; // rax
  __int64 *v12; // r14
  struct _KTHREAD *v13; // rax
  __int64 v14; // rsi
  __int64 i; // r15
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v21; // rdx
  _SLIST_ENTRY **v22; // rax
  EX_CALLBACK_FUNCTION *v23; // rax
  int Key; // eax
  __int64 v25; // rcx
  char v26; // r14
  struct _KTHREAD *v27; // rax
  __int64 v28; // rsi
  char v29; // r15
  int v30; // esi
  signed __int64 v31; // rcx
  ULONG_PTR v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  __int64 v36; // rcx
  _QWORD *v37; // r12
  _SLIST_ENTRY *v38; // rbx
  _SLIST_ENTRY **v39; // rax
  _SLIST_ENTRY *v40; // r14
  unsigned int v41; // esi
  EX_CALLBACK_FUNCTION *v42; // rax
  int KeyName; // eax
  __int64 v44; // rcx
  PVOID *v45; // rax
  unsigned int v46; // ecx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v48; // rax
  PVOID *v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  signed __int32 v52[8]; // [rsp+0h] [rbp-148h] BYREF
  char v53; // [rsp+20h] [rbp-128h]
  char v54; // [rsp+21h] [rbp-127h]
  int v55; // [rsp+24h] [rbp-124h]
  unsigned int v56; // [rsp+28h] [rbp-120h]
  _QWORD *v57; // [rsp+30h] [rbp-118h]
  unsigned int v58; // [rsp+38h] [rbp-110h]
  __int64 v59; // [rsp+40h] [rbp-108h] BYREF
  __int64 v60; // [rsp+48h] [rbp-100h] BYREF
  _SLIST_ENTRY *v61; // [rsp+50h] [rbp-F8h]
  unsigned int v62; // [rsp+58h] [rbp-F0h]
  __int64 v63; // [rsp+60h] [rbp-E8h]
  struct _KTHREAD *v64; // [rsp+68h] [rbp-E0h]
  _SLIST_ENTRY *v65; // [rsp+70h] [rbp-D8h]
  _SLIST_ENTRY *v66; // [rsp+78h] [rbp-D0h]
  __int64 v67; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v68[5]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v69[7]; // [rsp+B0h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+E8h] [rbp-60h] BYREF
  GUID v71; // [rsp+F8h] [rbp-50h] BYREF

  v6 = a4;
  v56 = a4;
  v62 = a1;
  v65 = (_SLIST_ENTRY *)a2;
  v58 = a4;
  v66 = a6;
  v55 = 0;
  v9 = 0LL;
  v57 = 0LL;
  v54 = 0;
  CurrentThread = KeGetCurrentThread();
  v64 = CurrentThread;
  if ( a3 != 1 )
  {
    v30 = v55;
    v29 = a3;
    goto LABEL_62;
  }
  Object = CurrentThread[1].WaitBlock[0].Object;
  if ( Object )
    v12 = (__int64 *)*((_QWORD *)Object + 1);
  else
    v12 = &CallbackListHead;
  v53 = 1;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v14, (ULONG_PTR)&CmpCallbackListLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  for ( i = *v12; ; i = *(_QWORD *)i )
  {
    v63 = i;
    if ( (__int64 *)i == &CallbackListHead )
    {
      v26 = v53;
      v29 = 1;
LABEL_53:
      v30 = v55;
      goto LABEL_54;
    }
    if ( *(int *)(i + 16) < 0 )
      continue;
    _InterlockedIncrement((volatile signed __int32 *)(i + 16));
    _m_prefetchw(&CmpCallbackListLock);
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v16 = CmpCallbackListLock - 16;
    else
      v16 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v17 = CmpCallbackListLock,
          v17 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v16,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v18);
    }
    v53 = 0;
    PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
    if ( !PoolWithTag )
      PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
    v61 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *((_QWORD *)&PoolWithTag[1].Next + 1) = i;
    PoolWithTag[2].Next = 0LL;
    v21 = v64;
    PoolWithTag[1].Next = (_SLIST_ENTRY *)v64[1].WaitBlock[0].Object;
    v21[1].WaitBlock[0].Object = &PoolWithTag[1];
    v22 = (_SLIST_ENTRY **)*((_QWORD *)&a6->Next + 1);
    if ( *v22 != a6 )
      __fastfail(3u);
    PoolWithTag->Next = a6;
    *((_QWORD *)&PoolWithTag->Next + 1) = v22;
    *v22 = PoolWithTag;
    *((_QWORD *)&a6->Next + 1) = PoolWithTag;
    CmpCallbackFillObjectContext(a1, a2, i + 24);
    v68[1] = (int)a1;
    v23 = *(EX_CALLBACK_FUNCTION **)(i + 40);
    if ( v23 == RegistryCallback )
    {
      ActivityId.Data1 = 0;
      *(_QWORD *)&ActivityId.Data2 = 0LL;
      *(_DWORD *)&ActivityId.Data4[4] = 0;
      v59 = 0LL;
      v67 = 0LL;
      if ( a1 <= 0x31 && (unsigned int)VrpShouldOperateOnCall(a1, a2, &v67, &v59) )
      {
        EtwActivityIdControl(1u, &ActivityId);
        switch ( a1 )
        {
          case 0xEu:
            if ( *(_QWORD *)(a2 + 16) )
              VrpFreeKeyContext();
            Key = 0;
            break;
          case 0x14u:
            Key = VrpPostEnumerateKey(a2, v59);
            break;
          case 0x16u:
            Key = VrpPostQueryKey(a2);
            break;
          case 0x1Au:
          case 0x1Cu:
            Key = VrpPreOpenOrCreate(a2, v59);
            break;
          case 0x1Bu:
          case 0x1Du:
            Key = VrpPostOpenOrCreate(a2);
            break;
          case 0x1Eu:
            Key = VrpPreFlushKey(v25, v59);
            break;
          case 0x20u:
            Key = VrpPreLoadKey(a2, v59);
            break;
          case 0x22u:
            Key = VrpPreUnloadKey(a2, v59);
            break;
          case 0x23u:
            Key = VrpPostUnloadKey(a2, v59);
            break;
          case 0x28u:
            ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0x67655256u);
            Key = 0;
            break;
          case 0x2Fu:
            Key = VrpPreQueryKeyName(a2);
            break;
          default:
            goto LABEL_24;
        }
      }
      else
      {
LABEL_24:
        Key = 0;
      }
    }
    else
    {
      Key = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v23)(*(_QWORD *)(i + 32), (int)a1, a2);
    }
    v55 = Key;
    v26 = v53;
    if ( a1 == 14 )
    {
      v55 = 0;
      goto LABEL_41;
    }
    if ( Key < 0 )
    {
      Next = PoolWithTag->Next;
      v48 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
      if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v48 != PoolWithTag )
        __fastfail(3u);
      *v48 = Next;
      *((_QWORD *)&Next->Next + 1) = v48;
      v49 = (PVOID *)v64[1].WaitBlock[0].Object;
      if ( v49 )
        v64[1].WaitBlock[0].Object = *v49;
      CmpFreeCallbackContext(PoolWithTag);
      if ( _InterlockedDecrement((volatile signed __int32 *)(i + 16)) == 0x80000000 )
      {
        _InterlockedOr(v52, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      v29 = 0;
      v54 = 1;
      goto LABEL_53;
    }
LABEL_41:
    switch ( a1 )
    {
      case 0x1Cu:
LABEL_46:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
        *(_QWORD *)(a2 + 80) = 0LL;
        break;
      case 8u:
LABEL_103:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
        *(_QWORD *)(a2 + 48) = 0LL;
        break;
      case 7u:
LABEL_102:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
        *(_QWORD *)(a2 + 40) = 0LL;
        break;
      case 0xEu:
LABEL_45:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = 0LL;
        break;
      default:
        switch ( a1 )
        {
          case 0u:
          case 0x1Eu:
            goto LABEL_45;
          case 1u:
          case 5u:
          case 6u:
            goto LABEL_102;
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
            goto LABEL_103;
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
            goto LABEL_46;
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
            goto LABEL_47;
        }
        break;
    }
LABEL_47:
    v53 = 1;
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    v28 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v28, (ULONG_PTR)&CmpCallbackListLock);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
  }
  if ( _InterlockedDecrement((volatile signed __int32 *)(i + 16)) == 0x80000000 )
  {
    _InterlockedOr(v52, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  v30 = -1073741670;
  v55 = -1073741670;
  v54 = 1;
  v29 = 0;
  v26 = 0;
LABEL_54:
  if ( v26 )
  {
    _m_prefetchw(&CmpCallbackListLock);
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v31 = CmpCallbackListLock - 16;
    else
      v31 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v32 = CmpCallbackListLock,
          v32 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v31,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    v33 = KeGetCurrentThread();
    v34 = v33->KernelApcDisable + 1;
    v33->KernelApcDisable = v34;
    if ( !v34
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v33->ApcState.ApcListHead[0].Flink != &v33->152
      && !v33->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v33);
    }
    v30 = v55;
  }
  v9 = v57;
  v6 = v56;
LABEL_62:
  if ( !v29 )
  {
    if ( v54 == 1 )
    {
      memset(v69, 0, sizeof(v69));
      v37 = v69;
      v57 = v69;
      if ( ((v6 - 27) & 0xFFFFFFFD) != 0 )
      {
        v69[0] = a5;
      }
      else
      {
        if ( v30 == -1073740541 )
          v50 = **(_QWORD **)(a2 + 72);
        else
          v50 = 0LL;
        v69[0] = v50;
      }
      v51 = v30;
      if ( v30 == -1073740541 )
        v51 = 0;
      LODWORD(v69[1]) = v51;
      LODWORD(v69[3]) = v51;
      v69[2] = a2;
      v36 = v56;
    }
    else
    {
      v57 = (_QWORD *)a2;
      v36 = a1;
      v56 = a1;
      v58 = a1;
      v37 = (_QWORD *)a2;
    }
    while ( a6->Next != a6 )
    {
      v38 = (_SLIST_ENTRY *)*((_QWORD *)&a6->Next + 1);
      v65 = v38;
      v39 = (_SLIST_ENTRY **)*((_QWORD *)&v38->Next + 1);
      if ( v38->Next != a6 || *v39 != v38 )
        __fastfail(3u);
      *((_QWORD *)&a6->Next + 1) = v39;
      *v39 = a6;
      v61 = (_SLIST_ENTRY *)*((_QWORD *)&v38[1].Next + 1);
      v40 = v61;
      v37[4] = v38[2].Next;
      CmpCallbackFillObjectContext(v36, v37, &v40[1].Next + 1);
      v41 = v56;
      v68[3] = (int)v56;
      v42 = (EX_CALLBACK_FUNCTION *)*((_QWORD *)&v40[2].Next + 1);
      if ( v42 == RegistryCallback )
      {
        v71.Data1 = 0;
        *(_QWORD *)&v71.Data2 = 0LL;
        *(_DWORD *)&v71.Data4[4] = 0;
        v60 = 0LL;
        v68[0] = 0LL;
        if ( v56 <= 0x31 && (unsigned int)VrpShouldOperateOnCall(v56, v37, v68, &v60) )
        {
          EtwActivityIdControl(1u, &v71);
          switch ( v41 )
          {
            case 0xEu:
              if ( v37[2] )
                VrpFreeKeyContext();
              KeyName = 0;
              break;
            case 0x14u:
              KeyName = VrpPostEnumerateKey(v37, v60);
              break;
            case 0x16u:
              KeyName = VrpPostQueryKey(v37);
              break;
            case 0x1Au:
            case 0x1Cu:
              KeyName = VrpPreOpenOrCreate(v37, v60);
              break;
            case 0x1Bu:
            case 0x1Du:
              KeyName = VrpPostOpenOrCreate(v37);
              break;
            case 0x1Eu:
              KeyName = VrpPreFlushKey(v44, v60);
              break;
            case 0x20u:
              KeyName = VrpPreLoadKey(v37, v60);
              break;
            case 0x22u:
              KeyName = VrpPreUnloadKey(v37, v60);
              break;
            case 0x23u:
              KeyName = VrpPostUnloadKey(v37, v60);
              break;
            case 0x28u:
              ExFreePoolWithTag((PVOID)v37[1], 0x67655256u);
              KeyName = 0;
              break;
            case 0x2Fu:
              KeyName = VrpPreQueryKeyName(v37);
              break;
            default:
              goto LABEL_74;
          }
        }
        else
        {
LABEL_74:
          KeyName = 0;
        }
      }
      else
      {
        KeyName = ((__int64 (__fastcall *)(_SLIST_ENTRY *, _QWORD, _QWORD *))v42)(v40[2].Next, (int)v56, v37);
      }
      v55 = KeyName;
      v45 = (PVOID *)v64[1].WaitBlock[0].Object;
      if ( v45 )
        v64[1].WaitBlock[0].Object = *v45;
      v46 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v46 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v46 )
        ExFreePoolWithTag(v38, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v38);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v40[1]) == 0x80000000 )
      {
        _InterlockedOr(v52, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v55 == -1073740541 )
        *((_DWORD *)v37 + 2) = *((_DWORD *)v37 + 6);
      v30 = 0;
      v55 = 0;
      v36 = v56;
    }
    v9 = v57;
  }
  if ( v54 == 1 )
  {
    if ( v9 )
    {
      v30 = *((_DWORD *)v9 + 6);
      if ( v30 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v30;
}
