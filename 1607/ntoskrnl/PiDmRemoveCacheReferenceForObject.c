/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x140506180
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     PiDmListInitEnumCallback @ 0x14054D120 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14062EBC8 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C3FD4 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404FF308 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmLookupObject @ 0x140506200 (PiDmLookupObject.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140506370 (PiDmObjectManagerAcquireExclusiveLock.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(int a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // edi
  struct _RTL_AVL_TABLE *ObjectManagerForObjectType; // rsi
  unsigned int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v4 = 0;
  ObjectManagerForObjectType = (struct _RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock(ObjectManagerForObjectType);
  v6 = (unsigned int *)PiDmLookupObject(ObjectManagerForObjectType, a2);
  Buffer = v6;
  if ( v6 )
  {
    --v6[3];
    if ( !Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl(ObjectManagerForObjectType + 1, &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v4;
}
