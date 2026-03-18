/*
 * XREFs of AlpcpCreateSecurityContext @ 0x140475880
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x14047504C (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14047FE50 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14054279C (AlpcpCaptureSecurityAttributeInternal.c)
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
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x140475C30 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140475C64 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x140475E10 (AlpcpStartInitialization.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140524018 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        unsigned __int64 *Object,
        char a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR Process; // rsi
  void *Blob; // rax
  ULONG_PTR v10; // rdi
  unsigned __int64 v11; // rax
  NTSTATUS ClientSecurity; // ebp
  __int64 v13; // r9
  volatile signed __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r9
  volatile signed __int64 *v17; // rsi
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rbp
  PVOID *v27; // rcx
  __int64 result; // rax
  signed __int64 v29; // rbx
  bool v30; // cc
  ULONG_PTR v31; // rbx
  signed __int64 v32; // rbx
  ULONG_PTR BugCheckParameter4; // rbx
  signed __int64 v34; // rbx
  ULONG_PTR v35; // rbx
  signed __int64 v36; // rax
  unsigned int v37; // [rsp+30h] [rbp-38h]
  ULONG_PTR v38[6]; // [rsp+38h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  Blob = (void *)AlpcpAllocateBlob(&AlpcSecurityType, 112LL, 0LL);
  v10 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v10 + 8) = -1LL;
  _m_prefetchw((const void *)(Process + 1616));
  v11 = *(_QWORD *)(Process + 1616);
  if ( v11 < 0xA0 )
  {
LABEL_26:
    result = PsChargeProcessPagedPoolQuota(Process, 160LL);
    v37 = result;
    if ( (int)result < 0 )
    {
      v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v30 = v32 <= 1;
      BugCheckParameter4 = v32 - 1;
      if ( v30 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v10, 0x21uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v10);
        return v37;
      }
      return result;
    }
  }
  else
  {
    while ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(Process + 1616), v11 - 160, v11) )
    {
      v11 = *(_QWORD *)(Process + 1616);
      if ( v11 < 0xA0 )
        goto LABEL_26;
    }
  }
  ClientSecurity = SeCreateClientSecurity(CurrentThread, a3, 0, (PSECURITY_CLIENT_CONTEXT)(v10 + 32));
  if ( ClientSecurity >= 0 )
  {
    ObfReferenceObjectWithTag((PVOID)Process, 0x63706C41u);
    *(_QWORD *)(v10 + 16) = Process;
    if ( !a2 )
    {
LABEL_24:
      *a4 = v10;
      return 0LL;
    }
    v14 = (volatile signed __int64 *)(Object + 44);
    v15 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0LL, v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(Object + 44, v15, (ULONG_PTR)(Object + 44), v16);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( (Object[52] & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v30 = v34 <= 1;
      v35 = v34 - 1;
      if ( !v30 )
        return 3221225626LL;
      if ( v35 )
        KeBugCheckEx(0x18u, 0LL, v10, 0x21uLL, v35);
    }
    else
    {
      AlpcpStartInitialization(v10);
      v17 = (volatile signed __int64 *)(v10 - 48);
      _m_prefetchw((const void *)(v10 - 48 + 24));
      v18 = *(_QWORD *)(v10 - 48 + 24);
      v19 = v18 == 0;
      if ( v18 <= 0 )
      {
LABEL_49:
        if ( !v19 )
          KeBugCheckEx(0x18u, 0LL, v10, 0x20uLL, v18);
      }
      else
      {
        while ( 1 )
        {
          v20 = v18;
          v18 = _InterlockedCompareExchange64(v17 + 3, v18 + 1, v18);
          if ( v18 == v20 )
            break;
          v19 = v18 == 0;
          if ( v18 <= 0 )
            goto LABEL_49;
        }
      }
      v21 = Object[2] + 40;
      v38[0] = v10;
      *(_QWORD *)v10 = v21;
      v22 = AlpcAddHandleTableEntry(v21, v38);
      *(_QWORD *)(v10 + 8) = v22;
      if ( v22 != -1 )
      {
        ObfReferenceObject(Object);
        *(_QWORD *)(v10 + 24) = Object;
        v24 = KeAbPreAcquire((ULONG_PTR)(Object + 41), 0LL, 0LL, v23);
        v26 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 82, 0LL) )
          ExfAcquirePushLockExclusiveEx(Object + 41, v24, (ULONG_PTR)(Object + 41), v25);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        v27 = (PVOID *)Object[43];
        *v17 = (volatile signed __int64)(Object + 42);
        *((_QWORD *)v17 + 1) = v27;
        if ( *v27 != Object + 42 )
          __fastfail(3u);
        *v27 = (PVOID)v17;
        Object[43] = (unsigned __int64)v17;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)Object + 41);
        KeAbPostRelease((ULONG_PTR)(Object + 41));
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        AlpcpEndInitialization(v10);
        goto LABEL_24;
      }
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *(_QWORD *)v10 = 0LL;
      AlpcpEndInitialization(v10);
      v36 = _InterlockedExchangeAdd64(v17 + 3, 0xFFFFFFFFFFFFFFFEuLL) - 2;
      if ( v36 > 0 )
        return 3221225626LL;
      if ( v36 )
        KeBugCheckEx(0x18u, 0LL, v10, 0x21uLL, v36);
    }
    AlpcpDestroyBlob(v10);
    return 3221225626LL;
  }
  if ( (unsigned __int64)(*(_QWORD *)(Process + 1616) + 160LL) >= 0x1000 )
    PsReturnProcessPagedPoolQuota(Process, 0xA0uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 1616), 0xA0uLL);
  v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v30 = v29 <= 1;
  v31 = v29 - 1;
  if ( v30 )
  {
    if ( v31 )
      KeBugCheckEx(0x18u, 0LL, v10, 0x21uLL, v31);
    AlpcpDestroyBlob(v10);
  }
  return (unsigned int)ClientSecurity;
}
