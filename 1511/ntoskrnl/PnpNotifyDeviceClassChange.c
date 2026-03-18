/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x1404E1E04
 * Callers:
 *     PnpDeviceEventWorker @ 0x1404E0578 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1404C2040 (IopGetSessionIdFromSymbolicName.c)
 *     PnpDereferenceNotify @ 0x1404E1F8C (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x1404E2024 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, __int64 *a2, __int64 a3)
{
  __int128 v3; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int64 **v6; // r14
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-78h] BYREF
  int v12; // [rsp+28h] [rbp-70h] BYREF
  __int128 v13; // [rsp+2Ch] [rbp-6Ch]
  __int128 v14; // [rsp+3Ch] [rbp-5Ch]
  __int64 v15; // [rsp+50h] [rbp-48h]

  v3 = *(_OWORD *)a2;
  SessionIdFromSymbolicName = -1;
  v13 = *a1;
  v12 = 3145729;
  v14 = v3;
  v15 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v6 = (__int64 **)((char *)&PnpDeviceClassNotifyList
                  + 16 * ((*(_DWORD *)a2 + *((_DWORD *)a2 + 1) + *((_DWORD *)a2 + 2) + *((_DWORD *)a2 + 3)) % 0xDu));
  v7 = *v6;
  while ( v7 != (__int64 *)v6 )
  {
    v8 = v7;
    if ( *((_DWORD *)v7 + 5) != *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName();
    ++*((_WORD *)v7 + 28);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v7[9], 1u);
    if ( (SessionIdFromSymbolicName == -1 || *((_DWORD *)v7 + 5) == SessionIdFromSymbolicName)
      && !*((_BYTE *)v7 + 58)
      && (v7 + 10 == a2 || RtlCompareMemory(v7 + 10, a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v7, &v12, v11);
    }
    ExReleaseResourceLite((PERESOURCE)v7[9]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v7 = (__int64 *)*v7;
    PnpDereferenceNotify(v8);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
