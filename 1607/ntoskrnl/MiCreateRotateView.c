/*
 * XREFs of MiCreateRotateView @ 0x1404D151C
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140014090 (MiInsertVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *PoolWithTag; // rbx
  void *v3; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x77776D4Du);
  if ( PoolWithTag )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      PoolWithTag[2] = 8;
      *((_QWORD *)PoolWithTag + 2) = v3;
      MiInsertVadEvent(a1, (__int64 *)PoolWithTag, 0);
      return 1LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
