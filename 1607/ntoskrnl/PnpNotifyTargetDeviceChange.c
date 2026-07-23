/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x14048A58C
 * Callers:
 *     PiEventRemovalCompleteNotifyKernel @ 0x140485190 (PiEventRemovalCompleteNotifyKernel.c)
 *     PnpProcessCustomDeviceEvent @ 0x1404895A4 (PnpProcessCustomDeviceEvent.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 *     PiEventQueryRemoveNotifyKernel @ 0x14064D2CC (PiEventQueryRemoveNotifyKernel.c)
 *     PiEventRemovalCanceledNotifyKernel @ 0x14064D3CC (PiEventRemovalCanceledNotifyKernel.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140489340 (PnpDereferenceNotify.c)
 *     IopGetSessionIdFromPDO @ 0x1404CF1E4 (IopGetSessionIdFromPDO.c)
 *     PnpNotifyDriverCallback @ 0x14052AFF8 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 *v9; // rdi
  char v10; // r13
  __int64 *v11; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int *v14; // rdx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  GUID v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // r15
  __int64 *v25; // r13
  int v26; // ebx
  __int64 *v27; // r12
  struct _KTHREAD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // [rsp+20h] [rbp-58h] BYREF
  int SessionIdFromPDO; // [rsp+24h] [rbp-54h]
  __int64 *v34; // [rsp+28h] [rbp-50h]
  PVOID Objecta; // [rsp+30h] [rbp-48h]
  __int64 *v36; // [rsp+38h] [rbp-40h]
  _QWORD *v37; // [rsp+40h] [rbp-38h]
  int v38; // [rsp+48h] [rbp-30h] BYREF
  GUID v39; // [rsp+4Ch] [rbp-2Ch]
  __int64 v40; // [rsp+60h] [rbp-18h]

  v37 = a4;
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
    v20 = *Source1;
    v38 = 2097153;
    v39 = v20;
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
  v34 = v11;
  while ( v9 != v11 )
  {
    v36 = v9;
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
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
        v14 = (int *)a3;
      }
      else
      {
        v40 = v9[10];
        v14 = &v38;
      }
      v15 = PnpNotifyDriverCallback(v9, v14, &v32);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
      v19 = v32;
      if ( v15 < 0 )
        v19 = 0;
      v32 = v19;
      if ( v19 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v37 )
          *v37 = v9[6];
        v24 = v9;
        v39 = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
        v25 = v34;
        do
        {
          v26 = -1;
          v27 = v9;
          if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
            v26 = IopGetSessionIdFromPDO(Objecta);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v26 == -1 || *((_DWORD *)v9 + 5) == v26) && !*((_BYTE *)v9 + 58) )
          {
            v40 = v9[10];
            PnpNotifyDriverCallback(v9, &v38, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v30, v31);
          ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
          v9 = (__int64 *)v9[1];
          PnpDereferenceNotify(v27);
          if ( v27 == v24 )
            PnpDereferenceNotify(v24);
        }
        while ( v9 != v25 );
        v7 = v32;
        break;
      }
      v11 = v34;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
    }
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v10 )
      v9 = (__int64 *)v9[1];
    else
      v9 = (__int64 *)*v9;
    PnpDereferenceNotify(v36);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObject(Objecta);
  return v7;
}
