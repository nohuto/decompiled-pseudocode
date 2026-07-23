/*
 * XREFs of AlpcpCreateReserve @ 0x1404A036C
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x1404A05D0 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateMessage @ 0x14040A24C (AlpcpAllocateMessage.c)
 *     AlpcpStartInitialization @ 0x14040A68C (AlpcpStartInitialization.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcAddHandleTableEntry @ 0x14040AD10 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14040AE6C (AlpcpEndInitialization.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x14040C434 (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14040C4E4 (AlpcpAllocateBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14040C5B4 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404ACBE0 (AlpcpReleasePagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCreateReserve(unsigned __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 **Blob; // rax
  unsigned __int64 **v8; // rdi
  _KPROCESS *Process; // r14
  int v10; // ebx
  ULONG_PTR v11; // rbx
  int v12; // esi
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG_PTR v17; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 **v18; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = (unsigned __int64 **)AlpcpAllocateBlob((__int64)AlpcReserveType, 48LL, 1);
  v8 = Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x30uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = AlpcpChargePagedPoolQuota((__int64)Process, 0x310uLL);
  if ( v10 < 0 )
    goto LABEL_8;
  v10 = AlpcpAllocateMessage(&v17, a2, 1LL);
  if ( v10 < 0 )
  {
    AlpcpReleasePagedPoolQuota(Process, 784LL);
LABEL_8:
    AlpcpDereferenceBlobEx((ULONG_PTR)v8, 1);
    return (unsigned int)v10;
  }
  ObfReferenceObjectWithTag(Process, 0x63706C41u);
  v11 = v17;
  *(_QWORD *)(v17 + 48) = Process;
  v8[3] = (unsigned __int64 *)v11;
  v8[4] = (unsigned __int64 *)a2;
  *(_QWORD *)(v11 + 96) = v8;
  v12 = AlpcpCaptureMessageData((__int64)v8[3], a2, 0LL);
  AlpcpUnlockMessage(v11);
  if ( v12 >= 0 )
  {
    v13 = (volatile signed __int64 *)(Object + 44);
    v14 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(Object + 44, v14, (ULONG_PTR)(Object + 44));
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    if ( (Object[52] & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v12 = -1073741769;
    }
    else
    {
      AlpcpReferenceBlob((ULONG_PTR)v8);
      AlpcpStartInitialization((__int64)v8);
      v15 = Object[2] + 40;
      v18 = v8;
      v8[1] = (unsigned __int64 *)v15;
      v16 = AlpcAddHandleTableEntry(Object[2] + 40, &v18);
      v8[2] = (unsigned __int64 *)v16;
      if ( v16 == -1 )
      {
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        v8[1] = 0LL;
        AlpcpEndInitialization((__int64)v8);
        AlpcpDereferenceBlobEx((ULONG_PTR)v8, 2);
        return 3221225626LL;
      }
      *v8 = Object;
      ObfReferenceObject(Object);
      AlpcpInsertResourcePort((__int64)Object, (__int64)v8);
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = v8[2];
      AlpcpEndInitialization((__int64)v8);
      v12 = 0;
    }
  }
  AlpcpDereferenceBlobEx((ULONG_PTR)v8, 1);
  return (unsigned int)v12;
}
