/*
 * XREFs of MiCreateRotateView @ 0x1405563AC
 * Callers:
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MiInsertVadEvent @ 0x140089D40 (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *PoolWithTag; // rbx
  void *v3; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x77776D4Du);
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
