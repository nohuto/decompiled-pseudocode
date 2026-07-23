/*
 * XREFs of NtQueryOpenSubKeys @ 0x1405F99E8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  PVOID v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  char v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID Object; // [rsp+40h] [rbp-128h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v21[240]; // [rsp+60h] [rbp-108h] BYREF

  Object = 0LL;
  memset(v21, 0, 0xE8uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    if ( (_BYTE)v5 == 1 )
    {
      v9 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
    v10 = ObReferenceObjectByNameEx(
            (__int64)TargetKey,
            v5,
            0x20019u,
            (__int64)CmKeyObjectType,
            v5,
            (__int64)v21,
            &Object);
    if ( v10 >= 0 )
    {
      CmpLockRegistryExclusive();
      v11 = Object;
      if ( CmpIsKeyDeletedForKeyBody((__int64)Object, 0LL) )
      {
        v10 = (*((_BYTE *)v11 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        CmpUnlockRegistry();
        ObfDereferenceObject(v11);
      }
      else
      {
        v12 = *((_QWORD *)v11 + 1);
        v13 = *(_DWORD *)(v12 + 32);
        v14 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 64LL);
        if ( v13 == *(_DWORD *)(v14 + 36) )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(v14 + 48));
          CmpOpenSubKeys = CmpSearchForOpenSubKeys(*((_QWORD *)v11 + 1), 2, v15, 0LL);
          CmpUnlockRegistry();
          ObfDereferenceObject(v11);
          *HandleCount = CmpOpenSubKeys;
        }
        else
        {
          CmpUnlockRegistry();
          ObfDereferenceObject(v11);
          v10 = -1073741811;
        }
      }
    }
    CmpCleanupParseContext((__int64)v21, 0);
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
    return v10;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    return -1073741431;
  }
}
