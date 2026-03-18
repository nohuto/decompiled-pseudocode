/*
 * XREFs of MiCreateRotateView @ 0x1404C40C4
 * Callers:
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x140070DF4 (MiGetInPageSupportBlock.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
      MiInsertVadEvent(a1, PoolWithTag, 0LL);
      return 1LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
