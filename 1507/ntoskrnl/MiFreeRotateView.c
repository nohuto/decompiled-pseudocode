/*
 * XREFs of MiFreeRotateView @ 0x1406A2FC0
 * Callers:
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
