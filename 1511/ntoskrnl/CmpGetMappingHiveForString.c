/*
 * XREFs of CmpGetMappingHiveForString @ 0x1403BC7AC
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x1403BC780 (CmpGetCmHiveFromVirtualPath.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGetVirtualStoreRoot @ 0x1405E2874 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     CmpCompareUnicodeString @ 0x1403BC8B8 (CmpCompareUnicodeString.c)
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(_WORD *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  int v5; // r12d
  unsigned int v6; // ebp
  _QWORD *v7; // r14
  char *v8; // rbx
  unsigned int v10; // ebx
  char *v11; // rcx

  v4 = 0;
  v5 = CmpComputeHashKey(0LL, a1);
  ExAcquireFastMutex(&CmpSIDMappingLock);
  v6 = CmpSIDToHiveMappingCount;
  v7 = CmpSIDToHiveMapping;
  if ( CmSIDMappingCacheHit >= 0
    && CmSIDMappingCacheHit < CmpSIDToHiveMappingCount
    && (v8 = (char *)CmpSIDToHiveMapping + 32 * CmSIDMappingCacheHit, *((_DWORD *)v8 + 4) == v5)
    && *(_WORD *)v8 == *a1
    && !(unsigned int)CmpCompareUnicodeString(v8, a1, 0LL) )
  {
    *a2 = *((_QWORD *)v8 + 3);
  }
  else
  {
    v10 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v11 = (char *)&v7[4 * v10];
        if ( *((_DWORD *)v11 + 4) == v5 && *(_WORD *)v11 == *a1 && !(unsigned int)CmpCompareUnicodeString(v11, a1, 0LL) )
          break;
        if ( ++v10 >= v6 )
          goto LABEL_14;
      }
      CmSIDMappingCacheHit = v10;
      *a2 = v7[4 * v10 + 3];
    }
    else
    {
LABEL_14:
      v4 = -1073741275;
    }
  }
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
  return v4;
}
