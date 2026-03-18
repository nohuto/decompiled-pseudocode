/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x140476C20
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140473D80 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140474F14 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140476E58 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x14047A7B0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     NtAlpcDeletePortSection @ 0x14053ECC4 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14054279C (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x14069F384 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x14069FA30 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3, __int64 a4)
{
  unsigned __int64 *v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  __int64 BugCheckParameter4; // rax
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v16; // rsi
  __int64 v17; // r9
  signed __int32 v18[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = a1 + 1;
  v7 = a2 - 16;
  v8 = KeAbPreAcquire((ULONG_PTR)(a1 + 1), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, v8, (ULONG_PTR)v6, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( (unsigned __int64)v7 >= a1[2] )
    goto LABEL_26;
  v10 = *(_QWORD *)(*a1 + 8LL * v7);
  if ( !v10 || *(unsigned __int8 *)(v10 - 31) != *a3 )
    goto LABEL_26;
  _m_prefetchw((const void *)(v10 - 24));
  BugCheckParameter4 = *(_QWORD *)(v10 - 24);
  v12 = BugCheckParameter4 == 0;
  if ( BugCheckParameter4 <= 0 )
  {
LABEL_24:
    if ( !v12 )
      KeBugCheckEx(0x18u, 0LL, v10, 0x20uLL, BugCheckParameter4);
LABEL_26:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
  while ( 1 )
  {
    v13 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v10 - 24),
                           BugCheckParameter4 + 1,
                           BugCheckParameter4);
    if ( BugCheckParameter4 == v13 )
      break;
    if ( BugCheckParameter4 <= 0 )
    {
      v12 = BugCheckParameter4 == 0;
      goto LABEL_24;
    }
  }
  if ( BugCheckParameter4 == -1 )
    goto LABEL_26;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  if ( (*(_BYTE *)(v10 - 32) & 4) != 0 )
  {
    _InterlockedOr(v18, 0);
    if ( (*(_QWORD *)(v10 - 16) & 1) != 0 )
    {
      v16 = KeAbPreAcquire(v10 - 16, 0LL, 0LL, v14);
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 - 16), v16, v10 - 16, v17);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      ExfReleasePushLockExclusive((volatile signed __int64 *)(v10 - 16));
      if ( v16 )
        KeAbPostRelease(v10 - 16);
    }
  }
  return v10;
}
