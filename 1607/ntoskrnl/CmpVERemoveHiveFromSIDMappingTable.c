/*
 * XREFs of CmpVERemoveHiveFromSIDMappingTable @ 0x140601C64
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmLoadKey @ 0x14049C9B4 (CmLoadKey.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmpDestroyTemporaryHive @ 0x14060D2A0 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x14002C0A0 (KeAcquireGuardedMutex.c)
 *     memmove @ 0x140171280 (memmove.c)
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
