/*
 * XREFs of KiDetachProcess @ 0x14009A430
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140113F60 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x14012EBF0 (KeDetachProcess.c)
 * Callees:
 *     KiMoveApcState @ 0x14009A9E0 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x14009AA60 (KiDecrementProcessStackCount.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140270914 (HvlSwitchVirtualAddressSpace.c)
 */

__int64 __fastcall KiDetachProcess(struct _KTHREAD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r12
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  $CD287064E7C9F7953DE243E927CFCB99 *v9; // rbx
  $4DF1778A7668F0E7B59F7C01D6E9C156 *v10; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v18; // rdx
  unsigned __int64 Group; // rcx
  unsigned __int64 GroupIndex; // r14
  __int64 v21; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( CurrentThread->ThreadLock );
  }
  while ( CurrentThread->ApcState.KernelApcPending )
  {
    if ( CurrentThread->SpecialApcDisable || CurrentIrql )
      break;
    CurrentThread->ThreadLock = 0LL;
    __writecr8(0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
      while ( CurrentThread->ThreadLock );
    }
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v9 = &CurrentThread->152, ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != v9)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v10 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPending = CurrentThread->SavedApcState.UserApcPending;
    Flink = v10->SavedApcState.ApcListHead[0].Flink;
    if ( ($4DF1778A7668F0E7B59F7C01D6E9C156 *)v10->SavedApcState.ApcListHead[0].Flink == v10 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v9->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v9;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v9->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v9;
      Blink->Flink = (struct _LIST_ENTRY *)v9;
    }
    v13 = &CurrentThread->SavedApcState.ApcListHead[1];
    v14 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v13->Flink == v13 )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v14->Flink = v14;
      CurrentThread->ApcState.UserApcPending = 0;
    }
    else
    {
      v15 = v13->Flink;
      v16 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v14->Flink = v15;
      CurrentThread->ApcState.ApcListHead[1].Blink = v16;
      v15->Blink = v14;
      v16->Flink = v14;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, &CurrentThread->152);
  }
  CurrentThread->ThreadLock = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = CurrentThread->ApcState.Process;
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  v21 = 8 * Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&v18->Header.Lock + v21), GroupIndex);
  DirectoryTableBase = v18->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v23 = v18->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v23 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v23);
    KiSetAddressPolicy(v18->AddressPolicy);
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(DirectoryTableBase);
  else
    __writecr3(DirectoryTableBase);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    Group = __readcr4();
    if ( (Group & 0x20080) != 0 )
    {
      __writecr4(Group ^ 0x80);
      __writecr4(Group);
    }
    else
    {
      v24 = __readcr3();
      __writecr3(v24);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v21), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !a2 )
    result = KiDecrementProcessStackCount(Process);
  if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != v9 )
  {
    LOBYTE(Group) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(Group);
  }
  return result;
}
