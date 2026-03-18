/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x14047CC20
 * Callers:
 *     NtAlpcDeleteSecurityContext @ 0x140422764 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047BCB0 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcCreateSectionView @ 0x14047E500 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1404AE8F0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404AF9DC (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406202C8 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x14062054C (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcReferenceBlobByHandle(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rbx
  signed __int32 v9[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a1 )
    return 0LL;
  v5 = a2 - 16;
  v6 = KeAbPreAcquire(a1 + 16, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 16), v6, a1 + 16);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( v5 < *(_DWORD *)(a1 + 8)
    && (v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v5)) != 0
    && *(unsigned __int8 *)(v7 - 31) == *a3
    && AlpcpReferenceBlob(*(_QWORD *)(*(_QWORD *)a1 + 8LL * v5)) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 16));
    KeAbPostRelease(a1 + 16);
    if ( (*(_BYTE *)(v7 - 32) & 4) != 0 )
    {
      _InterlockedOr(v9, 0);
      if ( (*(_QWORD *)(v7 - 16) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v7 - 16));
    }
    return v7;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 16));
    KeAbPostRelease(a1 + 16);
    return 0LL;
  }
}
