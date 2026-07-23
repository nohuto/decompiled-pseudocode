/*
 * XREFs of NtFlushKey @ 0x1404CAC58
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpDoFlushAll @ 0x1401264A8 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  __int64 v2; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  void *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  struct _KTHREAD *v11; // rax
  __int64 *v12; // rdi
  void (__fastcall *v13)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD, struct _OBJECT_HANDLE_INFORMATION); // rax
  char IsKeyDeletedForKeyBody; // al
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rsi
  BOOLEAN v17; // al
  char *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _OBJECT_HANDLE_INFORMATION v23; // [rsp+30h] [rbp-29h] BYREF
  PVOID Object; // [rsp+38h] [rbp-21h] BYREF
  _SLIST_ENTRY v25; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v26[4]; // [rsp+50h] [rbp-9h] BYREF
  int v27; // [rsp+70h] [rbp+17h] BYREF
  __int64 v28; // [rsp+74h] [rbp+1Bh]
  int v29; // [rsp+7Ch] [rbp+23h]

  memset(v26, 0, sizeof(v26));
  v2 = 0LL;
  v23 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v29 = 0;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v27, 0x20000uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v8 = CmObReferenceObjectByHandle(KeyHandle, 0, v5, PreviousMode, &Object, &v23);
    if ( v8 >= 0 )
    {
      if ( CmpTraceRoutine && Object )
        v2 = *((_QWORD *)Object + 1);
      *((_QWORD *)&v25.Next + 1) = &v25;
      v25.Next = &v25;
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      v12 = (__int64 *)Object;
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 144LL) & 2) != 0
        && PreviousMode
        && (~v23.GrantedAccess & 0x20006) != 0 )
      {
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v12);
        v13 = (void (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD, struct _OBJECT_HANDLE_INFORMATION))CmpTraceRoutine;
        v8 = -1073741790;
        goto LABEL_31;
      }
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v26[0] = v12;
        v8 = CmpCallCallBacks(0x1Eu, (__int64)v26, 1, 0x1Fu, (__int64)v12, &v25);
      }
      if ( v8 < 0 )
      {
        if ( v8 == -1073740541 )
          v8 = 0;
      }
      else
      {
        CmpLockRegistryFreezeAware(0);
        CmpLockKcbShared(v12[1]);
        IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)v12, 0LL);
        v15 = v12[1];
        if ( IsKeyDeletedForKeyBody )
        {
          v8 = (v12[6] & 1) != 0 ? -1073740763 : -1073741444;
          CmpUnlockKcb((char *)v15);
          CmpUnlockRegistry();
        }
        else
        {
          v16 = *(struct _EX_RUNDOWN_REF **)(v15 + 24);
          if ( v16 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
          {
            CmpUnlockKcb((char *)v15);
            CmpUnlockRegistry();
            CmpDoFlushAll();
          }
          else
          {
            v17 = ExAcquireRundownProtection(v16 + 347);
            v18 = (char *)v12[1];
            if ( v17 )
            {
              CmpUnlockKcb(v18);
              CmpUnlockRegistry();
              v8 = CmpFlushHive((ULONG_PTR)v16, 0);
              ExReleaseRundownProtection(v16 + 347);
              if ( v8 < 0 )
                v8 = -1073741491;
            }
            else
            {
              CmpUnlockKcb(v18);
              CmpUnlockRegistry();
              v8 = -1073740763;
            }
          }
        }
        v8 = CmPostCallbackNotification(31, (__int64)v12, v8, (__int64)v26, &v25);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v12);
    }
    v13 = (void (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD, struct _OBJECT_HANDLE_INFORMATION))CmpTraceRoutine;
    if ( !CmpTraceRoutine )
    {
LABEL_33:
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
      return v8;
    }
LABEL_31:
    if ( v13 )
    {
      LOBYTE(v10) = 21;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v13)(
        v10,
        &v27,
        (unsigned int)v8,
        0LL,
        v2,
        0LL,
        v23);
    }
    goto LABEL_33;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, (__int64)v5, v6);
  v8 = -1073741431;
  if ( CmpTraceRoutine )
  {
    LOBYTE(v7) = 21;
    CmpTraceRoutine(v7, &v27, 3221225865LL, 0LL, 0LL, 0LL);
  }
  return v8;
}
