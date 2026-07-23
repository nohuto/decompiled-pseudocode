/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400EEEF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MiClearStackOwners @ 0x1400EFD5C (MiClearStackOwners.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiSwitchKernelStackAndCallout @ 0x140161D60 (KiSwitchKernelStackAndCallout.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1401EECBC (MiLogKernelStackEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  int v8; // ecx
  unsigned __int8 v9; // bl
  LARGE_INTEGER *Timeout; // r15
  unsigned int v13; // esi
  unsigned __int64 KernelStack; // rbp
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // r8
  struct _KTHREAD *v18; // r15
  int MiscFlags; // eax
  __int64 v20; // r8
  unsigned int v21; // r12d
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  __int64 v24; // r9
  __int64 v25; // r12
  int v26; // ebp
  unsigned int v27; // r14d
  unsigned __int64 v28; // r10
  __int64 v29; // rdi
  unsigned __int8 v30; // si
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 i; // rsi
  _SLIST_HEADER *v37; // rbp
  __int64 v38; // rdi
  unsigned __int8 v39; // r14
  bool v40; // zf
  unsigned __int8 v41; // al
  int v42; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD *v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h] BYREF
  __int64 v45; // [rsp+48h] [rbp-40h] BYREF
  __int64 v46; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentIrql; // [rsp+58h] [rbp-30h]
  unsigned int v48; // [rsp+A0h] [rbp+18h]
  unsigned int v49; // [rsp+B0h] [rbp+28h]

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  v9 = 0;
  v48 = 0;
  Timeout = 0LL;
  v43 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v45 = 0LL;
    Timeout = (LARGE_INTEGER *)&v45;
    if ( a5 )
      v9 = 16;
    else
      a4 |= 4u;
  }
  v13 = 0;
  if ( a3 <= (unsigned int)KeKernelStackSize )
  {
    a4 |= 8u;
    a3 = 0LL;
  }
  else
  {
    v9 |= 1u;
    v48 = 1;
    v13 = 1;
    v8 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v13 = 5;
  }
  if ( (v9 & 0x10) == 0 )
  {
    if ( (a4 & 2) == 0 )
      v13 |= 2u;
    if ( (a4 & 4) != 0 )
    {
      v8 |= 2u;
      v48 = v8;
    }
    if ( (a4 & 8) != 0 )
    {
      v13 |= 0x10u;
      v48 = v8 | 8;
    }
    KernelStack = MmCreateKernelStack(
                    v13,
                    *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL),
                    CurrentThread);
    if ( KernelStack )
      goto LABEL_32;
    CurrentThread = v43;
  }
  if ( !a5 || (v9 & 1) != 0 && !*(_BYTE *)(a5 + 4) )
    return 3221225495LL;
  if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
    v9 |= 4u;
  if ( KeWaitForSingleObject((PVOID)(a5 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
  {
    v43->MiscFlags ^= (v43->MiscFlags ^ (v9 << 13)) & 0x8000;
    return 3221227272LL;
  }
  v16 = *(_BYTE *)(a5 + 6);
  if ( v16 >= *(_BYTE *)(a5 + 5) )
  {
    KeReleaseMutex((PRKMUTEX)(a5 + 8), 0);
    return 3221225495LL;
  }
  v9 |= 8u;
  KernelStack = *(_QWORD *)(a5 + 8LL * v16 + 64);
  *(_BYTE *)(a5 + 6) = v16 + 1;
  if ( (v9 & 1) == 0 && *(_BYTE *)(a5 + 4) )
  {
    LOBYTE(v13) = v13 | 5;
    a3 = 71680LL;
    v9 |= 1u;
  }
LABEL_32:
  *(_QWORD *)(KernelStack - 48) = KernelStack;
  v17 = KernelStack - 48;
  if ( (v9 & 1) != 0 )
    *(_QWORD *)(v17 + 8) = KernelStack - 73727;
  else
    *(_QWORD *)(v17 + 8) = KernelStack - (unsigned int)KeKernelStackSize + 1;
  v18 = v43;
  *(_QWORD *)(v17 + 16) = v43->StackBase;
  *(_QWORD *)(v17 + 40) = v18->InitialStack;
  if ( (v13 & 1) != 0 )
  {
    v17 |= 1uLL;
    if ( (v13 & 4) != 0 )
      v17 |= 2uLL;
  }
  MiscFlags = v18->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
    v9 |= 2u;
  else
    v18->MiscFlags = MiscFlags | 0x1000;
  v49 = KiSwitchKernelStackAndCallout(a2, a1, v17, a3);
  v21 = v49;
  if ( (v9 & 8) != 0 )
  {
    v40 = (*(_BYTE *)(a5 + 6))-- == 1;
    if ( v40 && (v9 & 4) == 0 )
      v18->MiscFlags &= ~0x8000u;
    KeReleaseMutex((PRKMUTEX)(a5 + 8), 0);
  }
  else
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v48 & 4) != 0 )
    {
      v22 = 18LL;
      if ( (v48 & 1) == 0 )
        v22 = (unsigned __int8)byte_140327580;
      MiLogKernelStackEvent(KernelStack - (unsigned int)((_DWORD)v22 << 12), v22, 0LL);
    }
    v23 = KernelStack >> 9;
    v24 = 0xFFFFF68000000000uLL;
    v25 = (v23 & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    if ( (v48 & 1) == 0 )
    {
      v46 = MI_READ_PTE_LOCK_FREE((v23 & 0x7FFFFFFFF8LL) - 0x98000000008LL);
      v26 = 0;
      v27 = (unsigned __int8)HIBYTE(*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v46) - 0x57FFFFFFFD8LL)) >> 2;
      v28 = 2LL;
      if ( (v48 & 8) != 0 )
      {
        while ( 1 )
        {
          v44 = MI_READ_PTE_LOCK_FREE(v25);
          v29 = MI_GET_PFN_FROM_PTE(&v44);
          v30 = KeGetCurrentIrql();
          __writecr8(v31);
          v42 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v42);
            while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0 );
          }
          v32 = MI_READ_PTE_LOCK_FREE(v25);
          if ( v44 == v32 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), v33);
          __writecr8(v30);
        }
        v34 = *(_QWORD *)v29;
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), v33);
        __writecr8(v30);
        v24 = 0xFFFFF68000000000uLL;
        if ( v34 == -5 )
          v26 = 1;
      }
      v35 = 13LL * v27;
      for ( i = v26; ; i = 0LL )
      {
        v37 = &qword_1403269F0[2 * v35 + 2 * i];
        if ( LOWORD(v37[7].Alignment) < SLODWORD(v37[8].Alignment) )
        {
          v38 = ((v25 << 25) - (v24 << 25)) >> 16;
          *(_QWORD *)(v38 + 0xFE0) = qword_1403277C0 ^ v38;
          if ( i == 1 )
          {
            RtlpInterlockedPushEntrySList(v37 + 7, (PSLIST_ENTRY)(v38 + 4080));
            v21 = v49;
            goto LABEL_70;
          }
          v39 = KeGetCurrentIrql();
          __writecr8(v28);
          if ( (unsigned int)MiClearStackOwners(v25, v48, v20, v24) == 1 )
          {
            RtlpInterlockedPushEntrySList(v37 + 7, (PSLIST_ENTRY)(v38 + 4080));
            __writecr8(v39);
            v21 = v49;
            goto LABEL_70;
          }
          __writecr8(v39);
        }
        if ( i != 1 )
          break;
        v24 = 0xFFFFF68000000000uLL;
        v28 = 2LL;
      }
    }
    MiDeleteKernelStack(v25, v48, v20, v24);
    v21 = v49;
  }
LABEL_70:
  if ( (v9 & 2) == 0 )
    v43->MiscFlags &= ~0x1000u;
  v41 = KeGetCurrentIrql();
  if ( v41 != (_BYTE)CurrentIrql )
    KeBugCheckEx(0xC8u, (unsigned __int8)CurrentIrql, v41, 0LL, 0LL);
  return v21;
}
