/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x1400F8D4C
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x1400F8D30 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x1401318A4 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x1401C88BC (IoAttachDeviceByPointer.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400F949C (IopGetDeviceAttachmentBase.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IoGetDiskDeviceObject @ 0x1401C8A4C (IoGetDiskDeviceObject.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1401C948C (IopIsKnownGoodLegacyFsFilter.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameString @ 0x1404BFAE4 (ObQueryNameString.c)
 *     IovAttachDeviceToDeviceStack @ 0x1407008E8 (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r12
  struct _DEVICE_OBJECT *v6; // r13
  PDEVICE_OBJECT AttachedDevice; // rbx
  char v8; // r15
  struct _DEVICE_OBJECT *v9; // r14
  unsigned __int64 DeviceType; // rcx
  __int64 v11; // rax
  PVOID *DeviceNode; // rcx
  unsigned int v13; // eax
  int v14; // r8d
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  int *v22; // r15
  PDEVICE_OBJECT v23; // r13
  NTSTATUS v24; // r14d
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  bool v26; // sf
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  char v33; // [rsp+30h] [rbp-D0h]
  KIRQL OldIrql; // [rsp+31h] [rbp-CFh]
  ULONG Length; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v37; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v38; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // [rsp+50h] [rbp-B0h]
  struct _DEVICE_OBJECT *v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v43; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+88h] [rbp-78h]
  int v47; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  __int16 *v52; // [rsp+B0h] [rbp-50h]
  int v53; // [rsp+B8h] [rbp-48h]
  int v54; // [rsp+BCh] [rbp-44h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+CCh] [rbp-34h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+D0h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v41 = a2;
  v6 = a2;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack(a1, v6);
  AttachedDevice = IoGetAttachedDevice(v6);
  v8 = 0;
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase(v6);
  v9 = DeviceAttachmentBase;
  v33 = 0;
  DeviceType = DeviceAttachmentBase->DeviceType;
  if ( (unsigned int)DeviceType <= 0x35 )
  {
    v11 = 0x20000100100108LL;
    if ( _bittest64(&v11, DeviceType) )
    {
      if ( (DeviceAttachmentBase->Flags & 0x10000000) != 0 || IopBlockLegacyFsFilters )
      {
        v8 = 1;
        if ( (unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL) )
        {
          v8 = 0;
        }
        else
        {
          ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
          v33 = 1;
        }
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || AttachedDevice->StackSize >= 0x7Du
    || v8 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = AttachedDevice;
    *(_BYTE *)(a1 + 76) = AttachedDevice->StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    ++AttachedDevice->Spare1;
    *(_QWORD *)(v3 + 48) = AttachedDevice;
    DeviceNode = (PVOID *)v9->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && *((int *)DeviceNode + 99) < 0 )
      PnpRequestDeviceAction(DeviceNode[4], 8, 0, 1LL, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( v8 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = *(_WORD *)(v16 + 56);
        UserData.Reserved = 0;
        v36 = v17 >> 1;
        UserData.Ptr = (ULONGLONG)&v36;
        UserData.Size = 2;
        v18 = *(unsigned __int16 *)(v16 + 56);
        v19 = *(_QWORD *)(v16 + 64);
        v47 = 0;
        v45 = v19;
        v46 = v18;
        EtwWrite(
          IoMgrTraceHandle,
          &IoMgr_LegacyFsFilterBlockedByPolicy,
          (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
          2u,
          &UserData);
      }
    }
    else if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedOnScm) )
    {
      v20 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v42 = 1835034;
      v22 = &v42;
      v37 = *(_WORD *)(v20 + 56) >> 1;
      v43 = L"(Unavailable)";
      Length = 64;
      if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject(v9, &DiskDeviceObject) >= 0 )
      {
        v23 = DiskDeviceObject;
        v24 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, Length, &Length);
        if ( v24 == -1073741820 )
        {
          PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, Length, 0x6E4F6F49u);
          p_ObjectNameInfo = PoolWithTag;
          if ( PoolWithTag )
            v24 = ObQueryNameString(v23, PoolWithTag, Length, &Length);
          else
            v24 = -1073741670;
        }
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
        v6 = v41;
        v26 = v24 < 0;
        v9 = DeviceAttachmentBase;
        if ( !v26 )
          v22 = (int *)p_ObjectNameInfo;
      }
      v27 = *(_WORD *)v22;
      v48.Reserved = 0;
      v38 = v27 >> 1;
      v48.Ptr = (ULONGLONG)&v37;
      v28 = *(_QWORD *)(a1 + 8);
      v48.Size = 2;
      v29 = *(unsigned __int16 *)(v28 + 56);
      v30 = *(_QWORD *)(v28 + 64);
      v51 = 0;
      v54 = 0;
      v49 = v30;
      v52 = &v38;
      v50 = v29;
      v53 = 2;
      v31 = *(unsigned __int16 *)v22;
      v32 = *((_QWORD *)v22 + 1);
      v57 = 0;
      v55 = v32;
      v56 = v31;
      EtwWrite(
        IoMgrTraceHandle,
        &IoMgr_LegacyFsFilterBlockedOnScm,
        (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
        4u,
        &v48);
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
    }
  }
  if ( v33 )
    ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  v13 = v6->DeviceType;
  if ( v13 <= 0x14 )
  {
    v14 = 1048840;
    if ( _bittest(&v14, v13) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 32))(a1, v6);
    }
  }
  return AttachedDevice;
}
