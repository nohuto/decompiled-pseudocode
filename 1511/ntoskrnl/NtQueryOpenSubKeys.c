/*
 * XREFs of NtQueryOpenSubKeys @ 0x1405DBB9C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _DWORD *v7; // rcx
  NTSTATUS v8; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD v14[36]; // [rsp+50h] [rbp-98h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  Object = 0LL;
  memset(v14, 0, 136);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    if ( (_BYTE)v5 == 1 )
    {
      v7 = HandleCount;
      if ( (unsigned __int64)HandleCount >= MmUserProbeAddress )
        v7 = (_DWORD *)MmUserProbeAddress;
      *v7 = *v7;
    }
    v8 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           v5,
           0x20019u,
           (struct _OBJECT_TYPE *)CmKeyObjectType,
           v5,
           v14,
           &Object);
    if ( v8 >= 0 )
    {
      CmpLockRegistryExclusive();
      v9 = (__int64 *)Object;
      v10 = *((_QWORD *)Object + 1);
      if ( (*(_DWORD *)(v10 + 4) & 0x20000) != 0 )
      {
        v8 = (*((_BYTE *)Object + 48) & 1) != 0 ? -1073740763 : -1073741444;
        CmpUnlockRegistry();
        ObfDereferenceObject(v9);
      }
      else
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 64LL);
        if ( *(_DWORD *)(v10 + 40) == *(_DWORD *)(v11 + 36) )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(v11 + 48));
          CmpOpenSubKeys = CmpSearchForOpenSubKeys(v9[1], 2, v12, 0LL);
          CmpUnlockRegistry();
          ObfDereferenceObject(v9);
          *HandleCount = CmpOpenSubKeys;
        }
        else
        {
          CmpUnlockRegistry();
          ObfDereferenceObject(v9);
          v8 = -1073741811;
        }
      }
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v8;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
}
