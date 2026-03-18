/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x1404E0E88
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessCustomDeviceEvent @ 0x1404E2138 (PnpProcessCustomDeviceEvent.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140603984 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x1404E1F8C (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x1404E2024 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x1404F2C18 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 *v9; // rdi
  char v10; // r13
  __int64 *v11; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int *v13; // rdx
  int v14; // ebx
  int v15; // ecx
  GUID v17; // xmm0
  __int64 *v18; // r15
  __int64 *v19; // r13
  int v20; // ebx
  __int64 *v21; // r12
  struct _KTHREAD *v22; // rcx
  int v23; // [rsp+20h] [rbp-58h] BYREF
  int SessionIdFromPDO; // [rsp+24h] [rbp-54h]
  PVOID Objecta; // [rsp+28h] [rbp-50h]
  __int64 *v26; // [rsp+30h] [rbp-48h]
  __int64 *v27; // [rsp+38h] [rbp-40h]
  _QWORD *v28; // [rsp+40h] [rbp-38h]
  int v29; // [rsp+48h] [rbp-30h] BYREF
  GUID v30; // [rsp+4Ch] [rbp-2Ch]
  __int64 v31; // [rsp+60h] [rbp-18h]

  v28 = a4;
  Objecta = Object;
  SessionIdFromPDO = -1;
  ObfReferenceObject(Object);
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v17 = *Source1;
    v29 = 2097153;
    v30 = v17;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v9 = *(__int64 **)(v8 + 480);
    v10 = 1;
  }
  else
  {
    v9 = *(__int64 **)(v8 + 472);
    v10 = 0;
  }
  v11 = (__int64 *)(v8 + 472);
  v26 = v11;
  while ( v9 != v11 )
  {
    v27 = v9;
    if ( *((_DWORD *)v9 + 5) != *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL) )
      SessionIdFromPDO = IopGetSessionIdFromPDO(Objecta);
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v9 + 5) == SessionIdFromPDO) && !*((_BYTE *)v9 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v9[10];
        v13 = (int *)a3;
      }
      else
      {
        v31 = v9[10];
        v13 = &v29;
      }
      v14 = PnpNotifyDriverCallback(v9, v13, &v23);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v15 = v23;
      if ( v14 < 0 )
        v15 = 0;
      v23 = v15;
      if ( v15 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v28 )
          *v28 = v9[6];
        v18 = v9;
        v30 = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
        v19 = v26;
        do
        {
          v20 = -1;
          v21 = v9;
          if ( *((_DWORD *)v9 + 5) != *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL) )
            v20 = IopGetSessionIdFromPDO(Objecta);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v20 == -1 || *((_DWORD *)v9 + 5) == v20) && !*((_BYTE *)v9 + 58) )
          {
            v31 = v9[10];
            PnpNotifyDriverCallback(v9, &v29, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
          v9 = (__int64 *)v9[1];
          PnpDereferenceNotify(v21);
          if ( v21 == v18 )
            PnpDereferenceNotify(v18);
        }
        while ( v9 != v19 );
        v7 = v23;
        break;
      }
      v11 = v26;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v10 )
      v9 = (__int64 *)v9[1];
    else
      v9 = (__int64 *)*v9;
    PnpDereferenceNotify(v27);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObject(Objecta);
  return v7;
}
