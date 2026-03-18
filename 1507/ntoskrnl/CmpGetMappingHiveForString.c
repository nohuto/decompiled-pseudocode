/*
 * XREFs of CmpGetMappingHiveForString @ 0x14040799C
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x140407970 (CmpGetCmHiveFromVirtualPath.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGetVirtualStoreRoot @ 0x140658CB4 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 *     CmpCompareUnicodeString @ 0x140547818 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(_WORD *a1, _QWORD *a2)
{
  unsigned int v4; // ebp
  int v5; // r12d
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  char *v13; // rbx
  unsigned __int8 v14; // bl
  signed __int32 v15; // eax
  unsigned int v17; // ebx
  char *v18; // rcx

  v4 = 0;
  v5 = CmpComputeHashKey(0LL, a1);
  v7 = KeAbPreAcquire((ULONG_PTR)&CmpSIDMappingLock, 0LL, 0LL, v6);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpSIDMappingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpSIDMappingLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = CmpSIDToHiveMapping;
  *(&CmpSIDMappingLock + 1) = (ULONG_PTR)KeGetCurrentThread();
  v11 = CurrentIrql;
  v12 = CmpSIDToHiveMappingCount;
  *((_DWORD *)&CmpSIDMappingLock + 12) = v11;
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < CmpSIDToHiveMappingCount
    && (v13 = (char *)CmpSIDToHiveMapping + 32 * CmSIDMappingCacheHit, *((_DWORD *)v13 + 4) == v5)
    && *(_WORD *)v13 == *a1
    && !(unsigned int)CmpCompareUnicodeString(v13, a1, 0LL) )
  {
    *a2 = *((_QWORD *)v13 + 3);
  }
  else
  {
    v17 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v18 = (char *)&v10[4 * v17];
        if ( *((_DWORD *)v18 + 4) == v5 && *(_WORD *)v18 == *a1 && !(unsigned int)CmpCompareUnicodeString(v18, a1, 0LL) )
          break;
        if ( ++v17 >= v12 )
          goto LABEL_20;
      }
      CmSIDMappingCacheHit = v17;
      *a2 = v10[4 * v17 + 3];
    }
    else
    {
LABEL_20:
      v4 = -1073741275;
    }
  }
  *(&CmpSIDMappingLock + 1) = 0LL;
  v14 = *((_BYTE *)&CmpSIDMappingLock + 48);
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpSIDMappingLock, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpSIDMappingLock, v15);
  __writecr8(v14);
  KeAbPostRelease((ULONG_PTR)&CmpSIDMappingLock);
  return v4;
}
