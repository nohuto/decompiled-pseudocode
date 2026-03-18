/*
 * XREFs of AlpcpCreateSection @ 0x14044E0D4
 * Callers:
 *     NtAlpcCreatePortSection @ 0x14044DF54 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x14044FC24 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     MmCreateSection @ 0x14044E98C (MmCreateSection.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x14047C9D4 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14047CA08 (AlpcpInsertResourcePort.c)
 *     AlpcAddHandleTableEntry @ 0x14047CAB0 (AlpcAddHandleTableEntry.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpStartInitialization @ 0x14047CD48 (AlpcpStartInitialization.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, __int64 a5, ULONG_PTR *a6)
{
  void *Blob; // rax
  ULONG_PTR v11; // rbx
  NTSTATUS Section; // edi
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v18[3]; // [rsp+48h] [rbp-40h] BYREF
  PVOID v19; // [rsp+A8h] [rbp+20h] BYREF

  if ( a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = (void *)AlpcpAllocateBlob(&AlpcSectionType, 72LL);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v11 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v11 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & (a5 + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v11 + 64) = v11 + 56;
  *(_QWORD *)(v11 + 56) = v11 + 56;
  if ( a4 )
  {
    Section = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &v19, 0LL);
    *(_QWORD *)v11 = v19;
  }
  else
  {
    *(_DWORD *)(v11 + 48) = *(_DWORD *)(v11 + 48) ^ (*(_DWORD *)(v11 + 48) ^ (2 * a2)) & 2 | 1;
    Section = MmCreateSection(v11, 4, 0x8000000, 0LL, 0LL);
  }
  if ( Section < 0 )
  {
LABEL_26:
    AlpcpDereferenceBlobEx(v11, 1);
    return (unsigned int)Section;
  }
  v13 = (volatile signed __int64 *)(Object + 352);
  v14 = KeAbPreAcquire((ULONG_PTR)(Object + 352), 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)Object + 44, v14, (ULONG_PTR)(Object + 352));
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( (*((_DWORD *)Object + 104) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    Section = -1073741769;
    goto LABEL_26;
  }
  AlpcpStartInitialization(v11);
  if ( a3 )
  {
    AlpcpReferenceBlob(v11);
    v15 = *((_QWORD *)Object + 2) + 40LL;
    v18[0] = v11;
    *(_QWORD *)(v11 + 16) = v15;
    v16 = AlpcAddHandleTableEntry(v15, v18);
    *(_QWORD *)(v11 + 24) = v16;
    if ( v16 == -1 )
    {
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      *(_QWORD *)(v11 + 16) = 0LL;
      AlpcpEndInitialization(v11);
      AlpcpDereferenceBlobEx(v11, 2);
      return 3221225626LL;
    }
  }
  ObfReferenceObject(Object);
  *(_QWORD *)(v11 + 40) = Object;
  AlpcpInsertResourcePort(Object, v11);
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpEndInitialization(v11);
  *a6 = v11;
  return 0LL;
}
