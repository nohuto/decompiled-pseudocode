/*
 * XREFs of MiFreeRotateView @ 0x140623DAC
 * Callers:
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14006C180 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *VadWakeList; // rax
  __int64 *v4; // rbx
  void *v5; // rcx

  VadWakeList = MiGetVadWakeList(a1, 8, a3);
  v4 = VadWakeList;
  if ( VadWakeList )
  {
    v5 = (void *)VadWakeList[2];
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag(v4, 0);
  }
}
