/*
 * XREFs of MiFreeRotateView @ 0x140659D18
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140029580 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1)
{
  __int64 *VadWakeList; // rax
  __int64 *v2; // rbx
  void *v3; // rcx

  VadWakeList = MiGetVadWakeList(a1, 8);
  v2 = VadWakeList;
  if ( VadWakeList )
  {
    v3 = (void *)VadWakeList[2];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v2, 0);
  }
}
