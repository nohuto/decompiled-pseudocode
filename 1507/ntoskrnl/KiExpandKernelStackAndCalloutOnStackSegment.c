/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400219C0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400217C0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     KeReleaseMutant @ 0x140022C40 (KeReleaseMutant.c)
 *     MiClearStackOwners @ 0x140024ED4 (MiClearStackOwners.c)
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiSwitchKernelStackAndCallout @ 0x140186590 (KiSwitchKernelStackAndCallout.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402239E4 (MiLogKernelStackEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 v6; // di
  int v8; // ecx
  LARGE_INTEGER *Timeout; // r15
  __int64 v10; // r14
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // r8
  int MiscFlags; // eax
  unsigned __int64 v19; // rdx
  unsigned int v20; // r12d
  unsigned int v21; // r13d
  __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r12
  unsigned __int64 PteShadow; // rax
  __int64 v26; // r9
  __int64 v27; // r11
  __int64 Process; // rcx
  BOOL v29; // eax
  unsigned __int64 v30; // r10
  char *v31; // r13
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r14
  unsigned __int8 v41; // bp
  unsigned int v42; // esi
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  _BOOL8 v46; // rsi
  __int64 v47; // r15
  _SLIST_HEADER *v48; // rbp
  __int64 v49; // rbx
  unsigned __int8 v50; // r14
  bool v51; // zf
  unsigned __int8 v52; // al
  int v53; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *v54; // [rsp+38h] [rbp-60h]
  __int64 KernelStack; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-50h] BYREF
  __int64 v57; // [rsp+50h] [rbp-48h] BYREF
  __int64 v58; // [rsp+58h] [rbp-40h]
  __int64 CurrentIrql; // [rsp+60h] [rbp-38h]
  char v60; // [rsp+B0h] [rbp+18h]
  unsigned int v61; // [rsp+C0h] [rbp+28h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v60 = 0;
  v8 = 0;
  v54 = CurrentThread;
  v53 = 0;
  Timeout = 0LL;
  v10 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v57 = 0LL;
    Timeout = (LARGE_INTEGER *)&v57;
    if ( a5 )
    {
      v6 = 16;
      v60 = 16;
    }
    else
    {
      a4 |= 4u;
    }
  }
  v13 = 0;
  if ( a3 <= (unsigned int)KeKernelStackSize )
  {
    a4 |= 8u;
    v10 = 0LL;
  }
  else
  {
    v6 |= 1u;
    v53 = 1;
    v60 = v6;
    v13 = 1;
    v8 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v13 = 5;
  }
  if ( (v6 & 0x10) != 0 )
    goto LABEL_117;
  if ( (a4 & 2) == 0 )
    v13 |= 2u;
  if ( (a4 & 4) != 0 )
  {
    v8 |= 2u;
    v53 = v8;
  }
  if ( (a4 & 8) != 0 )
  {
    v13 |= 0x10u;
    v53 = v8 | 8;
  }
  KernelStack = MmCreateKernelStack(
                  v13,
                  *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL),
                  CurrentThread);
  v14 = KernelStack;
  if ( !KernelStack )
  {
LABEL_117:
    if ( !a5 || (v6 & 1) != 0 && !*(_BYTE *)(a5 + 4) )
      return 3221225495LL;
    if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
      v6 |= 4u;
    if ( KeWaitForSingleObject((PVOID)(a5 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
    {
      CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (v6 << 13)) & 0x8000;
      return 3221227272LL;
    }
    v16 = *(_BYTE *)(a5 + 6);
    if ( v16 >= *(_BYTE *)(a5 + 5) )
    {
      KeReleaseMutex((PRKMUTEX)(a5 + 8), 0);
      return 3221225495LL;
    }
    v6 |= 8u;
    v60 = v6;
    v14 = *(_QWORD *)(a5 + 8LL * v16 + 64);
    KernelStack = v14;
    *(_BYTE *)(a5 + 6) = v16 + 1;
    if ( (v6 & 1) == 0 && *(_BYTE *)(a5 + 4) )
    {
      LOBYTE(v13) = v13 | 5;
      v10 = 71680LL;
      v6 |= 1u;
      v60 = v6;
    }
  }
  *(_QWORD *)(v14 - 48) = v14;
  v17 = v14 - 48;
  if ( (v6 & 1) != 0 )
    *(_QWORD *)(v17 + 8) = v14 - 73727;
  else
    *(_QWORD *)(v17 + 8) = v14 - (unsigned int)KeKernelStackSize + 1;
  *(_QWORD *)(v17 + 16) = CurrentThread->StackBase;
  *(_QWORD *)(v17 + 40) = CurrentThread->InitialStack;
  if ( (v13 & 1) != 0 )
  {
    v17 |= 1uLL;
    if ( (v13 & 4) != 0 )
      v17 |= 2uLL;
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
  {
    v6 |= 2u;
    v60 = v6;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 0x1000;
  }
  v61 = KiSwitchKernelStackAndCallout(a2, a1, v17, v10);
  v20 = v61;
  if ( (v6 & 8) != 0 )
  {
    v51 = (*(_BYTE *)(a5 + 6))-- == 1;
    if ( v51 && (v6 & 4) == 0 )
      CurrentThread->MiscFlags &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(a5 + 8), 1, 0, 0);
  }
  else
  {
    v21 = v53;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v53 & 4) != 0 )
    {
      v22 = 18LL;
      if ( (v53 & 1) == 0 )
        v22 = (unsigned __int8)byte_14034F5F8;
      v23 = KernelStack;
      MiLogKernelStackEvent(KernelStack - (unsigned int)((_DWORD)v22 << 12), v22, 0LL);
    }
    else
    {
      v23 = KernelStack;
    }
    v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    if ( (v53 & 1) == 0 )
    {
      PteShadow = *(_QWORD *)v24;
      v26 = 0x90482413000LL;
      if ( v24 + 0x90482413000LL <= 0x7F8 )
        PteShadow = MiReadPteShadow(v24, *(_QWORD *)v24);
      KernelStack = PteShadow;
      if ( (unsigned __int64)&KernelStack + v26 <= 0x7F8 )
        PteShadow = MiReadPteShadow(&KernelStack, PteShadow);
      v27 = 0xFFFFFFFFFLL;
      Process = 6 * ((PteShadow >> 12) & 0xFFFFFFFFFLL);
      v58 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL)) >> 2;
      v29 = 0;
      v30 = 2LL;
      if ( (v53 & 8) != 0 )
      {
        v31 = (char *)&v56 + v26;
        v32 = v24 + v26;
        v33 = 0x7FFFFFFFFFFFFFFFLL;
        while ( 1 )
        {
          v34 = *(_QWORD *)v24;
          if ( v32 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v19)
            && (v34 & 1) != 0
            && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v35 = *(_QWORD *)(Process + 1520);
            if ( v35 )
            {
              v36 = *(_QWORD *)(v35 + 8 * ((v24 >> 3) & 0x1FF));
              if ( (v36 & 0x20) != 0 )
                v34 |= 0x20uLL;
              if ( (v36 & 0x42) != 0 )
                v34 |= 0x42uLL;
            }
          }
          v56 = v34;
          v37 = v34;
          if ( (unsigned __int64)v31 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v34)
            && (v34 & 1) != 0
            && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v38 = *(_QWORD *)(Process + 1520);
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 8 * (((unsigned __int64)&v56 >> 3) & 0x1FF));
              if ( (v39 & 0x20) != 0 )
                v37 |= 0x20uLL;
              if ( (v39 & 0x42) != 0 )
                v37 |= 0x42uLL;
            }
          }
          v40 = 48 * (v27 & (v37 >> 12)) - 0x58000000000LL;
          v41 = KeGetCurrentIrql();
          __writecr8(v30);
          v42 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
          {
            Process = 0x8000000000000000uLL;
            do
            {
              if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v42);
                Process = 0x8000000000000000uLL;
              }
            }
            while ( (*(_QWORD *)(v40 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
            v33 = 0x7FFFFFFFFFFFFFFFLL;
            v30 = 2LL;
            v27 = 0xFFFFFFFFFLL;
          }
          v19 = *(_QWORD *)v24;
          if ( v32 <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v19)
            && (v19 & 1) != 0
            && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v43 = *(_QWORD *)(Process + 1520);
            if ( v43 )
            {
              v44 = *(_QWORD *)(v43 + 8 * ((v24 >> 3) & 0x1FF));
              if ( (v44 & 0x20) != 0 )
                v19 |= 0x20uLL;
              if ( (v44 & 0x42) != 0 )
                v19 |= 0x42uLL;
            }
          }
          if ( v34 == v19 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), v33);
          __writecr8(v41);
        }
        v45 = *(_QWORD *)v40;
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), v33);
        __writecr8(v41);
        v6 = v60;
        v21 = v53;
        v29 = v45 == -5;
      }
      v46 = v29;
      v47 = 13LL * (unsigned int)v58;
      while ( 1 )
      {
        v48 = &qword_14034EB70[2 * v46 + 2 * v47];
        if ( LOWORD(v48[7].Alignment) < SLODWORD(v48[8].Alignment) )
        {
          v49 = (__int64)(v24 << 25) >> 16;
          *(_QWORD *)(v49 + 0xFE0) = qword_14034FB80 ^ v49;
          if ( v46 )
          {
            RtlpInterlockedPushEntrySList(v48 + 7, (PSLIST_ENTRY)(v49 + 4080));
            v20 = v61;
            goto LABEL_110;
          }
          v50 = KeGetCurrentIrql();
          __writecr8(v30);
          if ( (unsigned int)MiClearStackOwners(v24, v21) == 1 )
          {
            RtlpInterlockedPushEntrySList(v48 + 7, (PSLIST_ENTRY)(v49 + 4080));
            __writecr8(v50);
            v20 = v61;
            goto LABEL_110;
          }
          __writecr8(v50);
        }
        if ( !v46 )
          break;
        v46 = 0LL;
        v30 = 2LL;
      }
    }
    MiDeleteKernelStack(v24, v21);
    v20 = v61;
  }
LABEL_110:
  if ( (v6 & 2) == 0 )
    v54->MiscFlags &= ~0x1000u;
  v52 = KeGetCurrentIrql();
  if ( v52 != (_BYTE)CurrentIrql )
    KeBugCheckEx(0xC8u, (unsigned __int8)CurrentIrql, v52, 0LL, 0LL);
  return v20;
}
