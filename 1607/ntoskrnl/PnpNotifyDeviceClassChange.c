/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x1403F0E40
 * Callers:
 *     PnpDeviceEventWorker @ 0x1403EF9F0 (PnpDeviceEventWorker.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140007F34 (PsGetServerSiloServiceSessionId.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x1403F0FC8 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x14052C110 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140543198 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, __int64 *a2, __int64 a3)
{
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int64 **v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[8]; // [rsp+20h] [rbp-78h] BYREF
  int v16; // [rsp+28h] [rbp-70h] BYREF
  __int128 v17; // [rsp+2Ch] [rbp-6Ch]
  __int128 v18; // [rsp+3Ch] [rbp-5Ch]
  __int64 v19; // [rsp+50h] [rbp-48h]

  v4 = *(_OWORD *)a2;
  SessionIdFromSymbolicName = -1;
  v17 = *a1;
  v16 = 3145729;
  v18 = v4;
  v19 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v7 = (__int64 **)((char *)&PnpDeviceClassNotifyList
                  + 16 * ((*(_DWORD *)a2 + *((_DWORD *)a2 + 1) + *((_DWORD *)a2 + 2) + *((_DWORD *)a2 + 3)) % 0xDu));
  v8 = *v7;
  while ( v8 != (__int64 *)v7 )
  {
    v9 = v8;
    if ( *((_DWORD *)v8 + 5) != (unsigned int)PsGetServerSiloServiceSessionId() )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*((_WORD *)v8 + 28);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v8[9], 1u);
    if ( (SessionIdFromSymbolicName == -1 || *((_DWORD *)v8 + 5) == SessionIdFromSymbolicName)
      && !*((_BYTE *)v8 + 58)
      && (v8 + 10 == a2 || RtlCompareMemory(v8 + 10, a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v8, &v16, v15);
    }
    ExReleaseResourceLite((PERESOURCE)v8[9]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v8 = (__int64 *)*v8;
    PnpDereferenceNotify(v9);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
