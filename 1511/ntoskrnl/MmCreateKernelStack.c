/*
 * XREFs of MmCreateKernelStack @ 0x14002CB50
 * Callers:
 *     MiAdjustCachedStacks @ 0x140013890 (MiAdjustCachedStacks.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14002C660 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x14039C2C0 (KeInitThread.c)
 *     KeUserModeCallback @ 0x1403F17A0 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x140509188 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogKernelStackEvent @ 0x1401DE3D4 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(int a1, unsigned __int16 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // r13
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
  __int64 v18; // rbp
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // r12d
  unsigned __int64 v24; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // ebp
  int v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  __int64 v33; // [rsp+50h] [rbp-48h]
  int v34; // [rsp+A0h] [rbp+8h]
  unsigned int v35; // [rsp+B8h] [rbp+20h]

  v34 = a1;
  v4 = a1 & 0x10;
  if ( (a1 & 0x10) != 0 )
  {
    v30 = -5LL;
  }
  else if ( a3 )
  {
    v30 = a3 | 1;
  }
  else
  {
    v30 = -3LL;
  }
  if ( (a1 & 1) == 0 )
  {
    v35 = (unsigned __int8)byte_1402FF138;
    v5 = (unsigned __int8)byte_1402FF138;
    v6 = v4 != 0;
    v33 = (unsigned __int8)byte_1402FF138;
    v7 = v4 != 0;
    v8 = 13LL * a2;
    while ( 1 )
    {
      v9 = &qword_1402FE6C0[2 * v8 + 2 * v7];
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
          BugCheckParameter4 = (unsigned __int64)&v12[-255] ^ qword_1402FF6C0;
          if ( Next != BugCheckParameter4 )
            KeBugCheckEx(0x1Au, 0x3470uLL, v14, Next, BugCheckParameter4);
          v16 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v17 = (__int64)((v16 << 25) + 0x10000000) >> 16;
          v32 = v17;
          if ( v6 )
          {
            v23 = v5;
          }
          else
          {
            v18 = v30;
            v19 = v16 - 8LL * (unsigned __int8)byte_1402FF138 + 8;
            do
            {
              v31 = MI_READ_PTE_LOCK_FREE(v16);
              v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v31);
              v29 = 0;
              v21 = 48 * v20 - 0x58000000000LL;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v29);
                while ( (*(_QWORD *)(v21 + 24) & 0x8000000000000000uLL) != 0 );
              }
              v22 = MI_READ_PTE_LOCK_FREE(v16);
              if ( v31 == v22 )
              {
                *(_QWORD *)v21 = v18;
                v16 -= 8LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            while ( v16 >= v19 );
            __writecr8(CurrentIrql);
            v17 = v32;
            LODWORD(v5) = v33;
            v23 = v35;
          }
LABEL_46:
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v34 & 8) != 0 )
            MiLogKernelStackEvent(v17 - (v23 << 12), (unsigned int)v5, 1LL);
          return v17;
        }
        if ( !v7 )
          __writecr8(CurrentIrql);
      }
      ++*((_DWORD *)&v9[8].HeaderX64 + 1);
      if ( !v7 )
      {
        LOBYTE(a1) = v34;
        v23 = v5;
        goto LABEL_34;
      }
      v6 = 0;
      v7 = 0LL;
    }
  }
  v24 = 73728LL;
  v23 = 18;
  if ( (a1 & 4) == 0 )
    v24 = 24576LL;
  v5 = v24 >> 12;
LABEL_34:
  if ( !(unsigned int)MiChargeCommit(&MiSystemPartition, v23, (a1 & 2) != 0) )
    return 0LL;
  v26 = MiReservePtes(&qword_1402FF7B0, v23 + 1);
  v27 = v26;
  if ( v26 )
  {
    v28 = v26;
    v17 = ((v26 << 25) + ((v23 + 1LL) << 28)) >> 16;
    if ( (v34 & 5) == 1 )
      v28 = v26 + 96;
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, v5, 0LL) )
    {
      _InterlockedExchangeAdd64(&qword_1402FF340, v5);
      if ( (unsigned int)MiAllocateKernelStackPages(v28 + 8, v5, v30, a2, v34) )
      {
        _InterlockedExchangeAdd64(&qword_1402FF848, v23);
        goto LABEL_46;
      }
      MiReturnResidentAvailable(v5);
      _InterlockedExchangeAdd64(&qword_1402FF358, v5);
    }
    MiReleasePtes(&qword_1402FF7B0, v27, v23 + 1);
  }
  MiReturnCommit(&MiSystemPartition, v23);
  return 0LL;
}
