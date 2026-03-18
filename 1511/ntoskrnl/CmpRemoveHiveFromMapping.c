/*
 * XREFs of CmpRemoveHiveFromMapping @ 0x1405E28F4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpRemoveHiveFromMapping(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx

  ExAcquireFastMutex(&CmpSIDMappingLock);
  v2 = 0;
  if ( CmpSIDToHiveMappingCount )
  {
    v3 = (char *)CmpSIDToHiveMapping + 24;
    while ( *v3 != a1 )
    {
      ++v2;
      v3 += 4;
      if ( v2 >= CmpSIDToHiveMappingCount )
        goto LABEL_7;
    }
    --CmpSIDToHiveMappingCount;
    v4 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v4 + 8), 0x65564D43u);
    memmove(
      (char *)CmpSIDToHiveMapping + v4,
      (char *)CmpSIDToHiveMapping + 32 * v2 + 32,
      32LL * (CmpSIDToHiveMappingCount - v2));
  }
LABEL_7:
  KeReleaseGuardedMutex(&CmpSIDMappingLock);
}
