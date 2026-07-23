/*
 * XREFs of CmpGetMappingHiveForString @ 0x1403E1798
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x1403E176C (CmpGetCmHiveFromVirtualPath.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGetVirtualStoreRoot @ 0x14060175C (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x1404B6020 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpGetMappingHiveForString(_WORD *a1, _QWORD *a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  unsigned int v6; // ebp
  _QWORD *v7; // r15
  char *v8; // rdi
  unsigned int v10; // edi
  char *v11; // rcx

  v4 = 0;
  v5 = CmpHashUnicodeComponent(a1);
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
