/*
 * XREFs of ViTargetDriversAllocateVerifiedData @ 0x1407103E0
 * Callers:
 *     VfTargetDriversAdd @ 0x14008439C (VfTargetDriversAdd.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FE80 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     InitializeSListHead @ 0x140002B3C (InitializeSListHead.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

union _SLIST_HEADER *__fastcall ViTargetDriversAllocateVerifiedData(unsigned __int64 a1)
{
  union _SLIST_HEADER *PoolWithTag; // rax
  union _SLIST_HEADER *v3; // rbx

  PoolWithTag = (union _SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x44566656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x120uLL);
    v3->Alignment = a1;
    v3[2].Region = 2557876544LL;
    v3[1].Region = (unsigned __int64)&v3[1];
    v3[1].Alignment = (unsigned __int64)&v3[1];
    InitializeSListHead(v3 + 3);
    InitializeSListHead(v3 + 4);
    v3[15].Alignment = (unsigned __int64)&v3[14].Region;
    v3[14].Region = (unsigned __int64)&v3[14].Region;
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
  }
  return v3;
}
