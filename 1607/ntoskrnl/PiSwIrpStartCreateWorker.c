/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x1404880D0
 * Callers:
 *     PiSwIrpStartCreate @ 0x140488374 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x140645A68 (PiSwStartCreate.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     IoInvalidateDeviceRelations @ 0x140085F2C (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiSwFindPdoAssociation @ 0x1403F0518 (PiSwFindPdoAssociation.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwBusRelationRemove @ 0x140483D54 (PiSwBusRelationRemove.c)
 *     PiSwPnPInfoFree @ 0x140483E58 (PiSwPnPInfoFree.c)
 *     PiSwIrpCleanup @ 0x1404868C8 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x1404869A8 (PiSwDeviceDereference.c)
 *     PiSwFreeInterfaceList @ 0x1404878CC (PiSwFreeInterfaceList.c)
 *     PiSwValidateCreateData @ 0x1404878E8 (PiSwValidateCreateData.c)
 *     PiSwDeviceCreate @ 0x140487BA0 (PiSwDeviceCreate.c)
 *     PiSwInstanceInfoInit @ 0x140487C18 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x140487C98 (PiSwPnPInfoInit.c)
 *     PnpCopyDevPropertyArray @ 0x140487E24 (PnpCopyDevPropertyArray.c)
 *     PiSwBusRelationAdd @ 0x140487F84 (PiSwBusRelationAdd.c)
 *     PnpFreeDevPropertyArray @ 0x1404E56C0 (PnpFreeDevPropertyArray.c)
 *     PiSwPropertySet @ 0x140510214 (PiSwPropertySet.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406456BC (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406458EC (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406459FC (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r14
  char v5; // r12
  int Data; // ebx
  void **inserted; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  struct _DEVICE_OBJECT *v22; // rax
  void *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 **v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // r8
  void *v29; // rcx
  __int64 v30; // r8
  void *Buffer; // [rsp+30h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  PVOID v33; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v35; // [rsp+A0h] [rbp+50h] BYREF
  _QWORD *v36; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  v36 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  Data = PiSwValidateCreateData(a1);
  if ( Data < 0 )
    goto LABEL_29;
  PiSwLock();
  if ( !a2 )
    goto LABEL_94;
  v3 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) )
    Data = -1073741637;
  if ( Data >= 0 )
  {
LABEL_94:
    Data = PiSwDeviceCreate(&Buffer);
    if ( Data >= 0 )
    {
      Data = PiSwInstanceInfoInit((__int64)Buffer + 8, a1);
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
        v9 = *inserted;
        v36 = v9;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v9);
          Data = PiSwPnPInfoInit((__int64)(v36 + 3), a1);
          if ( Data < 0 )
            goto LABEL_42;
          *((_DWORD *)v36 + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            v36[19] = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
            v11 = (void *)v36[19];
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
                   (_DWORD *)v36 + 44,
                   (PVOID *)v36 + 21);
          if ( Data < 0 || (Data = PiSwBusRelationAdd(*(const wchar_t **)(a1 + 8), (__int64)v36), Data < 0) )
          {
LABEL_42:
            if ( NewElement )
            {
              RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &v36);
              PiSwDeviceDereference(v36);
              if ( v36[14] )
                PiSwBusRelationRemove(v36);
            }
            goto LABEL_27;
          }
LABEL_16:
          v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(v36[14]);
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
              v36[18] = a2;
              *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
            }
            else
            {
              Data = RtlStringCbCopyW(
                       *(NTSTRSAFE_PWSTR *)(a2 + 24),
                       *(unsigned int *)(v3 + 8),
                       (NTSTRSAFE_PCWSTR)v36[10]);
              if ( Data < 0 )
                goto LABEL_42;
              Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), &pcbLength);
              if ( Data < 0 )
                goto LABEL_42;
            }
          }
          *((_DWORD *)v36 + 1) |= 1u;
          if ( a2 )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) = v36;
            v36 = 0LL;
          }
          if ( v4 )
            IoInvalidateDeviceRelations(v4, SingleBusRelations);
          goto LABEL_26;
        }
        _InterlockedIncrement((volatile signed __int32 *)v9);
        v16 = v36;
        v17 = *((_DWORD *)v36 + 1);
        if ( (v17 & 1) != 0 )
        {
          Data = -1073741771;
          goto LABEL_27;
        }
        if ( (v17 & 2) == 0 )
        {
          v18 = v36[15];
          if ( v18 && (*(_DWORD *)(*(_QWORD *)(v18 + 64) + 8LL) & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v36, a1) )
            {
              Data = PnpCopyDevPropertyArray(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v19, &v35, &v33);
              if ( Data < 0 )
                goto LABEL_27;
              v20 = v36;
              v21 = v36[21];
              if ( v21 )
              {
                PnpFreeDevPropertyArray(*((unsigned int *)v36 + 44), v21, 1466986064LL);
                v20 = v36;
              }
              *((_DWORD *)v20 + 44) = v35;
              v36[21] = v33;
              goto LABEL_18;
            }
            v16 = v36;
          }
          if ( v16[11] )
          {
            PiSwQueuedCreateInfoFree(v16[11]);
            v36[11] = 0LL;
            v16 = v36;
          }
          Data = PiSwQueuedCreateInfoCreate(v16 + 11, a1);
          if ( Data < 0 )
            goto LABEL_27;
          *((_DWORD *)v36 + 1) |= 2u;
          goto LABEL_16;
        }
        v22 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(v36[14]);
        v4 = v22;
        if ( v22 && PiSwFindPdoAssociation((__int64)v36, (__int64)v22, 1) )
        {
          ObfDereferenceObject(v23);
          v4 = 0LL;
          Data = PiSwQueuedCreateInfoCreate(v36 + 11, a1);
          if ( Data < 0 )
            goto LABEL_27;
          goto LABEL_17;
        }
        PiSwBusRelationRemove(v36);
        v24 = v36;
        if ( v36[10] )
        {
          ExFreePoolWithTag((PVOID)v36[10], 0x57706E50u);
          v25 = v36;
          v36[9] = 0LL;
          v25[10] = 0LL;
          v24 = v36;
        }
        PiSwPnPInfoFree((__int64)(v24 + 3));
        v26 = (__int64 **)v36;
        if ( v36[19] )
        {
          ExFreePoolWithTag((PVOID)v36[19], 0x57706E50u);
          v36[19] = 0LL;
          *((_DWORD *)v36 + 40) = 0;
          v26 = (__int64 **)v36;
        }
        v27 = v26[21];
        if ( v27 )
        {
          PnpFreeDevPropertyArray(*((unsigned int *)v26 + 44), v27, 1466986064LL);
          *((_DWORD *)v36 + 44) = 0;
          v36[21] = 0LL;
          v26 = (__int64 **)v36;
        }
        PiSwFreeInterfaceList(v26 + 23);
        Data = PiSwPnPInfoInit((__int64)(v36 + 3), a1);
        if ( Data < 0 )
          goto LABEL_27;
        *((_DWORD *)v36 + 40) = *(_DWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 96) )
        {
          v36[19] = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
          v29 = (void *)v36[19];
          if ( !v29 )
          {
            Data = -1073741670;
            goto LABEL_27;
          }
          memmove(v29, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
        }
        Data = PnpCopyDevPropertyArray(
                 *(_DWORD *)(a1 + 104),
                 *(_QWORD *)(a1 + 112),
                 v28,
                 (_DWORD *)v36 + 44,
                 (PVOID *)v36 + 21);
        if ( Data >= 0 )
        {
          Data = PiSwBusRelationAdd(*(const wchar_t **)(a1 + 8), (__int64)v36);
          if ( Data >= 0 )
          {
            *((_DWORD *)v36 + 1) &= ~2u;
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  if ( Data >= 0 && !v5 )
  {
    v30 = *(_QWORD *)(a1 + 112);
    if ( v30 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v30, *(unsigned int *)(a1 + 104));
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
    *((_DWORD *)v36 + 45) = 1;
    PiSwIrpCleanup((__int64)v36);
  }
LABEL_33:
  if ( v36 )
    PiSwDeviceDereference(v36);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
