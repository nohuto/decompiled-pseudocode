/*
 * XREFs of MmGrowKernelStackEx @ 0x140169560
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400217C0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KxSwitchKernelStackCallout @ 0x140186620 (KxSwitchKernelStackCallout.c)
 *     MmGrowKernelStack @ 0x140217120 (MmGrowKernelStack.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 CurrentThread; // rbp
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 *v13; // rcx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( *(_QWORD *)(CurrentThread + 56) - (*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL) < 0x12000 )
    return 3221225659LL;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = ((*(_QWORD *)(CurrentThread + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v9 < v8 )
  {
    if ( v9 >= ((*(_QWORD *)(*(_QWORD *)(CurrentThread + 40) + 8LL) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      v10 = ((__int64)(v8 - v9 - 8) >> 3) + 1;
      if ( (unsigned int)MiChargeResident(MiSystemPartition, v10, 0LL, a4) )
      {
        _InterlockedExchangeAdd64(&qword_14034F7C8, v10);
        v11 = 0x90482413000LL;
        v12 = 2040LL;
        v13 = (unsigned __int64 *)(((*(_QWORD *)(CurrentThread + 56) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
        PteShadow = *v13;
        if ( (unsigned __int64)(v13 + 0x12090482600LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(v13, *v13);
        v15 = PteShadow;
        if ( (unsigned __int64)&v15 + v11 <= v12 )
          PteShadow = MiReadPteShadow(&v15, PteShadow);
        if ( (unsigned int)MiAllocateKernelStackPages(
                             (unsigned __int64 *)v9,
                             v10,
                             CurrentThread | 1,
                             *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 58,
                             2) )
        {
          *(_QWORD *)(CurrentThread + 48) = (__int64)(v9 << 25) >> 16;
        }
        else
        {
          MiReturnResidentAvailable(v10);
          _InterlockedExchangeAdd64(&qword_14034F7E0, v10);
          v6 = -1073741670;
        }
      }
      else
      {
        v6 = -1073741801;
      }
    }
    else
    {
      ++dword_14034F610;
      v6 = -1073741571;
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
