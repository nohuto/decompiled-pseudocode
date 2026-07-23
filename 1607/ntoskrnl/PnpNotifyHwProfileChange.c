/*
 * XREFs of PnpNotifyHwProfileChange @ 0x14062BBB8
 * Callers:
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14062BE58 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140489340 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x14052AFF8 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyHwProfileChange(GUID *Source1, _DWORD *a2, UNICODE_STRING *a3)
{
  int v4; // esi
  __int64 v7; // rdi
  _WORD *v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  GUID v10; // xmm0
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _WORD *v15; // rsi
  _WORD *v16; // rbx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // [rsp+20h] [rbp-30h] BYREF
  int v26; // [rsp+28h] [rbp-28h] BYREF
  GUID v27; // [rsp+2Ch] [rbp-24h]

  v25 = 0;
  v4 = 0;
  ExAcquireFastMutex(&PnpHwProfileNotifyLock);
  v7 = PnpProfileNotifyList;
  while ( (__int64 *)v7 != &PnpProfileNotifyList )
  {
    ++*(_WORD *)(v7 + 56);
    v8 = (_WORD *)v7;
    KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 72), 1u);
    if ( *(_BYTE *)(v7 + 58) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 72));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
      v4 = v25;
    }
    else
    {
      v10 = *Source1;
      v26 = 1310721;
      v27 = v10;
      v11 = PnpNotifyDriverCallback(v7, (__int64)&v26, &v25);
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 72));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
      v4 = v25;
      if ( v11 < 0 )
        v4 = 0;
      v25 = v4;
      if ( v4 < 0
        && (Source1 == &GUID_HWPROFILE_QUERY_CHANGE
         || RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) == 16) )
      {
        if ( a2 )
          *a2 = 7;
        if ( a3 )
        {
          a3->Length = 0;
          RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(*(_QWORD *)(v7 + 48) + 56LL));
        }
        HIWORD(v26) = 16;
        v15 = (_WORD *)v7;
        v27 = GUID_HWPROFILE_CHANGE_CANCELLED;
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        do
        {
          ++*(_WORD *)(v7 + 56);
          v16 = (_WORD *)v7;
          KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 72), 1u);
          if ( !*(_BYTE *)(v7 + 58) )
            PnpNotifyDriverCallback(v7, (__int64)&v26, 0LL);
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 72));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          v7 = *(_QWORD *)(v7 + 8);
          PnpDereferenceNotify(v16);
          if ( v16 == v15 )
            PnpDereferenceNotify(v16);
        }
        while ( (__int64 *)v7 != &PnpProfileNotifyList );
        v4 = v25;
        break;
      }
    }
    ExAcquireFastMutex(&PnpHwProfileNotifyLock);
    v7 = *(_QWORD *)v7;
    PnpDereferenceNotify(v8);
  }
  KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
  return (unsigned int)v4;
}
