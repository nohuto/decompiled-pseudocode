/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x14002C660
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14002C460 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MiClearStackOwners @ 0x14002D2EC (MiClearStackOwners.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiSwitchKernelStackAndCallout @ 0x140156FA0 (KiSwitchKernelStackAndCallout.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogKernelStackEvent @ 0x1401DE3D4 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // ecx
  unsigned __int8 v8; // bl
  LARGE_INTEGER *Timeout; // r15
  __int64 v10; // r14
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // r8
  int MiscFlags; // eax
  unsigned int v19; // r12d
  unsigned int v20; // r12d
  __int64 v21; // rdx
  unsigned __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // rax
  int v25; // ebp
  unsigned int v26; // r14d
  __int64 v27; // rdi
  unsigned __int8 v28; // si
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 i; // rsi
  _SLIST_HEADER *v33; // rbp
  __int64 v34; // rdi
  unsigned __int8 v35; // r14
  bool v36; // zf
  unsigned __int8 v37; // al
  __int64 KernelStack; // [rsp+30h] [rbp-68h] BYREF
  struct _KTHREAD *v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+48h] [rbp-50h] BYREF
  __int64 v42; // [rsp+50h] [rbp-48h] BYREF
  __int64 v43; // [rsp+58h] [rbp-40h]
  __int64 CurrentIrql; // [rsp+60h] [rbp-38h]
  int v45; // [rsp+B0h] [rbp+18h]
  unsigned int v46; // [rsp+C0h] [rbp+28h]

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v39 = CurrentThread;
  v8 = 0;
  v45 = 0;
  Timeout = 0LL;
  v10 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v41 = 0LL;
    Timeout = (LARGE_INTEGER *)&v41;
    if ( a5 )
      v8 = 16;
    else
      a4 |= 4u;
  }
  v13 = 0;
  if ( a3 <= (unsigned int)KeKernelStackSize )
  {
    a4 |= 8u;
    v10 = 0LL;
  }
  else
  {
    v8 |= 1u;
    v45 = 1;
    v13 = 1;
    v7 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v13 = 5;
  }
  if ( (v8 & 0x10) != 0 )
    goto LABEL_77;
  if ( (a4 & 2) == 0 )
    v13 |= 2u;
  if ( (a4 & 4) != 0 )
  {
    v7 |= 2u;
    v45 = v7;
  }
  if ( (a4 & 8) != 0 )
  {
    v13 |= 0x10u;
    v45 = v7 | 8;
  }
  KernelStack = MmCreateKernelStack(
                  v13,
                  *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL),
                  CurrentThread);
  v14 = KernelStack;
  if ( !KernelStack )
  {
LABEL_77:
    if ( !a5 || (v8 & 1) != 0 && !*(_BYTE *)(a5 + 4) )
      return 3221225495LL;
    if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
      v8 |= 4u;
    if ( KeWaitForSingleObject((PVOID)(a5 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
    {
      CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (v8 << 13)) & 0x8000;
      return 3221227272LL;
    }
    v16 = *(_BYTE *)(a5 + 6);
    if ( v16 >= *(_BYTE *)(a5 + 5) )
    {
      KeReleaseMutex((PRKMUTEX)(a5 + 8), 0);
      return 3221225495LL;
    }
    v8 |= 8u;
    v14 = *(_QWORD *)(a5 + 8LL * v16 + 64);
    KernelStack = v14;
    *(_BYTE *)(a5 + 6) = v16 + 1;
    if ( (v8 & 1) == 0 && *(_BYTE *)(a5 + 4) )
    {
      LOBYTE(v13) = v13 | 5;
      v10 = 71680LL;
      v8 |= 1u;
    }
  }
  *(_QWORD *)(v14 - 48) = v14;
  v17 = v14 - 48;
  if ( (v8 & 1) != 0 )
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
    v8 |= 2u;
  else
    CurrentThread->MiscFlags = MiscFlags | 0x1000;
  v46 = KiSwitchKernelStackAndCallout(a2, a1, v17, v10);
  v19 = v46;
  if ( (v8 & 8) != 0 )
  {
    v36 = (*(_BYTE *)(a5 + 6))-- == 1;
    if ( v36 && (v8 & 4) == 0 )
      CurrentThread->MiscFlags &= ~0x8000u;
    KeReleaseMutex((PRKMUTEX)(a5 + 8), 0);
  }
  else
  {
    v20 = v45;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v45 & 4) != 0 )
    {
      v21 = 18LL;
      if ( (v45 & 1) == 0 )
        v21 = (unsigned __int8)byte_1402FF138;
      v22 = KernelStack;
      MiLogKernelStackEvent(KernelStack - (unsigned int)((_DWORD)v21 << 12), v21, 0LL);
    }
    else
    {
      v22 = KernelStack;
    }
    v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    if ( (v45 & 1) == 0 )
    {
      v42 = MI_READ_PTE_LOCK_FREE(v23);
      v24 = MI_GET_PAGE_FRAME_FROM_PTE(&v42);
      v25 = 0;
      v26 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v24 - 0x57FFFFFFFD8LL)) >> 2;
      v43 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v24 - 0x57FFFFFFFD8LL)) >> 2;
      if ( (v45 & 8) != 0 )
      {
        while ( 1 )
        {
          v40 = MI_READ_PTE_LOCK_FREE(v23);
          v27 = MI_GET_PFN_FROM_PTE(&v40);
          v28 = KeGetCurrentIrql();
          __writecr8(2uLL);
          LODWORD(KernelStack) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&KernelStack);
            while ( (*(_QWORD *)(v27 + 24) & 0x8000000000000000uLL) != 0 );
          }
          v29 = MI_READ_PTE_LOCK_FREE(v23);
          if ( v40 == v29 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v28);
        }
        v30 = *(_QWORD *)v27;
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v28);
        v20 = v45;
        v26 = v43;
        if ( v30 == -5 )
          v25 = 1;
      }
      v31 = 13LL * v26;
      for ( i = v25; ; i = 0LL )
      {
        v33 = &qword_1402FE6C0[2 * v31 + 2 * i];
        if ( LOWORD(v33[7].Alignment) < SLODWORD(v33[8].Alignment) )
        {
          v34 = v23 << 25 >> 16;
          *(_QWORD *)(v34 + 0xFE0) = qword_1402FF6C0 ^ v34;
          if ( i == 1 )
          {
            RtlpInterlockedPushEntrySList(v33 + 7, (PSLIST_ENTRY)(v34 + 4080));
            v19 = v46;
            goto LABEL_70;
          }
          v35 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (unsigned int)MiClearStackOwners(v23, v20) == 1 )
          {
            RtlpInterlockedPushEntrySList(v33 + 7, (PSLIST_ENTRY)(v34 + 4080));
            __writecr8(v35);
            v19 = v46;
            goto LABEL_70;
          }
          __writecr8(v35);
        }
        if ( i != 1 )
          break;
      }
    }
    MiDeleteKernelStack(v23, v20);
    v19 = v46;
  }
LABEL_70:
  if ( (v8 & 2) == 0 )
    v39->MiscFlags &= ~0x1000u;
  v37 = KeGetCurrentIrql();
  if ( v37 != (_BYTE)CurrentIrql )
    KeBugCheckEx(0xC8u, (unsigned __int8)CurrentIrql, v37, 0LL, 0LL);
  return v19;
}
