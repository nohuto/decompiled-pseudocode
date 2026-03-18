/*
 * XREFs of NtQueryOpenSubKeys @ 0x1406503A4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rtt
  BOOLEAN v6; // bl
  struct _KTHREAD *v7; // rdx
  __int16 v8; // cx
  char PreviousMode; // dl
  _DWORD *v11; // rcx
  NTSTATUS v12; // ebx
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // r8
  unsigned __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-B8h] BYREF
  _DWORD v21[42]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+110h] [rbp+18h] BYREF

  Object = 0LL;
  memset(v21, 0, 136);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v5 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v6 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v6 )
    {
      v7 = KeGetCurrentThread();
      v8 = v7->KernelApcDisable + 1;
      v7->KernelApcDisable = v8;
      if ( !v8
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
        && !v7->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v6 )
      return -1073741431;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v11 = HandleCount;
    if ( (unsigned __int64)HandleCount >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
  }
  v12 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          0LL,
          0x20019u,
          (struct _OBJECT_TYPE *)CmKeyObjectType,
          PreviousMode,
          v21,
          (__int64 *)&Object);
  if ( v12 >= 0 )
  {
    CmpLockRegistryExclusive();
    v13 = (__int64 *)Object;
    v14 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v14 + 4) & 0x20000) != 0 )
    {
      v12 = (*((_BYTE *)Object + 48) & 1) != 0 ? -1073740763 : -1073741444;
      CmpUnlockRegistry();
      ObfDereferenceObject(v13);
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 64LL);
      if ( *(_DWORD *)(v14 + 40) == *(_DWORD *)(v15 + 36) )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(v15 + 48));
        CmpOpenSubKeys = CmpSearchForOpenSubKeys(v13[1], 2, v16, 0LL);
        CmpUnlockRegistry();
        ObfDereferenceObject(v13);
        *HandleCount = CmpOpenSubKeys;
      }
      else
      {
        CmpUnlockRegistry();
        ObfDereferenceObject(v13);
        v12 = -1073741811;
      }
    }
  }
  _m_prefetchw(&CmpShutdownRundown);
  v17 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v17 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
