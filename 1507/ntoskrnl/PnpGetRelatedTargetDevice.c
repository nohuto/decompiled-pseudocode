/*
 * XREFs of PnpGetRelatedTargetDevice @ 0x1400080C4
 * Callers:
 *     IoGetRelatedTargetDevice @ 0x14040F4FC (IoGetRelatedTargetDevice.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404128C8 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpGetRelatedTargetDevice(PFILE_OBJECT FileObject, _QWORD *a2)
{
  KIRQL v4; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  _DWORD *DeviceNode; // rcx
  int v8; // ebx
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  PVOID P; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v16[9]; // [rsp+38h] [rbp-31h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp+17h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+27h] BYREF

  *a2 = 0LL;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  if ( RelatedDeviceObject )
  {
    memset(v16, 0, sizeof(v16));
    DeviceObjectExtension = RelatedDeviceObject->DeviceObjectExtension;
    LOWORD(v16[0]) = 1819;
    LODWORD(v16[1]) = 4;
    v16[5] = RelatedDeviceObject;
    DeviceNode = DeviceObjectExtension->DeviceNode;
    v16[6] = FileObject;
    if ( DeviceNode
      && (v13 = DeviceNode[165], v13 <= 0xFFFFFFFD)
      && v13 < (unsigned __int16)KeNumberNodes
      && ((KeQueryNodeActiveAffinity(*((_WORD *)DeviceNode + 330), &Affinity, 0LL),
           *(_DWORD *)Affinity.Reserved = 0,
           Affinity.Reserved[2] = 0,
           (unsigned __int16)KeActiveProcessors <= Affinity.Group)
        ? (v14 = 0LL)
        : (v14 = qword_1403D15E8[Affinity.Group] & Affinity.Mask),
          (Affinity.Mask = v14) != 0) )
    {
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    v9 = IopSynchronousCall((_DWORD)RelatedDeviceObject, (unsigned int)v16, -1073741637, 0, (__int64)&P);
    if ( v8 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( P )
    {
      v10 = *(_DWORD *)P == 1 ? *((_QWORD *)P + 1) : 0LL;
      ExFreePoolWithTag(P, 0);
      if ( v10 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
        if ( v11 )
        {
          *a2 = v11;
          return (unsigned int)v9;
        }
      }
    }
  }
  return 3221225486LL;
}
