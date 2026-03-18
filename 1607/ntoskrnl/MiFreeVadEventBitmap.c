/*
 * XREFs of MiFreeVadEventBitmap @ 0x140659D2C
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiDeletePartialCloneVad @ 0x14066313C (MiDeletePartialCloneVad.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400284C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetVadWakeList @ 0x140029A00 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 *VadWakeList; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdx

  VadWakeList = MiGetVadWakeList(a2, a3);
  v5 = 0;
  if ( VadWakeList )
  {
    v6 = VadWakeList[2];
    LOBYTE(v5) = (v6 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a1, 8 * (v5 + (v6 >> 6)) + 64);
    ExFreePoolWithTag(VadWakeList, 0);
  }
}
