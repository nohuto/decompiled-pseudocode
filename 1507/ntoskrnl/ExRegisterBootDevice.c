/*
 * XREFs of ExRegisterBootDevice @ 0x140262824
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

__int64 __fastcall ExRegisterBootDevice(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  _DWORD *PoolWithTag; // rsi
  void *v6; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 **v8; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
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
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExBootDeviceListSpinLock);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExBootDeviceListSpinLock, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExBootDeviceListSpinLock);
        }
        v8 = (__int64 **)qword_1403254F8;
        *((_QWORD *)PoolWithTag + 2) = qword_1403254F8;
        *((_QWORD *)PoolWithTag + 1) = &ExBootDeviceList;
        if ( *v8 != &ExBootDeviceList )
          __fastfail(3u);
        *v8 = (__int64 *)(PoolWithTag + 2);
        qword_1403254F8 = (__int64)(PoolWithTag + 2);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&ExBootDeviceListSpinLock, retaddr);
        else
          _InterlockedAnd64(&ExBootDeviceListSpinLock, 0LL);
        __writecr8(CurrentIrql);
        *a2 = PoolWithTag;
      }
    }
  }
  return (unsigned int)v4;
}
