/*
 * XREFs of MmDeleteKernelStack @ 0x140022520
 * Callers:
 *     MiAdjustCachedStacks @ 0x140012A34 (MiAdjustCachedStacks.c)
 *     PspDeleteKernelStack @ 0x1400216D0 (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x1403EB280 (KeInitThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x140452450 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x14055CCCC (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x14057F020 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402239E4 (MiLogKernelStackEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

PSLIST_ENTRY __fastcall MmDeleteKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r9
  bool v4; // zf
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  BOOL v11; // r12d
  unsigned __int64 v12; // r8
  __int64 Process; // rcx
  unsigned int v14; // r13d
  char *v15; // r15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v25; // edi
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  _SLIST_HEADER *v31; // rcx
  __int64 v32; // r13
  unsigned __int64 v33; // rcx
  int v34; // r15d
  int v35; // r12d
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned int v45; // edi
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // rax
  PSLIST_ENTRY result; // rax
  unsigned __int64 v50; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v51; // [rsp+28h] [rbp-80h] BYREF
  __int64 v52; // [rsp+30h] [rbp-78h]
  unsigned __int64 v53; // [rsp+38h] [rbp-70h]
  _SLIST_ENTRY *v54; // [rsp+40h] [rbp-68h]
  __int64 v55; // [rsp+48h] [rbp-60h]
  PSLIST_HEADER ListHead; // [rsp+50h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp+8h]
  unsigned int v58; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v60; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v61; // [rsp+C8h] [rbp+20h] BYREF

  v58 = a2;
  v2 = a2;
  v3 = a1;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 4) != 0 )
  {
    v4 = (a2 & 1) == 0;
    v5 = 18LL;
    if ( v4 )
      v5 = (unsigned __int8)byte_14034F5F8;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v5 << 12), v5, 0LL);
    v3 = a1;
  }
  v6 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v60 = v6;
  if ( (v2 & 1) == 0 )
  {
    PteShadow = *(_QWORD *)v6;
    v8 = 0x90482413000LL;
    if ( v6 + 0x90482413000LL <= 0x7F8 )
      PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
    v61 = PteShadow;
    if ( (unsigned __int64)&v61 + v8 <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v61, PteShadow);
    v9 = 0LL;
    v10 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
    v11 = 0;
    v12 = 2LL;
    Process = 6 * v10;
    v14 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL)) >> 2;
    v52 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL)) >> 2;
    if ( (v2 & 8) != 0 )
    {
      v15 = (char *)&v50 + v8;
      v16 = v6 + v8;
      while ( 1 )
      {
        v17 = *(_QWORD *)v6;
        if ( v16 <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, a2)
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v18 = *(_QWORD *)(Process + 1520);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * ((v6 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v19 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
        v50 = v17;
        v20 = v17;
        if ( (unsigned __int64)v15 <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, v17) && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v21 = *(_QWORD *)(Process + 1520);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v50 >> 3) & 0x1FF));
              if ( (v22 & 0x20) != 0 )
                v20 |= 0x20uLL;
              if ( (v22 & 0x42) != 0 )
                v20 |= 0x42uLL;
            }
          }
          v12 = 2LL;
        }
        v23 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v12);
        v25 = v9;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
        {
          Process = 0x8000000000000000uLL;
          do
          {
            if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v25);
              Process = 0x8000000000000000uLL;
            }
          }
          while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
          v6 = v60;
          v9 = 0LL;
        }
        a2 = *(_QWORD *)v6;
        if ( v16 <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, a2)
          && (a2 & 1) != 0
          && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v26 = *(_QWORD *)(Process + 1520);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 8 * ((v6 >> 3) & 0x1FF));
            if ( (v27 & 0x20) != 0 )
              a2 |= 0x20uLL;
            if ( (v27 & 0x42) != 0 )
              a2 |= 0x42uLL;
          }
        }
        v12 = 2LL;
        if ( v17 == a2 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      v28 = *(_QWORD *)v23;
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v14 = v52;
      v11 = v28 == -5;
      v8 = 0x90482413000LL;
    }
    v29 = 13LL * v14;
    v30 = v11;
    v55 = v29;
    while ( 1 )
    {
      v57 = v30;
      v31 = &qword_14034EB70[2 * v29 + 7 + 2 * v30];
      ListHead = v31;
      if ( LOWORD(v31->Alignment) < SLODWORD(v31[1].Alignment) )
      {
        v32 = (__int64)(v6 << 25) >> 16;
        v54 = (_SLIST_ENTRY *)v32;
        *(_QWORD *)(v32 + 0xFE0) = v32 ^ qword_14034FB80;
        if ( v30 == 1 )
          return RtlpInterlockedPushEntrySList(v31, (PSLIST_ENTRY)(v32 + 4080));
        v52 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v33 = (unsigned __int8)byte_14034F5F8;
        v34 = -1;
        v35 = 1;
        v36 = v6 - 8LL * (unsigned __int8)byte_14034F5F8;
        v37 = v36 + 8LL * ((unsigned int)(unsigned __int8)byte_14034F5F8 + 1);
        v38 = v36 + 8;
        v53 = v37;
        if ( v38 >= v37 )
          goto LABEL_113;
        v39 = v38 + v8;
        do
        {
          v40 = *(_QWORD *)v38;
          if ( v39 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v33, v30)
            && (v40 & 1) != 0
            && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
          {
            v33 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v30 = *(_QWORD *)(v33 + 1520);
            if ( v30 )
            {
              v41 = *(_QWORD *)(v30 + 8 * ((v38 >> 3) & 0x1FF));
              if ( (v41 & 0x20) != 0 )
                v40 |= 0x20uLL;
              if ( (v41 & 0x42) != 0 )
                v40 |= 0x42uLL;
            }
          }
          v51 = v40;
          if ( (v40 & 1) != 0 )
          {
            v42 = v40;
            if ( (unsigned __int64)&v51 + v8 <= 0x7F8
              && (unsigned int)MiPteHasShadow(v33, v40)
              && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
            {
              v33 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v43 = *(_QWORD *)(v33 + 1520);
              if ( v43 )
              {
                v44 = *(_QWORD *)(v43 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
                if ( (v44 & 0x20) != 0 )
                  v42 |= 0x20uLL;
                if ( (v44 & 0x42) != 0 )
                  v42 |= 0x42uLL;
              }
            }
            v45 = v9;
            v46 = 48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
            {
              v33 = 0x8000000000000000uLL;
              do
              {
                if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                {
                  _mm_pause();
                }
                else
                {
                  HvlNotifyLongSpinWait(v45);
                  v33 = 0x8000000000000000uLL;
                }
              }
              while ( (*(_QWORD *)(v46 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
              v37 = v53;
              v9 = 0LL;
              v8 = 0x90482413000LL;
            }
            v30 = *(_QWORD *)v38;
            if ( v39 <= 0x7F8
              && (unsigned int)MiPteHasShadow(v33, v30)
              && (v30 & 1) != 0
              && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
            {
              v33 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v47 = *(_QWORD *)(v33 + 1520);
              if ( v47 )
              {
                v48 = *(_QWORD *)(v47 + 8 * ((v38 >> 3) & 0x1FF));
                if ( (v48 & 0x20) != 0 )
                  v30 |= 0x20uLL;
                if ( (v48 & 0x42) != 0 )
                  v30 |= 0x42uLL;
              }
            }
            if ( v40 == v30 )
            {
              if ( v34 == -1 )
              {
                v34 = (unsigned __int8)HIBYTE(*(_QWORD *)(v46 + 40)) >> 2;
              }
              else if ( v34 != (unsigned __int8)HIBYTE(*(_QWORD *)(v46 + 40)) >> 2 )
              {
                v35 = v9;
              }
              v38 += 8LL;
              *(_QWORD *)v46 = v9;
              v39 += 8LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v38 += 8LL;
            v39 += 8LL;
          }
        }
        while ( v38 < v37 );
        v32 = (__int64)v54;
        if ( v35 == 1 )
        {
LABEL_113:
          RtlpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)(v32 + 4080));
          result = (PSLIST_ENTRY)(unsigned __int8)v52;
          __writecr8((unsigned __int8)v52);
          return result;
        }
        __writecr8((unsigned __int8)v52);
        v30 = v57;
        v6 = v60;
      }
      if ( v30 != 1 )
        break;
      v29 = v55;
      v30 = v9;
    }
    v2 = v58;
  }
  return (PSLIST_ENTRY)MiDeleteKernelStack(v6, v2);
}
