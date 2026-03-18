/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x1404E42CC
 * Callers:
 *     PiSwIrpStartCreate @ 0x1404E3F68 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x140611568 (PiSwStartCreate.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInsertElementGenericTableAvl @ 0x140090468 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     IoInvalidateDeviceRelations @ 0x1400D1570 (IoInvalidateDeviceRelations.c)
 *     RtlStringCbLengthW @ 0x140103D90 (RtlStringCbLengthW.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwBusRelationRemove @ 0x1404944F0 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140494688 (PiSwDeviceDereference.c)
 *     PiSwIrpCleanup @ 0x1404946BC (PiSwIrpCleanup.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwBusRelationAdd @ 0x1404E4570 (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x1404E46C0 (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x1404E4820 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1404E4A1C (PiSwInstanceInfoInit.c)
 *     PiSwDeviceCreate @ 0x1404E56B8 (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x1404E5730 (PiSwValidateCreateData.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406111CC (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406113FC (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406114FC (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r15
  char v5; // r14
  NTSTATUS Data; // ebx
  void **inserted; // rax
  volatile signed __int32 *v9; // rax
  int v10; // r8d
  void *v11; // rcx
  char *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v16; // r8d
  char *v17; // rcx
  char *v18; // rdx
  __int64 v19; // r8
  char *Buffer; // [rsp+30h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v24; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v25; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_29;
  PiSwLock();
  if ( !a2 )
    goto LABEL_77;
  v3 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) )
    Data = -1073741637;
  if ( Data >= 0 )
  {
LABEL_77:
    Data = PiSwDeviceCreate(&Buffer);
    if ( Data >= 0 )
    {
      Data = PiSwInstanceInfoInit(Buffer + 8, a1);
      if ( Data >= 0 )
      {
        inserted = (void **)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
        if ( !inserted )
        {
          Data = -1073741670;
LABEL_26:
          if ( Data >= 0 )
            goto LABEL_27;
          goto LABEL_42;
        }
        v9 = (volatile signed __int32 *)*inserted;
        v25 = v9;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement(v9);
          Data = PiSwPnPInfoInit(v25 + 6, a1);
          if ( Data < 0 )
            goto LABEL_42;
          *((_DWORD *)v25 + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)v25 + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
            v11 = (void *)*((_QWORD *)v25 + 19);
            if ( !v11 )
            {
              Data = -1073741670;
              goto LABEL_42;
            }
            memmove(v11, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          Data = PnpCopyDevPropertyArray(
                   *(_DWORD *)(a1 + 104),
                   *(_QWORD *)(a1 + 112),
                   v10,
                   (int)v25 + 176,
                   (__int64)(v25 + 42));
          if ( Data < 0 || (Data = PiSwBusRelationAdd(*(_QWORD *)(a1 + 8)), Data < 0) )
          {
LABEL_42:
            if ( NewElement )
            {
              RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &v25);
              PiSwDeviceDereference((void *)v25);
              if ( *((_QWORD *)v25 + 14) )
                PiSwBusRelationRemove(v25);
            }
            goto LABEL_27;
          }
        }
        else
        {
          _InterlockedIncrement(v9);
          v13 = (char *)v25;
          v14 = *((_DWORD *)v25 + 1);
          if ( (v14 & 1) != 0 )
          {
            Data = -1073741771;
            goto LABEL_27;
          }
          if ( (v14 & 2) != 0 )
          {
            Data = PiSwQueuedCreateInfoCreate(v25 + 22, a1);
            if ( Data < 0 )
              goto LABEL_27;
            goto LABEL_17;
          }
          v15 = *((_QWORD *)v25 + 15);
          if ( v15 && (*(_DWORD *)(*(_QWORD *)(v15 + 64) + 8LL) & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v25, a1) )
            {
              Data = PnpCopyDevPropertyArray(
                       *(_DWORD *)(a1 + 104),
                       *(_QWORD *)(a1 + 112),
                       v16,
                       (unsigned int)&v24,
                       (__int64)&v22);
              if ( Data < 0 )
                goto LABEL_27;
              v17 = (char *)v25;
              v18 = (char *)*((_QWORD *)v25 + 21);
              if ( v18 )
              {
                PnpFreeDevPropertyArray(*((_DWORD *)v25 + 44), v18, 0x57706E50u);
                v17 = (char *)v25;
              }
              *((_DWORD *)v17 + 44) = v24;
              *((_QWORD *)v25 + 21) = v22;
              goto LABEL_18;
            }
            v13 = (char *)v25;
          }
          if ( *((_QWORD *)v13 + 11) )
          {
            PiSwQueuedCreateInfoFree(*((_QWORD *)v13 + 11));
            *((_QWORD *)v25 + 11) = 0LL;
            v13 = (char *)v25;
          }
          Data = PiSwQueuedCreateInfoCreate(v13 + 88, a1);
          if ( Data < 0 )
            goto LABEL_27;
          *((_DWORD *)v25 + 1) |= 2u;
        }
        v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(*((_QWORD *)v25 + 14));
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
              goto LABEL_42;
            }
            *((_QWORD *)v25 + 18) = a2;
            *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
          }
          else
          {
            Data = RtlStringCbCopyW(
                     *(NTSTRSAFE_PWSTR *)(a2 + 24),
                     *(unsigned int *)(v3 + 8),
                     *((NTSTRSAFE_PCWSTR *)v25 + 10));
            if ( Data < 0 )
              goto LABEL_42;
            Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), &pcbLength);
            if ( Data < 0 )
              goto LABEL_42;
          }
        }
        *((_DWORD *)v25 + 1) |= 1u;
        if ( a2 )
        {
          *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) = v25;
          v25 = 0LL;
        }
        if ( v4 )
          IoInvalidateDeviceRelations(v4, SingleBusRelations);
        goto LABEL_26;
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Data >= 0 && !v5 )
  {
    v19 = *(_QWORD *)(a1 + 112);
    if ( v19 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v19, *(unsigned int *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_29:
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
        goto LABEL_33;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    *((_DWORD *)v25 + 45) = 1;
    PiSwIrpCleanup((__int64)v25);
  }
LABEL_33:
  if ( v25 )
    PiSwDeviceDereference((void *)v25);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
