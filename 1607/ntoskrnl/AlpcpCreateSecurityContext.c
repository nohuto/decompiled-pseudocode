/*
 * XREFs of AlpcpCreateSecurityContext @ 0x14040C5E0
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x14040AEA0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404B9944 (AlpcpCaptureSecurityAttributeInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpStartInitialization @ 0x14040A68C (AlpcpStartInitialization.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcAddHandleTableEntry @ 0x14040AD10 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14040AE6C (AlpcpEndInitialization.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x14040C434 (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14040C4E4 (AlpcpAllocateBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14040C5B4 (AlpcpChargePagedPoolQuota.c)
 *     SeCreateClientSecurity @ 0x14040DF28 (SeCreateClientSecurity.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404ACBE0 (AlpcpReleasePagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        unsigned __int64 *Object,
        char a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rdi
  _QWORD *Blob; // rax
  ULONG_PTR v11; // rbx
  int ClientSecurity; // esi
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  ULONG_PTR v18[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  Blob = AlpcpAllocateBlob((__int64)AlpcSecurityType, 112LL, 0);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  ClientSecurity = AlpcpChargePagedPoolQuota((__int64)Process, 0xA0uLL);
  if ( ClientSecurity >= 0 )
  {
    ClientSecurity = SeCreateClientSecurity(CurrentThread, a3, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota(Process, 160LL);
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
      v13 = (volatile signed __int64 *)(Object + 44);
      v14 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(Object + 44, v14, (ULONG_PTR)(Object + 44));
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      if ( (Object[52] & 0x20) == 0 )
      {
        AlpcpStartInitialization(v11);
        AlpcpReferenceBlob(v11);
        v15 = Object[2] + 40;
        v18[0] = v11;
        *(_QWORD *)v11 = v15;
        v16 = AlpcAddHandleTableEntry(v15, v18);
        *(_QWORD *)(v11 + 8) = v16;
        if ( v16 != -1 )
        {
          ObfReferenceObject(Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpInsertResourcePort((__int64)Object, v11);
          if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 44));
          AlpcpEndInitialization(v11);
          goto LABEL_14;
        }
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11, 2);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11, 1);
  return (unsigned int)ClientSecurity;
}
