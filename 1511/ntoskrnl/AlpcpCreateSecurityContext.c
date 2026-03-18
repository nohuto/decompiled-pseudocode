/*
 * XREFs of AlpcpCreateSecurityContext @ 0x14047C700
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x14042BCD0 (AlpcpCaptureSecurityAttribute.c)
 *     NtAlpcCreateSecurityContext @ 0x14047C548 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404AF9DC (AlpcpCaptureSecurityAttributeInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1403F4A84 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C8C8 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x14047C9D4 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14047CA08 (AlpcpInsertResourcePort.c)
 *     AlpcAddHandleTableEntry @ 0x14047CAB0 (AlpcAddHandleTableEntry.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpStartInitialization @ 0x14047CD48 (AlpcpStartInitialization.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        unsigned __int64 *Object,
        char a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KPROCESS *Process; // rdi
  void *Blob; // rax
  ULONG_PTR v11; // rbx
  int v12; // r12d
  NTSTATUS ClientSecurity; // ebp
  volatile signed __int64 *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  ULONG_PTR v19[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  Blob = (void *)AlpcpAllocateBlob(&AlpcSecurityType, 112LL);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  v12 = AlpcpChargePagedPoolQuota(Process, 160LL);
  if ( v12 < 0 )
  {
    AlpcpDereferenceBlobEx(v11, 1);
    return (unsigned int)v12;
  }
  else
  {
    ClientSecurity = SeCreateClientSecurity(CurrentThread, a3, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota(Process, 0xA0uLL);
      AlpcpDereferenceBlobEx(v11, 1);
      return (unsigned int)ClientSecurity;
    }
    else
    {
      ObfReferenceObjectWithTag(Process, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = Process;
      if ( !a2 )
      {
LABEL_14:
        result = 0LL;
        *a4 = v11;
        return result;
      }
      v14 = (volatile signed __int64 *)(Object + 44);
      v15 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(Object + 44, v15, (ULONG_PTR)(Object + 44));
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      if ( (Object[52] & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        AlpcpDereferenceBlobEx(v11, 1);
        return 3221225626LL;
      }
      else
      {
        AlpcpStartInitialization(v11);
        AlpcpReferenceBlob(v11);
        v16 = Object[2] + 40;
        v19[0] = v11;
        *(_QWORD *)v11 = v16;
        v17 = AlpcAddHandleTableEntry(v16, v19);
        *(_QWORD *)(v11 + 8) = v17;
        if ( v17 != -1 )
        {
          ObfReferenceObject(Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpInsertResourcePort(Object, v11);
          if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 44));
          AlpcpEndInitialization(v11);
          goto LABEL_14;
        }
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11, 2);
        return 3221225626LL;
      }
    }
  }
}
