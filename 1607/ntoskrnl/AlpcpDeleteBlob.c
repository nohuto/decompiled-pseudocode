/*
 * XREFs of AlpcpDeleteBlob @ 0x14040AC68
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x140409934 (AlpcpFlushResourcesPort.c)
 *     AlpcpDeleteView @ 0x14040AC3C (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x14040AEA0 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14040B050 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x140471588 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeletePortSection @ 0x1404B5D94 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404B9944 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x140655668 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  char v5; // al
  void (__fastcall *v6)(__int64); // rdx

  v1 = (unsigned __int64 *)(a1 - 16);
  v3 = (_BYTE *)KeAbPreAcquire(a1 - 16, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    v4[26] |= 1u;
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
