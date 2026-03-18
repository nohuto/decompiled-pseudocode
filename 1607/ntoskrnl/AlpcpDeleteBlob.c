/*
 * XREFs of AlpcpDeleteBlob @ 0x14040BDA8
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x14040AA74 (AlpcpFlushResourcesPort.c)
 *     AlpcpDeleteView @ 0x14040BD7C (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x14040BFE0 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14040C190 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044D650 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x1404724E8 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x1404726B8 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeletePortSection @ 0x1404D22F4 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404D6340 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x140655584 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
