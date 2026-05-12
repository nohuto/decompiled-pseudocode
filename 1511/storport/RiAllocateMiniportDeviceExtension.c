/*
 * XREFs of RiAllocateMiniportDeviceExtension @ 0x1C0054BF8
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0051794 (RaidInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RiAllocateMiniportDeviceExtension(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  PVOID PoolWithTag; // rax

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 232) + 64LL);
  v3 = (unsigned int)(v2 + 16);
  if ( v3 < 0x10 )
    return 3221225495LL;
  if ( v3 < v2 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v3, 0x454D6152u);
  *(_QWORD *)(a1 + 240) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, (unsigned int)v3);
  **(_QWORD **)(a1 + 240) = a1;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL) = a1;
  return 0LL;
}
