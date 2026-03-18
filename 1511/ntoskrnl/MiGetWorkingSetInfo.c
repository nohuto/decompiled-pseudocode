/*
 * XREFs of MiGetWorkingSetInfo @ 0x1401DF478
 * Callers:
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1401DF5F4 (MiGetWorkingSetInfoEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4)
{
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v10; // rbx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *a2 = 0LL;
  if ( a3 > 0xFFFFFFFF )
    return 3221225990LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * (((a3 & 0xFFF) != 0) + (a3 >> 12)) + 56,
                                 0x20206D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((a1 & 0xFFF) + a3 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a1 & 0xFFF;
  PoolWithTag->ByteCount = a3;
  MmProbeAndLockPages(PoolWithTag, KeGetCurrentThread()->PreviousMode, IoWriteAccess);
  if ( (v10->MdlFlags & 5) != 0 )
    MappedSystemVa = v10->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    WorkingSetInfo = MiGetWorkingSetInfoEx((PEX_SPIN_LOCK)(a4 + 1280));
    if ( WorkingSetInfo >= 0 )
      *a2 = *MappedSystemVa;
  }
  else
  {
    WorkingSetInfo = -1073741670;
  }
  MmUnlockPages(v10);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)WorkingSetInfo;
}
