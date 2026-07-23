/*
 * XREFs of PnpShutdownDevices @ 0x140629AD4
 * Callers:
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1404866BC (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpCreateDeviceEventEntry @ 0x140489C28 (PnpCreateDeviceEventEntry.c)
 *     PipSetDevNodeUserFlags @ 0x140545DD0 (PipSetDevNodeUserFlags.c)
 */

__int64 PnpShutdownDevices()
{
  unsigned int v0; // esi
  _DWORD *DeviceEventEntry; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  PVOID P; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v12[2]; // [rsp+80h] [rbp-C8h] BYREF
  char v13; // [rsp+90h] [rbp-B8h] BYREF

  KeSetEvent(&PnpShutdownEvent, 0, 0);
  v0 = 0;
  if ( !PnpTearDownPnpStacksOnShutdown && (PopShutdownCleanly & 0x20) == 0 )
    return v0;
  DeviceEventEntry = PnpCreateDeviceEventEntry(0x181uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  v3 = IopRootDeviceNode;
  v12[1] = (__int64)&v13;
  LODWORD(v12[0]) = 10485760;
  PipSetDevNodeUserFlags(IopRootDeviceNode, 16);
  while ( 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v3 = *(_QWORD *)(v3 + 8);
    while ( v3 )
    {
      v5 = *(_DWORD *)(v3 + 400);
      if ( (v5 & 0x20) != 0 )
      {
        if ( v3 == IopRootDeviceNode )
        {
          v3 = 0LL;
          break;
        }
LABEL_17:
        v9 = *(_QWORD *)v3;
        if ( *(_QWORD *)v3 )
          goto LABEL_19;
        v3 = *(_QWORD *)(v3 + 16);
        PipSetDevNodeUserFlags(v3, 32);
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          break;
        v9 = *(_QWORD *)(v3 + 8);
        if ( !v9 )
        {
          PipSetDevNodeUserFlags(v3, 32);
          goto LABEL_17;
        }
LABEL_19:
        v3 = v9;
      }
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
    if ( v3 )
    {
      PnpInitializeTargetDeviceRemoveEvent(
        (char *)DeviceEventEntry,
        0x181uLL,
        *(PVOID *)(v3 + 32),
        0,
        1,
        0,
        0,
        46,
        0,
        0LL,
        0LL,
        (__int64)&v11,
        (__int64)v12);
      P = DeviceEventEntry;
      v0 = PnpProcessQueryRemoveAndEject((__int64 *)&P);
      if ( P != DeviceEventEntry && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(P, 0x4B706E50u);
      continue;
    }
    break;
  }
  if ( _InterlockedExchangeAdd(DeviceEventEntry + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(DeviceEventEntry, 0x4B706E50u);
  return v0;
}
