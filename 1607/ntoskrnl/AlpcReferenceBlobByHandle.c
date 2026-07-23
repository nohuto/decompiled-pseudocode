/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x14040AB18
 * Callers:
 *     NtAlpcCreateSectionView @ 0x14040893C (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040A720 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x14040B050 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     NtAlpcDeletePortSection @ 0x1404B5D94 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404B9944 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     NtAlpcDeleteResourceReserve @ 0x140655668 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x140655A14 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  unsigned __int64 *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdi
  ULONG_PTR v8; // rdi
  signed __int32 v10[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a1 )
    return 0LL;
  v5 = a1 + 1;
  v6 = a2 - 16;
  v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 1), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v7, (ULONG_PTR)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (unsigned __int64)v6 >= a1[2]
    || (v8 = *(_QWORD *)(*a1 + 8LL * v6)) == 0
    || *(unsigned __int8 *)(v8 - 31) != *a3
    || !AlpcpReferenceBlob(v8) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  if ( (*(_BYTE *)(v8 - 32) & 4) != 0 )
  {
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v8 - 16) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v8 - 16);
  }
  return v8;
}
