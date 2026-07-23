/*
 * XREFs of MmCreateKernelStack @ 0x1400EF600
 * Callers:
 *     MiAdjustCachedStacks @ 0x1400BCA34 (MiAdjustCachedStacks.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 *     KeUserModeCallback @ 0x1404F9110 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x140541C24 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x140001B34 (MiAllocateKernelStackPages.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1401EECBC (MiLogKernelStackEvent.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmCreateKernelStack(char a1, unsigned __int16 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r13
  BOOL v6; // ebp
  _BOOL8 v7; // rbx
  __int64 v8; // r14
  _SLIST_HEADER *v9; // rdi
  __int16 Alignment; // si
  unsigned __int8 CurrentIrql; // r12
  PSLIST_ENTRY v12; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v14; // rdi
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  char v23; // bp
  unsigned __int64 v24; // r12
  unsigned __int64 v26; // r12
  unsigned int v27; // edi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r8
  unsigned int v30; // esi
  ULONG_PTR v31; // rax
  __int64 v32; // rdi
  ULONG_PTR v33; // rbp
  __int64 *v34; // rcx
  int v35; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h] BYREF
  char v38; // [rsp+90h] [rbp+8h]
  int v39; // [rsp+A8h] [rbp+20h]

  v38 = a1;
  v4 = a1 & 0x10;
  if ( (a1 & 0x10) != 0 )
  {
    v5 = -5LL;
  }
  else if ( a3 )
  {
    v5 = a3 | 1;
  }
  else
  {
    v5 = -3LL;
  }
  if ( (a1 & 1) == 0 )
  {
    v39 = (unsigned __int8)byte_140327580;
    v6 = v4 != 0;
    v36 = (unsigned __int8)byte_140327580;
    v7 = v4 != 0;
    v8 = 13LL * a2;
    while ( 1 )
    {
      v9 = &qword_1403269F0[2 * v8 + 2 * v7];
      Alignment = v9[7].Alignment;
      if ( Alignment )
      {
        if ( v7 )
        {
          CurrentIrql = 17;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
        }
        v12 = RtlpInterlockedPopEntrySList(v9 + 7);
        if ( v12 )
        {
          if ( Alignment == 1 && !*((_DWORD *)&v9[8].HeaderX64 + 3) )
            *((_DWORD *)&v9[8].HeaderX64 + 3) = 1;
          Next = (ULONG_PTR)v12[-1].Next;
          v14 = (ULONG_PTR)&v12[-255];
          BugCheckParameter4 = (unsigned __int64)&v12[-255] ^ qword_1403277C0;
          if ( Next != BugCheckParameter4 )
            KeBugCheckEx(0x1Au, 0x3470uLL, v14, Next, BugCheckParameter4);
          v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 = (__int64)((v16 << 25) + 0x10000000) >> 16;
          if ( !v6 )
          {
            v18 = v16 - 8LL * (unsigned __int8)byte_140327580 + 8;
            do
            {
              v37 = MI_READ_PTE_LOCK_FREE(v16);
              v19 = MI_GET_PFN_FROM_PTE(&v37);
              v35 = 0;
              v20 = v19;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v35);
                while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0 );
              }
              v21 = MI_READ_PTE_LOCK_FREE(v16);
              if ( v37 == v21 )
              {
                *(_QWORD *)v20 = v5;
                v16 -= 8LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), v22);
            }
            while ( v16 >= v18 );
            __writecr8(CurrentIrql);
          }
          v23 = v38;
          LODWORD(v24) = v36;
LABEL_31:
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v23 & 8) != 0 )
            MiLogKernelStackEvent(v17 - (unsigned int)(v39 << 12), (unsigned int)v24, 1LL);
          return v17;
        }
        if ( !v7 )
          __writecr8(CurrentIrql);
      }
      ++*((_DWORD *)&v9[8].HeaderX64 + 1);
      if ( !v7 )
      {
        v24 = v36;
        v27 = v39;
        a1 = v38;
        goto LABEL_39;
      }
      v6 = 0;
      v7 = 0LL;
    }
  }
  v26 = 73728LL;
  v27 = 18;
  if ( (a1 & 4) == 0 )
    v26 = 24576LL;
  v39 = 18;
  v24 = v26 >> 12;
LABEL_39:
  v28 = v27;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v27, (a1 & 2) != 0) )
    return 0LL;
  v30 = v27 + 1;
  v31 = MiReservePtes((__int64)&qword_1403278B0, v27 + 1, v29);
  v32 = v31;
  if ( v31 )
  {
    v33 = v31;
    v17 = (__int64)((v31 << 25) + ((v28 + 1) << 28)) >> 16;
    if ( (v38 & 5) == 1 )
      v33 = v31 + 96;
    if ( (unsigned int)MiChargeResident(MiSystemPartition, v24, 0LL) )
    {
      v34 = (__int64 *)(v33 + 8);
      v23 = v38;
      if ( (unsigned int)MiAllocateKernelStackPages(v34, v24, v5, a2, v38) )
      {
        _InterlockedExchangeAdd64(&qword_140327950, v28);
        goto LABEL_31;
      }
      MiReturnResidentAvailable(v24);
    }
    MiReleasePtes((__int64)&qword_1403278B0, v32, v30);
  }
  MiReturnCommit((__int64)MiSystemPartition, v28);
  return 0LL;
}
