/*
 * XREFs of AlpcpDeleteBlob @ 0x140475E64
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140473D80 (NtAlpcCreateSectionView.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140474F14 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcCreateSecurityContext @ 0x14047504C (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140476E58 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14047FE50 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpFlushResourcesPort @ 0x1404A36CC (AlpcpFlushResourcesPort.c)
 *     AlpcpMapLegacyPortView @ 0x14052ABD8 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x14052AF18 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteSectionView @ 0x14053BE80 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x14053ECC4 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14054279C (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x14069F384 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  char v9; // al
  void (__fastcall *v10)(__int64); // rdx

  v4 = (unsigned __int64 *)(a1 - 16);
  v6 = KeAbPreAcquire(a1 - 16, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = *(_BYTE *)(a1 - 32);
  if ( (v9 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v9 | 8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v10 = *(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 24LL);
    if ( v10 )
      v10(a1);
    return 1;
  }
}
