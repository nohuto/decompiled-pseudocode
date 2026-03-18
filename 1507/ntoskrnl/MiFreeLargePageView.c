/*
 * XREFs of MiFreeLargePageView @ 0x1406AA134
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x1400095C8 (MiReturnFullProcessCharges.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReturnLargePages @ 0x14022FA34 (MiReturnLargePages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, char a3)
{
  __int64 *VadWakeList; // rax
  __int64 v7; // rdx
  __int64 *v8; // r15
  __int64 **v9; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r14
  struct _KTHREAD *CurrentThread; // rbx
  int v15; // ebp
  __int16 *ProcessPartition; // rax

  VadWakeList = MiGetVadWakeList(a2, 16);
  v7 = *(unsigned int *)(a2 + 52);
  v8 = VadWakeList;
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v9 = (__int64 **)VadWakeList[2];
  v10 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  v13 = MiReturnLargePages(v9);
  if ( (a3 & 1) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1576), -(__int64)v10);
    v15 = a3 & 2;
    if ( !v15 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v11, v12);
    ProcessPartition = MiGetProcessPartition(a1);
    MiReturnCommit((__int64)ProcessPartition, v13);
    MiReturnFullProcessCharges(a1, v10);
    if ( !v15 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  ExFreePoolWithTag(v9, 0);
  ExFreePoolWithTag(v8, 0);
  return v10 - v13;
}
