/*
 * XREFs of PoThermalCounterSetCallback @ 0x1406B7B48
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x14053C6D4 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x1406B7E10 (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // esi
  __int64 DeviceNode; // rdx
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rbx
  struct _PCW_BUFFER *i; // r15
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v14; // rdi
  ULONG v15; // r8d
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h] BYREF
  int v23; // [rsp+50h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v9, (ULONG_PTR)&PopPolicyDeviceLock, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a1 == 2 || a1 == 3 )
  {
    v11 = PopThermal;
    for ( i = (struct _PCW_BUFFER *)a2[3]; (__int64 *)v11 != &PopThermal; v11 = *(_QWORD *)v11 )
    {
      if ( (*(_BYTE *)(v11 + 65) & 2) != 0 )
      {
        v22 = 0LL;
        v23 = 0;
        if ( a1 == 3 )
        {
          v7 = PopThermalReadCounters(v11, *a2, &v22);
          if ( v7 < 0 )
            break;
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v11 + 48));
        v14 = DeviceAttachmentBaseRef;
        if ( DeviceAttachmentBaseRef )
          DeviceNode = (__int64)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
        else
          DeviceNode = 0LL;
        if ( DeviceNode )
        {
          v15 = *(_DWORD *)(v11 + 480);
          Data.Data = &v22;
          Data.Size = 12;
          v7 = PcwAddInstance(i, (PCUNICODE_STRING)(DeviceNode + 280), v15, 1u, &Data);
        }
        if ( v14 )
          ObfDereferenceObject(v14);
        if ( v7 < 0 )
          break;
      }
    }
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v16 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v17 = PopPolicyDeviceLock,
        v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v16, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, DeviceNode);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v7;
}
