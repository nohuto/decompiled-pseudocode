/*
 * XREFs of MmGrowKernelStackEx @ 0x140136A80
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400EEEF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x140161DF0 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x1401E6678 (MmGrowKernelStack.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x140001B34 (MiAllocateKernelStackPages.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x1401F2340 (MI_GET_NODE_FROM_VALID_PTE.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentThread; // rbp
  unsigned int v4; // esi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int16 v9; // ax

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( *(_QWORD *)(CurrentThread + 56) - (*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL) < 0x12000 )
    return 3221225659LL;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = ((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v7 < v6 )
  {
    if ( v7 >= ((*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      v8 = ((__int64)(v6 - v7 - 8) >> 3) + 1;
      if ( (unsigned int)MiChargeResident(MiSystemPartition, v8, 0LL) )
      {
        v9 = MI_GET_NODE_FROM_VALID_PTE(((*(_QWORD *)(CurrentThread + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        if ( (unsigned int)MiAllocateKernelStackPages((__int64 *)v7, v8, CurrentThread | 1, v9, 2) )
        {
          *(_QWORD *)(CurrentThread + 48) = (__int64)(v7 << 25) >> 16;
        }
        else
        {
          MiReturnResidentAvailable(v8);
          v4 = -1073741670;
        }
      }
      else
      {
        v4 = -1073741801;
      }
    }
    else
    {
      ++dword_1403275A0;
      v4 = -1073741571;
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
