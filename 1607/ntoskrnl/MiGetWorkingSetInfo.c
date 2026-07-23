/*
 * XREFs of MiGetWorkingSetInfo @ 0x14010F8A4
 * Callers:
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetWorkingSetInfoEx @ 0x14010FA14 (MiGetWorkingSetInfoEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4)
{
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v9; // rbx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *a2 = 0LL;
  if ( a3 > 0xFFFFFFFF )
    return 3221225990LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * (((a3 & 0xFFF) != 0) + (a3 >> 12)) + 56,
                                 0x20206D4Du);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((a1 & 0xFFF) + a3 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a1 & 0xFFF;
  PoolWithTag->ByteCount = a3;
  MmProbeAndLockPages(PoolWithTag, KeGetCurrentThread()->PreviousMode, IoWriteAccess);
  if ( (v9->MdlFlags & 5) != 0 )
    MappedSystemVa = v9->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    WorkingSetInfo = MiGetWorkingSetInfoEx(a4 + 1280, MappedSystemVa, a3, 1LL);
    if ( WorkingSetInfo >= 0 )
      *a2 = *MappedSystemVa;
  }
  else
  {
    WorkingSetInfo = -1073741670;
  }
  MmUnlockPages(v9);
  ExFreePoolWithTag(v9, 0);
  return (unsigned int)WorkingSetInfo;
}
