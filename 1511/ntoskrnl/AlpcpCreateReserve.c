/*
 * XREFs of AlpcpCreateReserve @ 0x1404A723C
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x1404A7164 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1403F4A84 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C8C8 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x14047C9D4 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14047CA08 (AlpcpInsertResourcePort.c)
 *     AlpcAddHandleTableEntry @ 0x14047CAB0 (AlpcAddHandleTableEntry.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpStartInitialization @ 0x14047CD48 (AlpcpStartInitialization.c)
 *     AlpcpAllocateMessage @ 0x14047CF10 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCreateReserve(unsigned __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 **Blob; // rax
  unsigned __int64 **v7; // rdi
  struct _KPROCESS *Process; // r14
  int v9; // ebx
  ULONG_PTR v10; // rbx
  int v11; // esi
  volatile signed __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v17; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 **v18; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  Blob = (unsigned __int64 **)AlpcpAllocateBlob((__int64)&AlpcReserveType, 40LL, 1);
  v7 = Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x28uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = AlpcpChargePagedPoolQuota(Process, 0x308uLL);
  if ( v9 >= 0 )
  {
    v9 = AlpcpAllocateMessage(&v17, a2, 1);
    if ( v9 >= 0 )
    {
      ObfReferenceObjectWithTag(Process, 0x63706C41u);
      v10 = v17;
      *(_QWORD *)(v17 + 48) = Process;
      v7[3] = (unsigned __int64 *)v10;
      *(_QWORD *)(v10 + 96) = v7;
      v11 = AlpcpCaptureMessageData(v7[3], a2, 0LL);
      AlpcpUnlockMessage(v10);
      if ( v11 < 0 )
      {
LABEL_15:
        AlpcpDereferenceBlobEx((ULONG_PTR)v7, 1);
        return (unsigned int)v11;
      }
      v12 = (volatile signed __int64 *)(Object + 44);
      v13 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(Object + 44, v13, (ULONG_PTR)(Object + 44));
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      if ( (Object[52] & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        v11 = -1073741769;
        goto LABEL_15;
      }
      AlpcpReferenceBlob((ULONG_PTR)v7);
      AlpcpStartInitialization((__int64)v7);
      v14 = Object[2] + 40;
      v18 = v7;
      v7[1] = (unsigned __int64 *)v14;
      v15 = AlpcAddHandleTableEntry(Object[2] + 40, &v18);
      v7[2] = (unsigned __int64 *)v15;
      if ( v15 != -1 )
      {
        *v7 = Object;
        ObfReferenceObject(Object);
        AlpcpInsertResourcePort((__int64)Object, (__int64)v7);
        if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *a3 = v7[2];
        AlpcpEndInitialization((__int64)v7);
        v11 = 0;
        goto LABEL_15;
      }
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v7[1] = 0LL;
      AlpcpEndInitialization((__int64)v7);
      AlpcpDereferenceBlobEx((ULONG_PTR)v7, 2);
      return 3221225626LL;
    }
    AlpcpReleasePagedPoolQuota(Process, 0x308uLL);
  }
  AlpcpDereferenceBlobEx((ULONG_PTR)v7, 1);
  return (unsigned int)v9;
}
