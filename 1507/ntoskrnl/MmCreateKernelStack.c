/*
 * XREFs of MmCreateKernelStack @ 0x140022090
 * Callers:
 *     MiAdjustCachedStacks @ 0x140012A34 (MiAdjustCachedStacks.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400219C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x1403EB280 (KeInitThread.c)
 *     KeUserModeCallback @ 0x140452450 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x14057F020 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402239E4 (MiLogKernelStackEvent.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MmCreateKernelStack(int a1, unsigned __int16 a2, __int64 a3)
{
  __int64 CurrentIrql; // r13
  char v5; // r12
  int v6; // eax
  BOOL v7; // ebp
  _BOOL8 i; // rbx
  _SLIST_HEADER *v9; // rdi
  __int16 Alignment; // si
  PSLIST_ENTRY v11; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v13; // r14
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  unsigned __int64 v17; // r9
  unsigned __int64 *v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rbp
  __int64 PteShadow; // rbx
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  __int64 v24; // rsi
  __int64 v25; // rax
  char v26; // bp
  unsigned int v27; // r13d
  unsigned __int64 v28; // r14
  unsigned __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // ebp
  int v34; // ecx
  __int64 v35; // [rsp+30h] [rbp-78h]
  unsigned __int64 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38; // [rsp+48h] [rbp-60h]
  unsigned __int64 v39; // [rsp+50h] [rbp-58h]
  unsigned __int64 *v40; // [rsp+58h] [rbp-50h]
  __int64 v41; // [rsp+60h] [rbp-48h]
  unsigned int v43; // [rsp+C8h] [rbp+20h]

  v5 = a1;
  v6 = a1 & 0x10;
  if ( (a1 & 0x10) != 0 )
  {
    v35 = -5LL;
  }
  else if ( a3 )
  {
    v35 = a3 | 1;
  }
  else
  {
    v35 = -3LL;
  }
  if ( (a1 & 1) == 0 )
  {
    v43 = (unsigned __int8)byte_14034F5F8;
    v7 = v6 != 0;
    v36 = (unsigned __int8)byte_14034F5F8;
    for ( i = v6 != 0; ; i = 0LL )
    {
      v9 = &qword_14034EB70[26 * a2 + 2 * i];
      Alignment = v9[7].Alignment;
      if ( Alignment )
      {
        if ( i )
        {
          LOBYTE(CurrentIrql) = 17;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
        }
        v38 = CurrentIrql;
        v11 = RtlpInterlockedPopEntrySList(v9 + 7);
        if ( v11 )
        {
          if ( Alignment == 1 && !*((_DWORD *)&v9[8].HeaderX64 + 3) )
            *((_DWORD *)&v9[8].HeaderX64 + 3) = 1;
          Next = (ULONG_PTR)v11[-1].Next;
          v13 = (ULONG_PTR)&v11[-255];
          BugCheckParameter4 = (unsigned __int64)&v11[-255] ^ qword_14034FB80;
          if ( Next != BugCheckParameter4 )
            KeBugCheckEx(0x1Au, 0x3470uLL, v13, Next, BugCheckParameter4);
          v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v16 = (__int64)((v15 << 25) + 0x10000000) >> 16;
          v41 = v16;
          if ( !v7 )
          {
            v17 = v15 - 8LL * (unsigned __int8)byte_14034F5F8 + 8;
            v18 = &STACK[0x90482413040];
            v39 = v17;
            v40 = &STACK[0x90482413040];
            v19 = 0x7FFFFFFFFFFFFFFFLL;
            v20 = v15 + 0x90482413000LL;
            do
            {
              PteShadow = *(_QWORD *)v15;
              if ( v20 <= 0x7F8 )
                PteShadow = MiReadPteShadow(v15, *(_QWORD *)v15);
              v37 = PteShadow;
              v22 = PteShadow;
              if ( (unsigned __int64)v18 <= 0x7F8 )
                v22 = MiReadPteShadow(&v37, PteShadow);
              v23 = 0;
              v24 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v23);
                }
                while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0
                     || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
                v17 = v39;
                v19 = 0x7FFFFFFFFFFFFFFFLL;
                v18 = v40;
              }
              v25 = *(_QWORD *)v15;
              if ( v20 <= 0x7F8 )
                v25 = MiReadPteShadow(v15, *(_QWORD *)v15);
              if ( PteShadow == v25 )
              {
                v15 -= 8LL;
                *(_QWORD *)v24 = v35;
                v20 -= 8LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), v19);
            }
            while ( v15 >= v17 );
            __writecr8((unsigned __int8)v38);
            v16 = v41;
          }
          v26 = a1;
          v27 = v43;
          LODWORD(v28) = v36;
LABEL_42:
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v26 & 8) != 0 )
            MiLogKernelStackEvent(v16 - (v27 << 12), (unsigned int)v28, 1LL);
          return v16;
        }
        if ( !i )
          __writecr8((unsigned __int8)CurrentIrql);
      }
      ++*((_DWORD *)&v9[8].HeaderX64 + 1);
      if ( !i )
      {
        v28 = v36;
        v27 = v43;
        goto LABEL_50;
      }
      v7 = 0;
    }
  }
  v30 = 73728LL;
  v27 = 18;
  if ( (a1 & 4) == 0 )
    v30 = 24576LL;
  v28 = v30 >> 12;
LABEL_50:
  if ( !(unsigned int)MiChargeCommit(&MiSystemPartition, v27, (v5 & 2) != 0) )
    return 0LL;
  v31 = MiReservePtes(&qword_14034FC70, v27 + 1);
  v32 = v31;
  if ( v31 )
  {
    v33 = v31;
    v16 = ((v31 << 25) + ((v27 + 1LL) << 28)) >> 16;
    if ( (a1 & 5) == 1 )
      v33 = v31 + 96;
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, v28, 0LL) )
    {
      _InterlockedExchangeAdd64(&qword_14034F7C0, v28);
      v34 = v33 + 8;
      v26 = a1;
      if ( (unsigned int)MiAllocateKernelStackPages(v34, v28, v35, a2, a1) )
      {
        _InterlockedExchangeAdd64(&qword_14034FD08, v27);
        goto LABEL_42;
      }
      MiReturnResidentAvailable(v28);
      _InterlockedExchangeAdd64(&qword_14034F7D8, v28);
    }
    MiReleasePtes(&qword_14034FC70, v32, v27 + 1);
  }
  MiReturnCommit(&MiSystemPartition, v27);
  return 0LL;
}
