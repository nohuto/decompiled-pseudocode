/*
 * XREFs of NtFlushKey @ 0x140498460
 * Callers:
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x1401170FC (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  __int64 v2; // r15
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // r8
  __int64 v5; // rcx
  int v6; // ebx
  struct _KTHREAD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  struct _EX_RUNDOWN_REF *v10; // rsi
  BOOLEAN v11; // al
  char *v12; // rcx
  __int64 v14; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-38h] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+74h] [rbp-Ch]

  memset(v17, 0, sizeof(v17));
  v2 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v18, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v6 = CmObReferenceObjectByHandle(KeyHandle, 0, v4, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v6 >= 0 )
    {
      if ( CmpTraceRoutine && Object )
        v2 = *((_QWORD *)Object + 1);
      v16[1] = v16;
      v16[0] = v16;
      v7 = KeGetCurrentThread();
      --v7->KernelApcDisable;
      v8 = Object;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v17[0] = v8;
        v6 = CmpCallCallBacks(0x1Eu, (__int64)v17, 1, 0x1Fu, (__int64)v8, (__int64)v16);
      }
      if ( v6 < 0 )
      {
        if ( v6 == -1073740541 )
          v6 = 0;
      }
      else
      {
        CmpLockRegistryFreezeAware(0);
        CmpLockKcbShared(v8[1]);
        v9 = v8[1];
        if ( (*(_DWORD *)(v9 + 4) & 0x20000) != 0 )
        {
          v6 = (v8[6] & 1) != 0 ? -1073740763 : -1073741444;
          CmpUnlockKcb((char *)v9);
          CmpUnlockRegistry();
        }
        else
        {
          v10 = *(struct _EX_RUNDOWN_REF **)(v9 + 32);
          if ( v10 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
          {
            CmpUnlockKcb((char *)v9);
            CmpUnlockRegistry();
            CmpDoFlushAll();
          }
          else
          {
            v11 = ExAcquireRundownProtection(v10 + 347);
            v12 = (char *)v8[1];
            if ( v11 )
            {
              CmpUnlockKcb(v12);
              CmpUnlockRegistry();
              v6 = CmpFlushHive((ULONG_PTR)v10, 0);
              ExReleaseRundownProtection_0(v10 + 347);
              if ( v6 < 0 )
                v6 = -1073741491;
            }
            else
            {
              CmpUnlockKcb(v12);
              CmpUnlockRegistry();
              v6 = -1073740763;
            }
          }
        }
        v6 = CmPostCallbackNotification(0x1Fu, (__int64)v8, v6, (__int64)v17, v16);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(Object);
    }
    if ( CmpTraceRoutine )
    {
      LOBYTE(v5) = 21;
      CmpTraceRoutine(v5, &v18, (unsigned int)v6, 0LL, v2, 0LL);
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v6 = -1073741431;
    if ( CmpTraceRoutine )
    {
      LOBYTE(v14) = 21;
      CmpTraceRoutine(v14, &v18, 3221225865LL, 0LL, 0LL, 0LL);
    }
  }
  return v6;
}
