/*
 * XREFs of AlpcpCreateView @ 0x14047C210
 * Callers:
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     AlpcpCreateSectionView @ 0x14047D390 (AlpcpCreateSectionView.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14050C27C (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcpInsertResourcePort @ 0x14047CA08 (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     MmMapSecureViewOfSection @ 0x14047CDA8 (MmMapSecureViewOfSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, unsigned __int64 *Object, ULONG_PTR *a3)
{
  ULONG_PTR v3; // r15
  signed __int64 *v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  struct _KPROCESS *v10; // r13
  void *Blob; // rax
  ULONG_PTR v12; // rbx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r14d
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  void *v21; // [rsp+B0h] [rbp+8h] BYREF
  size_t v22; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  *a3 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v7 = (signed __int64 *)(Object + 44);
  v8 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(Object + 44, v8, (ULONG_PTR)(Object + 44));
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( (Object[52] & 0x20) != 0 )
  {
    v15 = -1073741769;
    goto LABEL_24;
  }
  v9 = Object[38];
  v10 = (struct _KPROCESS *)Object[3];
  if ( v9 && v9 < *(_QWORD *)(BugCheckParameter2 + 40) )
  {
    v15 = -1073741756;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) == 0 )
    goto LABEL_11;
  if ( *(_DWORD *)(BugCheckParameter2 + 52) >= 2u )
  {
    v15 = -1073741790;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 80) )
  {
    v15 = -1073741790;
  }
  else
  {
LABEL_11:
    Blob = (void *)AlpcpAllocateBlob(&AlpcViewType, 96LL);
    v12 = (ULONG_PTR)Blob;
    if ( Blob )
    {
      memset(Blob, 0, 0x60uLL);
      v23 = *(_QWORD *)(BugCheckParameter2 + 24);
      v22 = *(_QWORD *)(BugCheckParameter2 + 40);
      v13 = *(_DWORD *)(v3 + 48);
      v21 = 0LL;
      if ( (v13 & 2) != 0 )
        v14 = MmMapSecureViewOfSection(*(_QWORD *)v3, (_DWORD)v10, (unsigned int)&v21, 0);
      else
        v14 = MmMapViewOfSection(**(_QWORD **)(BugCheckParameter2 + 16), v10, &v21, 0LL, 0LL, &v23, &v22, 2, 0, 4u);
      v15 = v14;
      if ( v14 < 0 )
      {
        AlpcpDereferenceBlobEx(v12, 1);
      }
      else
      {
        v16 = v21;
        *(_DWORD *)(v12 + 72) |= 1u;
        *(_QWORD *)(v12 + 40) = v16;
        *(_QWORD *)(v12 + 48) = v22;
        ObfReferenceObjectWithTag(v10, 0x63706C41u);
        *(_QWORD *)(v12 + 32) = v10;
        ObfReferenceObject(Object);
        *(_QWORD *)(v12 + 24) = Object;
        AlpcpReferenceBlob(BugCheckParameter2);
        *(_QWORD *)(v12 + 16) = BugCheckParameter2;
        v17 = *(_QWORD *)(BugCheckParameter2 + 64);
        *(_QWORD *)v12 = BugCheckParameter2 + 56;
        *(_QWORD *)(v12 + 8) = v17;
        **(_QWORD **)(BugCheckParameter2 + 64) = v12;
        *(_QWORD *)(BugCheckParameter2 + 64) = v12;
        ++*(_DWORD *)(BugCheckParameter2 + 52);
        AlpcpInsertResourcePort(Object, v12);
        v18 = KeAbPreAcquire((ULONG_PTR)&v10[2].Affinity.Bitmap[7], 0LL, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&v10[2].Affinity.Bitmap[7], 0LL) )
          ExfAcquirePushLockExclusiveEx(&v10[2].Affinity.Bitmap[7], v18, (ULONG_PTR)&v10[2].Affinity.Bitmap[7]);
        if ( v19 )
          *(_BYTE *)(v19 + 26) |= 1u;
        *(_QWORD *)(v12 + 88) = v10[2].Affinity.Bitmap[9];
        *(_QWORD *)(v12 + 80) = (char *)v10 + 1608;
        *(_QWORD *)v10[2].Affinity.Bitmap[9] = v12 + 80;
        v10[2].Affinity.Bitmap[9] = v12 + 80;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v10[2].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&v10[2].Affinity.Bitmap[7]);
        KeAbPostRelease((ULONG_PTR)&v10[2].Affinity.Bitmap[7]);
        if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
          *(_QWORD *)(BugCheckParameter2 + 80) = v12;
        AlpcpReferenceBlob(v12);
        *a3 = v12;
        v15 = 0;
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_24:
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  AlpcpUnlockBlob(v3);
  return v15;
}
