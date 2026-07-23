/*
 * XREFs of ViTargetDriversAllocateVerifiedData @ 0x1406C4324
 * Callers:
 *     VfTargetDriversAdd @ 0x140002384 (VfTargetDriversAdd.c)
 *     VfTargetDriversEnableVerifier @ 0x1406C3DE8 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_SLIST_HEADER *__fastcall ViTargetDriversAllocateVerifiedData(unsigned __int64 a1)
{
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v3; // rbx

  PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x110uLL, 0x44566656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x110uLL);
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
