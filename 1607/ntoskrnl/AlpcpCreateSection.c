/*
 * XREFs of AlpcpCreateSection @ 0x140471738
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x140471588 (NtAlpcCreatePortSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpStartInitialization @ 0x14040A68C (AlpcpStartInitialization.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcAddHandleTableEntry @ 0x14040AD10 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14040AE6C (AlpcpEndInitialization.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x14040C434 (AlpcpInsertResourcePort.c)
 *     AlpcpAllocateBlob @ 0x14040C4E4 (AlpcpAllocateBlob.c)
 *     MmCreateSection @ 0x14042BAE0 (MmCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, PVOID a5, ULONG_PTR *a6)
{
  PVOID v6; // r14
  _QWORD *Blob; // rax
  ULONG_PTR v13; // rbx
  int Section; // edi
  volatile signed __int64 *v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v20[3]; // [rsp+48h] [rbp-30h] BYREF

  v6 = a5;
  if ( !a5 || a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = AlpcpAllocateBlob((__int64)&AlpcSectionType, 72LL, 1);
  v13 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v13 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v13 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & ((unsigned __int64)v6
                                                                        + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v13 + 64) = v13 + 56;
  *(_QWORD *)(v13 + 56) = v13 + 56;
  if ( a4 )
  {
    Section = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &a5, 0LL);
    *(_QWORD *)v13 = a5;
  }
  else
  {
    v19 = *(_QWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) ^ (*(_DWORD *)(v13 + 48) ^ (2 * a2)) & 2 | 1;
    Section = MmCreateSection(v13, 983071LL, 0, (int)&v19, 4, 0x8000000, 0LL, 0LL);
  }
  if ( Section < 0 )
    goto LABEL_21;
  v15 = (volatile signed __int64 *)(Object + 352);
  v16 = KeAbPreAcquire((ULONG_PTR)(Object + 352), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)Object + 44, v16, (ULONG_PTR)(Object + 352));
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  if ( (*((_DWORD *)Object + 104) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    Section = -1073741769;
LABEL_21:
    AlpcpDereferenceBlobEx(v13, 1);
    return (unsigned int)Section;
  }
  AlpcpStartInitialization(v13);
  AlpcpReferenceBlob(v13);
  if ( a3 )
  {
    v17 = *((_QWORD *)Object + 2) + 40LL;
    v20[0] = v13;
    *(_QWORD *)(v13 + 16) = v17;
    v18 = AlpcAddHandleTableEntry(v17, v20);
    *(_QWORD *)(v13 + 24) = v18;
    if ( v18 == -1 )
    {
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      *(_QWORD *)(v13 + 16) = 0LL;
      AlpcpEndInitialization(v13);
      AlpcpDereferenceBlobEx(v13, 2);
      return 3221225626LL;
    }
  }
  ObfReferenceObject(Object);
  *(_QWORD *)(v13 + 40) = Object;
  AlpcpInsertResourcePort((__int64)Object, v13);
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpEndInitialization(v13);
  *a6 = v13;
  return 0LL;
}
