/*
 * XREFs of AlpcpCreateReserve @ 0x140522DD0
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x140522CB0 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpAllocateMessage @ 0x140474B20 (AlpcpAllocateMessage.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x140475C30 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140475C64 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x140475E10 (AlpcpStartInitialization.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140524018 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpCreateReserve(unsigned __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 **Blob; // rax
  unsigned __int64 **v8; // rdi
  _KPROCESS *Process; // rbx
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // rax
  int v12; // r14d
  signed __int64 v13; // rbx
  bool v14; // cc
  ULONG_PTR v15; // rbx
  signed __int64 v16; // rbx
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v18; // rsi
  int v19; // r15d
  char v20; // cl
  int v21; // ebp
  __int64 v22; // r9
  signed __int64 v23; // rcx
  signed __int64 v24; // rbx
  ULONG_PTR v25; // rbx
  volatile signed __int64 *v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  signed __int64 v31; // rbx
  ULONG_PTR v32; // rbx
  volatile signed __int64 *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  signed __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r15
  PVOID *v44; // rcx
  signed __int64 v45; // rbx
  ULONG_PTR v46; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 **v48; // [rsp+98h] [rbp+20h] BYREF

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
  _m_prefetchw(&Process[2].Affinity.Bitmap[9]);
  do
  {
    v11 = Process[2].Affinity.Bitmap[9];
    if ( v11 < 0x308 )
    {
      v12 = PsChargeProcessPagedPoolQuota(Process, 776LL);
      goto LABEL_11;
    }
    v10 = Process[2].Affinity.Bitmap[9];
  }
  while ( v10 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&Process[2].Affinity.Bitmap[9],
                   v11 - 776,
                   v11) );
  v12 = 0;
LABEL_11:
  if ( v12 < 0 )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 - 3, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v13 <= 1;
    v15 = v13 - 1;
    if ( !v14 )
      return (unsigned int)v12;
    if ( v15 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x21uLL, v15);
LABEL_14:
    AlpcpDestroyBlob((__int64)v8);
    return (unsigned int)v12;
  }
  v12 = AlpcpAllocateMessage(&BugCheckParameter2, a2, 1LL);
  if ( v12 < 0 )
  {
    if ( Process[2].Affinity.Bitmap[9] + 776 >= 0x1000 )
      PsReturnProcessPagedPoolQuota((ULONG_PTR)Process, 0x308uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[9], 0x308uLL);
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 - 3, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v16 <= 1;
    BugCheckParameter4 = v16 - 1;
    if ( !v14 )
      return (unsigned int)v12;
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x21uLL, BugCheckParameter4);
    goto LABEL_14;
  }
  ObfReferenceObjectWithTag(Process, 0x63706C41u);
  v18 = BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 48) = Process;
  v8[3] = (unsigned __int64 *)v18;
  v8[4] = (unsigned __int64 *)a2;
  *(_QWORD *)(v18 + 96) = v8;
  v19 = AlpcpCaptureMessageData(v8[3], a2, 0LL);
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(v18);
  v20 = *(_BYTE *)(v18 - 32);
  v21 = 0;
  if ( (v20 & 1) != 0 )
  {
    v21 = 0x10000 - *(__int16 *)(v18 - 30);
    *(_WORD *)(v18 - 30) = 0;
    *(_BYTE *)(v18 - 32) = v20 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v18 - 16));
  KeAbPostRelease(v18 - 16);
  if ( v21 > 0 )
  {
    v23 = -v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 - 24), -v21);
    if ( v23 <= 0 )
    {
      if ( v23 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v23);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
  if ( v19 >= 0 )
  {
    v26 = (volatile signed __int64 *)(Object + 44);
    v27 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0LL, v22);
    v30 = 17LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(Object + 44, v27, (ULONG_PTR)(Object + 44), v29);
      v30 = 17LL;
    }
    if ( v27 )
      *(_BYTE *)(v27 + 26) |= 1u;
    if ( (Object[52] & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 - 3, 0xFFFFFFFFFFFFFFFFuLL);
      v14 = v31 <= 1;
      v32 = v31 - 1;
      if ( v14 )
      {
        if ( v32 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x21uLL, v32);
        AlpcpDestroyBlob((__int64)v8);
      }
      return 3221225527LL;
    }
    else
    {
      v33 = (volatile signed __int64 *)(v8 - 6);
      _m_prefetchw(v8 - 3);
      v34 = (__int64)*(v8 - 3);
      while ( v34 > 0 )
      {
        v30 = v34;
        v34 = _InterlockedCompareExchange64(v33 + 3, v34 + 1, v34);
        if ( v34 == v30 )
          goto LABEL_54;
      }
      if ( v34 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x20uLL, v34);
LABEL_54:
      AlpcpStartInitialization((__int64)v8, v30, v28, 32LL);
      v35 = Object[2] + 40;
      v48 = v8;
      v8[1] = (unsigned __int64 *)v35;
      v38 = AlpcAddHandleTableEntry(Object[2] + 40, &v48, v36, v37);
      v8[2] = (unsigned __int64 *)v38;
      if ( v38 == -1 )
      {
        if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        v8[1] = 0LL;
        AlpcpEndInitialization((__int64)v8);
        v39 = _InterlockedExchangeAdd64(v33 + 3, 0xFFFFFFFFFFFFFFFEuLL) - 2;
        if ( v39 <= 0 )
        {
          if ( v39 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x21uLL, v39);
          AlpcpDestroyBlob((__int64)v8);
        }
        return 3221225626LL;
      }
      *v8 = Object;
      ObfReferenceObject(Object);
      v41 = KeAbPreAcquire((ULONG_PTR)(Object + 41), 0LL, 0LL, v40);
      v43 = v41;
      if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 82, 0LL) )
        ExfAcquirePushLockExclusiveEx(Object + 41, v41, (ULONG_PTR)(Object + 41), v42);
      if ( v43 )
        *(_BYTE *)(v43 + 26) |= 1u;
      v44 = (PVOID *)Object[43];
      *v33 = (volatile signed __int64)(Object + 42);
      *((_QWORD *)v33 + 1) = v44;
      if ( *v44 != Object + 42 )
        __fastfail(3u);
      *v44 = (PVOID)v33;
      Object[43] = (unsigned __int64)v33;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)Object + 41);
      KeAbPostRelease((ULONG_PTR)(Object + 41));
      if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = v8[2];
      AlpcpEndInitialization((__int64)v8);
      v45 = _InterlockedExchangeAdd64(v33 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v14 = v45 <= 1;
      v46 = v45 - 1;
      if ( v14 )
      {
        if ( v46 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x21uLL, v46);
        AlpcpDestroyBlob((__int64)v8);
      }
      return 0LL;
    }
  }
  else
  {
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 - 3, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v24 <= 1;
    v25 = v24 - 1;
    if ( v14 )
    {
      if ( v25 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v8, 0x21uLL, v25);
      AlpcpDestroyBlob((__int64)v8);
    }
    return (unsigned int)v19;
  }
}
