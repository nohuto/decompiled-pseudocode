/*
 * XREFs of CmpVERemoveHiveFromSIDMappingTable @ 0x140601D18
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x14002BC20 (KeAcquireGuardedMutex.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall CmpVERemoveHiveFromSIDMappingTable(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 5360) & 2) != 0 )
  {
    KeAcquireGuardedMutex(&CmpSIDMappingLock);
    v2 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      v3 = (char *)CmpSIDToHiveMapping + 24;
      do
      {
        if ( *v3 == a1 )
          break;
        ++v2;
        v3 += 4;
      }
      while ( v2 < CmpSIDToHiveMappingCount );
    }
    v4 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v4 + 8), 0);
    memmove(
      (char *)CmpSIDToHiveMapping + v4,
      (char *)CmpSIDToHiveMapping + 32 * v2 + 32,
      32LL * (--CmpSIDToHiveMappingCount - v2));
    KeReleaseGuardedMutex(&CmpSIDMappingLock);
  }
}
