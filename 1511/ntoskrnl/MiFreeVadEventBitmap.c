/*
 * XREFs of MiFreeVadEventBitmap @ 0x140623EA4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiDeletePartialCloneVad @ 0x14062CC30 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14006C180 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 *VadWakeList; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdx

  VadWakeList = MiGetVadWakeList(a2, a3, a3);
  v5 = 0;
  if ( VadWakeList )
  {
    v6 = VadWakeList[2];
    LOBYTE(v5) = (v6 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a1, 8 * (v5 + (v6 >> 6)) + 64);
    ExFreePoolWithTag(VadWakeList, 0);
  }
}
