/*
 * XREFs of MmGrowKernelStackEx @ 0x14013D1C8
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14002C460 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x140157030 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x1401D5298 (MmGrowKernelStack.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  unsigned __int64 CurrentThread; // rbp
  unsigned int v4; // esi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

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
        _InterlockedExchangeAdd64(&qword_1402FF348, v8);
        v10 = MI_READ_PTE_LOCK_FREE(((*(_QWORD *)(CurrentThread + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v10);
        if ( (unsigned int)MiAllocateKernelStackPages(
                             (unsigned __int64 *)v7,
                             v8,
                             CurrentThread | 1,
                             *(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 58,
                             2) )
        {
          *(_QWORD *)(CurrentThread + 48) = (__int64)(v7 << 25) >> 16;
        }
        else
        {
          MiReturnResidentAvailable(v8);
          _InterlockedExchangeAdd64(&qword_1402FF360, v8);
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
      ++dword_1402FF150;
      v4 = -1073741571;
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
