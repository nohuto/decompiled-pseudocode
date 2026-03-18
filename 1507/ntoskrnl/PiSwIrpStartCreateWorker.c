/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x14045BC94
 * Callers:
 *     PiSwIrpStartCreate @ 0x14045A93C (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x14069132C (PiSwStartCreate.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     IoInvalidateDeviceRelations @ 0x140026498 (IoInvalidateDeviceRelations.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400D0A24 (RtlInsertElementGenericTableAvl.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     PiSwValidateCreateData @ 0x14045AA24 (PiSwValidateCreateData.c)
 *     PiSwDeviceCreate @ 0x14045ACDC (PiSwDeviceCreate.c)
 *     PiSwInstanceInfoInit @ 0x14045AD54 (PiSwInstanceInfoInit.c)
 *     PnpCopyDevPropertyArray @ 0x14045B858 (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x14045B9B8 (PiSwPnPInfoInit.c)
 *     PiSwBusRelationAdd @ 0x14045BB44 (PiSwBusRelationAdd.c)
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwIrpCleanup @ 0x140539078 (PiSwIrpCleanup.c)
 *     PiSwBusRelationRemove @ 0x140539D58 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140539DD0 (PiSwDeviceDereference.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140690F40 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406911C0 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406912C0 (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r15
  char v5; // r14
  int Data; // ebx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 **inserted; // rax
  volatile signed __int32 *v10; // rax
  __int64 v11; // r8
  void *v12; // rcx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  char *v21; // rdx
  __int64 v22; // r8
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  PVOID v25; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v27; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v28; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  v28 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  Data = PiSwValidateCreateData(a1);
  if ( Data < 0 )
    goto LABEL_31;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 184);
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) )
      Data = -1073741637;
    if ( Data < 0 )
      goto LABEL_27;
  }
  Data = PiSwDeviceCreate(&Buffer);
  if ( Data < 0 )
    goto LABEL_27;
  Data = PiSwInstanceInfoInit((PVOID *)(Buffer + 8), a1);
  if ( Data < 0 )
    goto LABEL_27;
  inserted = (volatile signed __int32 **)RtlInsertElementGenericTableAvl(
                                           &PiSwDeviceInstanceTable,
                                           &Buffer,
                                           8u,
                                           &NewElement);
  if ( !inserted )
  {
    Data = -1073741670;
LABEL_26:
    if ( Data >= 0 )
      goto LABEL_27;
    goto LABEL_44;
  }
  v10 = *inserted;
  v28 = v10;
  if ( NewElement )
  {
    Buffer = 0LL;
    _InterlockedIncrement(v10);
    Data = PiSwPnPInfoInit((__int64)(v28 + 6), a1);
    if ( Data < 0 )
      goto LABEL_44;
    *((_DWORD *)v28 + 40) = *(_DWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 96) )
    {
      *((_QWORD *)v28 + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
      v12 = (void *)*((_QWORD *)v28 + 19);
      if ( !v12 )
      {
        Data = -1073741670;
        goto LABEL_44;
      }
      memmove(v12, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
    }
    Data = PnpCopyDevPropertyArray(
             *(_DWORD *)(a1 + 104),
             *(_QWORD *)(a1 + 112),
             v11,
             (_DWORD *)v28 + 44,
             (PVOID *)v28 + 21);
    if ( Data < 0 || (Data = PiSwBusRelationAdd(*(const wchar_t **)(a1 + 8), (__int64)v28), Data < 0) )
    {
LABEL_44:
      if ( NewElement )
      {
        RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &v28);
        PiSwDeviceDereference(v28);
        if ( *((_QWORD *)v28 + 14) )
          PiSwBusRelationRemove();
      }
      goto LABEL_27;
    }
    goto LABEL_16;
  }
  _InterlockedIncrement(v10);
  v16 = (__int64)v28;
  v17 = *((_DWORD *)v28 + 1);
  if ( (v17 & 1) != 0 )
  {
    Data = -1073741771;
    goto LABEL_27;
  }
  if ( (v17 & 2) == 0 )
  {
    v18 = *((_QWORD *)v28 + 15);
    if ( v18 && (*(_DWORD *)(*(_QWORD *)(v18 + 64) + 8LL) & 2) == 0 )
    {
      if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v28, a1) )
      {
        Data = PnpCopyDevPropertyArray(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v19, &v27, &v25);
        if ( Data >= 0 )
        {
          v20 = (__int64)v28;
          v21 = (char *)*((_QWORD *)v28 + 21);
          if ( v21 )
          {
            PnpFreeDevPropertyArray(*((_DWORD *)v28 + 44), v21, 0x57706E50u);
            v20 = (__int64)v28;
          }
          *(_DWORD *)(v20 + 176) = v27;
          *((_QWORD *)v28 + 21) = v25;
          goto LABEL_18;
        }
        goto LABEL_27;
      }
      v16 = (__int64)v28;
    }
    if ( *(_QWORD *)(v16 + 88) )
    {
      PiSwQueuedCreateInfoFree(*(_QWORD *)(v16 + 88));
      *((_QWORD *)v28 + 11) = 0LL;
      v16 = (__int64)v28;
    }
    Data = PiSwQueuedCreateInfoCreate(v16 + 88, a1);
    if ( Data < 0 )
      goto LABEL_27;
    *((_DWORD *)v28 + 1) |= 2u;
LABEL_16:
    v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(*((_QWORD *)v28 + 14));
LABEL_17:
    v5 = 1;
LABEL_18:
    if ( a2 )
    {
      if ( v5 )
      {
        _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
        if ( *(_BYTE *)(a2 + 68) )
        {
          Data = -1073741536;
          goto LABEL_44;
        }
        *((_QWORD *)v28 + 18) = a2;
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      }
      else
      {
        Data = RtlStringCbCopyW(
                 *(NTSTRSAFE_PWSTR *)(a2 + 24),
                 *(unsigned int *)(v3 + 8),
                 *((NTSTRSAFE_PCWSTR *)v28 + 10));
        if ( Data < 0 )
          goto LABEL_44;
        Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), &pcbLength);
        if ( Data < 0 )
          goto LABEL_44;
      }
    }
    *((_DWORD *)v28 + 1) |= 1u;
    if ( a2 )
    {
      *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) = v28;
      v28 = 0LL;
    }
    if ( v4 )
      IoInvalidateDeviceRelations(v4, SingleBusRelations);
    goto LABEL_26;
  }
  Data = PiSwQueuedCreateInfoCreate(v28 + 22, a1);
  if ( Data >= 0 )
    goto LABEL_17;
LABEL_27:
  ExReleaseResourceLite(&PiSwLockObj);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( Data >= 0 && !v5 )
  {
    v22 = *(_QWORD *)(a1 + 112);
    if ( v22 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v22, *(unsigned int *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_31:
  if ( a2 )
  {
    if ( Data < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        Data = 259;
        goto LABEL_35;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    *((_DWORD *)v28 + 45) = 1;
    PiSwIrpCleanup(v28);
  }
LABEL_35:
  if ( v28 )
    PiSwDeviceDereference(v28);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
