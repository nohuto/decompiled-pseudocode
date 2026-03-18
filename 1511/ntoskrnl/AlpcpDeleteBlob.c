/*
 * XREFs of AlpcpDeleteBlob @ 0x14047CE68
 * Callers:
 *     NtAlpcDeleteSecurityContext @ 0x140422764 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14042BCD0 (AlpcpCaptureSecurityAttribute.c)
 *     NtAlpcCreatePortSection @ 0x14044DF54 (NtAlpcCreatePortSection.c)
 *     NtAlpcCreateSecurityContext @ 0x14047C548 (NtAlpcCreateSecurityContext.c)
 *     AlpcpDeleteView @ 0x14047CE3C (AlpcpDeleteView.c)
 *     AlpcpFlushResourcesPort @ 0x14047ED3C (AlpcpFlushResourcesPort.c)
 *     NtAlpcDeletePortSection @ 0x1404AE8F0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404AF9DC (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406202C8 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  char v5; // al
  void (__fastcall *v6)(__int64); // rdx

  v1 = (unsigned __int64 *)(a1 - 16);
  v3 = KeAbPreAcquire(a1 - 16, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = *(_BYTE *)(a1 - 32);
  if ( (v5 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v5 | 8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v6 = *(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 24LL);
    if ( v6 )
      v6(a1);
    return 1;
  }
}
