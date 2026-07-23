/*
 * XREFs of MiCleanEmbryonicProcess @ 0x14045DED8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     PsReturnProcessQuota @ 0x140075124 (PsReturnProcessQuota.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiReturnPartitionResidentAvailable @ 0x140171DE4 (MiReturnPartitionResidentAvailable.c)
 *     MiDereferenceSession @ 0x14045E368 (MiDereferenceSession.c)
 */

__int64 __fastcall MiCleanEmbryonicProcess(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  int *ProcessPartition; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  bool v13; // zf

  v4 = a1 + 1280;
  v5 = *(unsigned int *)(a1 + 772);
  v6 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 && (*(_BYTE *)(v4 + 187) & 0xC0) == 0xC0 )
    return 0LL;
  if ( (v5 & 0x20) != 0 || (v8 = ((unsigned int)v5 >> 10) & 3, v8 <= 1) )
  {
    v13 = (v5 & 0x10000) == 0;
  }
  else
  {
    if ( v8 != 2 )
      return 0LL;
    MiChargeWsles(v4, 8LL - *(_QWORD *)(v4 + 104), 0);
    PsReturnProcessQuota(a1, v9, *(_QWORD *)(v4 + 104) - 8LL);
    ProcessPartition = MiGetProcessPartition(a1);
    if ( ProcessPartition == MiSystemPartition )
      MiReturnResidentAvailable(*(_QWORD *)(v4 + 104) - 8LL);
    else
      MiReturnPartitionResidentAvailable((__int64)ProcessPartition, *(_QWORD *)(v4 + 104) - 8LL);
    v11 = *(_DWORD *)(a1 + 772);
    v6 = 4294965247LL;
    a3 = 1024LL;
    do
    {
      v5 = v11 & 0xFFFFF3FF | 0x400;
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 772), v5, v11);
    }
    while ( v12 != v11 );
    v13 = (*(_DWORD *)(a1 + 772) & 0x10000) == 0;
  }
  if ( !v13 )
    MiDereferenceSession(v5, v6, a3);
  return 1LL;
}
