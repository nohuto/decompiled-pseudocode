/*
 * XREFs of AlpcpCreateView @ 0x14040D220
 * Callers:
 *     AlpcpCreateSectionView @ 0x140409C78 (AlpcpCreateSectionView.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140546E5C (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040B470 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x14040BD4C (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     MmMapSecureViewOfSection @ 0x14040D1A8 (MmMapSecureViewOfSection.c)
 *     AlpcpInsertResourcePort @ 0x14040D574 (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14040D624 (AlpcpAllocateBlob.c)
 *     MmMapViewOfSection @ 0x14046BFE8 (MmMapViewOfSection.c)
 *     AlpcpUnlockBlob @ 0x14050E530 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, unsigned __int64 *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r12
  signed __int64 *v7; // rbp
  __int64 v8; // rbx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // r15
  void *Blob; // rax
  ULONG_PTR v13; // rsi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // r14
  int v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v7 = (signed __int64 *)(Object + 44);
  v8 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(Object + 44, v8, (ULONG_PTR)(Object + 44));
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( (Object[52] & 0x20) != 0 )
  {
    v9 = -1073741769;
    goto LABEL_31;
  }
  v10 = Object[38];
  v11 = (unsigned __int64 *)Object[3];
  if ( v10 && v10 < *(_QWORD *)(BugCheckParameter2 + 40) )
  {
    v9 = -1073741756;
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) == 0 )
    goto LABEL_15;
  if ( *(_DWORD *)(BugCheckParameter2 + 52) >= 2u )
  {
    v9 = -1073741790;
    goto LABEL_31;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 80) )
  {
    v9 = -1073741790;
  }
  else
  {
LABEL_15:
    Blob = (void *)AlpcpAllocateBlob(&AlpcViewType, 96LL, 0LL);
    v13 = (ULONG_PTR)Blob;
    if ( Blob )
    {
      memset(Blob, 0, 0x60uLL);
      v24 = *(_QWORD *)(BugCheckParameter2 + 24);
      v23 = *(_QWORD *)(BugCheckParameter2 + 40);
      v14 = *(_DWORD *)(v3 + 48);
      v22 = 0LL;
      if ( (v14 & 2) != 0 )
        v15 = MmMapSecureViewOfSection(
                *(_QWORD *)v3,
                (int)v11,
                &v22,
                0,
                v21,
                (__int64)&v24,
                (__int64)&v23,
                2,
                0,
                4,
                2,
                v13 + 56);
      else
        v15 = MmMapViewOfSection(
                **(_QWORD **)(BugCheckParameter2 + 16),
                (_DWORD)v11,
                (unsigned int)&v22,
                0,
                0LL,
                (__int64)&v24,
                (__int64)&v23,
                2,
                0,
                4);
      v9 = v15;
      if ( v15 >= 0 )
      {
        AlpcpReferenceBlob(v13);
        v16 = v22;
        *(_DWORD *)(v13 + 72) |= 1u;
        *(_QWORD *)(v13 + 40) = v16;
        *(_QWORD *)(v13 + 48) = v23;
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
        *(_QWORD *)(v13 + 32) = v11;
        ObfReferenceObject(Object);
        *(_QWORD *)(v13 + 24) = Object;
        AlpcpReferenceBlob(BugCheckParameter2);
        *(_QWORD *)(v13 + 16) = BugCheckParameter2;
        v17 = *(_QWORD *)(BugCheckParameter2 + 64);
        *(_QWORD *)v13 = BugCheckParameter2 + 56;
        *(_QWORD *)(v13 + 8) = v17;
        **(_QWORD **)(BugCheckParameter2 + 64) = v13;
        *(_QWORD *)(BugCheckParameter2 + 64) = v13;
        ++*(_DWORD *)(BugCheckParameter2 + 52);
        AlpcpInsertResourcePort(Object, v13);
        v18 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v11 + 202), 0LL, 0);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 404, 0LL) )
          ExfAcquirePushLockExclusiveEx(v11 + 202, v18, (ULONG_PTR)(v11 + 202));
        if ( v19 )
          v19[26] |= 1u;
        *(_QWORD *)(v13 + 88) = v11[204];
        *(_QWORD *)(v13 + 80) = v11 + 203;
        *(_QWORD *)v11[204] = v13 + 80;
        v11[204] = v13 + 80;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 202, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v11 + 202);
        KeAbPostRelease((ULONG_PTR)(v11 + 202));
        if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
          *(_QWORD *)(BugCheckParameter2 + 80) = v13;
        *a3 = v13;
        v9 = 0;
      }
      else
      {
        AlpcpDereferenceBlobEx(v13, 1);
      }
    }
    else
    {
      v9 = -1073741670;
    }
  }
LABEL_31:
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  AlpcpUnlockBlob(v3);
  return v9;
}
