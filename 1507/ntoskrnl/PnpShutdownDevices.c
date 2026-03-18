/*
 * XREFs of PnpShutdownDevices @ 0x14067A594
 * Callers:
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpCreateDeviceEventEntry @ 0x140460BD4 (PnpCreateDeviceEventEntry.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1405354EC (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeUserFlags @ 0x140581810 (PipSetDevNodeUserFlags.c)
 */

__int64 PnpShutdownDevices()
{
  unsigned int v0; // esi
  _DWORD *DeviceEventEntry; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  __int64 v8; // rax
  PVOID P; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v10[2]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+78h] [rbp-C0h] BYREF
  char v12; // [rsp+80h] [rbp-B8h] BYREF

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
  v10[1] = (__int64)&v12;
  LODWORD(v10[0]) = 10485760;
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
LABEL_21:
        v8 = *(_QWORD *)v3;
        if ( *(_QWORD *)v3 )
          goto LABEL_23;
        v3 = *(_QWORD *)(v3 + 16);
        PipSetDevNodeUserFlags(v3, 32);
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          break;
        v8 = *(_QWORD *)(v3 + 8);
        if ( !v8 )
        {
          PipSetDevNodeUserFlags(v3, 32);
          goto LABEL_21;
        }
LABEL_23:
        v3 = v8;
      }
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    v6 = KeGetCurrentThread();
    v7 = v6->KernelApcDisable + 1;
    v6->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
      && !v6->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
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
        0LL,
        0LL,
        (__int64)&v11,
        (__int64)v10);
      P = DeviceEventEntry;
      v0 = PnpProcessQueryRemoveAndEject((const void **)&P);
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
