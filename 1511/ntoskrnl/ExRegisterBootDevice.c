/*
 * XREFs of ExRegisterBootDevice @ 0x1402130EC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

__int64 __fastcall ExRegisterBootDevice(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  _DWORD *PoolWithTag; // rsi
  void *v6; // rcx
  KIRQL v7; // al
  __int64 **v8; // rdx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  KeWaitForSingleObject(&ExExternalBootSupportInitializationEvent, Executive, 0, 0, 0LL);
  if ( !ExBootDeviceRemovalHandler )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ExpWaitForBootDevices, 0LL);
    if ( v4 >= 0 )
    {
      v4 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      ExBootDeviceRemovalHandler = (PKTHREAD)Object;
      ZwClose(ThreadHandle);
      KeSetPriorityThread(ExBootDeviceRemovalHandler, 31);
    }
  }
  KeSetEvent(&ExExternalBootSupportInitializationEvent, 0, 0);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)a1 != 1 || !*(_QWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) || !*(_QWORD *)(a1 + 24) )
      v4 = -1073741811;
    if ( v4 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x504E4442u);
      if ( !PoolWithTag )
        v4 = -1073741670;
      if ( v4 >= 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        v6 = *(void **)(a1 + 16);
        if ( v6 )
          ObfReferenceObjectWithTag(v6, 0x746C6644u);
        memset(PoolWithTag, 0, 0x40uLL);
        *PoolWithTag = 1347306562;
        *(_OWORD *)(PoolWithTag + 6) = *(_OWORD *)a1;
        *(_OWORD *)(PoolWithTag + 10) = *(_OWORD *)(a1 + 16);
        *((_QWORD *)PoolWithTag + 7) = *(_QWORD *)(a1 + 32);
        v7 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v8 = (__int64 **)qword_1402D63A8;
        *((_QWORD *)PoolWithTag + 2) = qword_1402D63A8;
        *((_QWORD *)PoolWithTag + 1) = &ExBootDeviceList;
        if ( *v8 != &ExBootDeviceList )
          __fastfail(3u);
        *v8 = (__int64 *)(PoolWithTag + 2);
        qword_1402D63A8 = (__int64)(PoolWithTag + 2);
        KeReleaseSpinLock(&ExBootDeviceListSpinLock, v7);
        *a2 = PoolWithTag;
      }
    }
  }
  return (unsigned int)v4;
}
