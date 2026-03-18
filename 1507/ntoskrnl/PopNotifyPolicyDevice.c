/*
 * XREFs of PopNotifyPolicyDevice @ 0x1405C3158
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  bool v7; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rbx
  __int64 v13; // rdx
  signed __int64 v14; // rcx
  ULONG_PTR v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 v19; // rdx
  char v20; // bl

  v4 = (unsigned int)Context;
  v5 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v7 = v5 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock();
    if ( v7 )
      v19 = 0LL;
    else
      LOBYTE(v19) = 1;
    PopChangeCapability(&byte_14032E533, v19);
    PopReleasePolicyLock();
  }
  else if ( (_DWORD)Context == 3 )
  {
    KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
    PopAcquirePolicyLock();
    v20 = PopHiberEnabled;
    PopEnableHiberFile(0, 0);
    if ( v20 )
      PopEnableHiberFile(1, 0);
    PopReleasePolicyLock();
    KeSetEvent(&PopTransitionLock, 0, 0);
  }
  else if ( v5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, a4);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&PopPolicyDeviceLock, 0LL);
    v12 = v9;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&PopPolicyDeviceLock, v9, (ULONG_PTR)&PopPolicyDeviceLock, v10);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    qword_14032DF48 = (__int64)KeGetCurrentThread();
    PopConnectToPolicyDevice(v4, NotificationStructure[5]);
    if ( qword_14032DF48 )
      qword_14032DF48 = 0LL;
    _m_prefetchw(&PopPolicyDeviceLock);
    v14 = PopPolicyDeviceLock - 16;
    if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (PopPolicyDeviceLock & 2) != 0
      || (v15 = PopPolicyDeviceLock,
          v15 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PopPolicyDeviceLock,
                   v14,
                   PopPolicyDeviceLock)) )
    {
      ExfReleasePushLock(&PopPolicyDeviceLock, v13);
    }
    KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
