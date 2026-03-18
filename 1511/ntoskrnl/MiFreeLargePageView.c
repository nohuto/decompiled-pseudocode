/*
 * XREFs of MiFreeLargePageView @ 0x14062B874
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiDeletePartialCloneVad @ 0x14062CC30 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiGetVadWakeList @ 0x14006C180 (MiGetVadWakeList.c)
 *     MiReturnLargePages @ 0x1401E2488 (MiReturnLargePages.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // bp
  __int64 *VadWakeList; // rax
  __int64 v7; // rdx
  __int64 *v8; // r15
  __int64 **v9; // r12
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rbx
  int v13; // ebp
  int *ProcessPartition; // rax

  v5 = a3;
  VadWakeList = MiGetVadWakeList(a2, 16, a3);
  v7 = *(unsigned int *)(a2 + 52);
  v8 = VadWakeList;
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v9 = (__int64 **)VadWakeList[2];
  v10 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  v11 = MiReturnLargePages(v9);
  if ( (v5 & 1) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1584), -(__int64)v10);
    v13 = v5 & 2;
    if ( !v13 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    ProcessPartition = MiGetProcessPartition(a1);
    MiReturnCommit((__int64)ProcessPartition, v11);
    MiReturnFullProcessCharges(a1, v10);
    if ( !v13 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  ExFreePoolWithTag(v9, 0);
  ExFreePoolWithTag(v8, 0);
  return v10 - v11;
}
