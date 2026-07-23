/*
 * XREFs of KiDetachProcess @ 0x1400CC300
 * Callers:
 *     KeDetachProcess @ 0x1400AF040 (KeDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400CB05C (KeUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiMoveApcState @ 0x1400CC940 (KiMoveApcState.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401C146C (HvlSwitchVirtualAddressSpace.c)
 *     KiSetAddressPolicy @ 0x1401D8EA8 (KiSetAddressPolicy.c)
 */

int __fastcall KiDetachProcess(struct _KTHREAD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *p_Lock; // rsi
  unsigned __int8 CurrentIrql; // al
  $2B8565053CDC740D4E4887693DD8AC9E *v7; // rdi
  $35A53143D7708A3431DC0DDB695C8DF9 *v8; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 Group; // rcx
  unsigned __int64 GroupIndex; // r15
  __int64 v19; // r14
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  signed __int64 v23; // rax
  char v24; // bp
  unsigned __int8 v25; // r14
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  signed __int64 *v28; // rdx
  unsigned __int8 v30[4]; // [rsp+20h] [rbp-38h] BYREF
  int v31[13]; // [rsp+24h] [rbp-34h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v30[0] = CurrentIrql;
  v31[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v31);
    while ( CurrentThread->ThreadLock );
  }
  while ( CurrentThread->ApcState.KernelApcPending )
  {
    if ( CurrentThread->SpecialApcDisable )
      break;
    if ( v30[0] )
      break;
    CurrentThread->ThreadLock = 0LL;
    __writecr8(0LL);
    KiAcquireThreadLockRaiseToDpc(CurrentThread, v30);
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v7 = &CurrentThread->152, ($2B8565053CDC740D4E4887693DD8AC9E *)v7->ApcState.ApcListHead[0].Flink != v7)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v8 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPending = CurrentThread->SavedApcState.UserApcPending;
    Flink = v8->SavedApcState.ApcListHead[0].Flink;
    if ( ($35A53143D7708A3431DC0DDB695C8DF9 *)v8->SavedApcState.ApcListHead[0].Flink == v8 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v7->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v7;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v7->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v7;
      Blink->Flink = (struct _LIST_ENTRY *)v7;
    }
    v11 = &CurrentThread->SavedApcState.ApcListHead[1];
    v12 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v11->Flink == v11 )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v12->Flink = v12;
      CurrentThread->ApcState.UserApcPending = 0;
    }
    else
    {
      v13 = v11->Flink;
      v14 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v12->Flink = v13;
      CurrentThread->ApcState.ApcListHead[1].Blink = v14;
      v13->Blink = v12;
      v14->Flink = v12;
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
  Process = CurrentThread->ApcState.Process;
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  v19 = 8 * Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v19), GroupIndex);
  DirectoryTableBase = Process->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v21 = Process->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v21 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v21);
    KiSetAddressPolicy(Process->AddressPolicy);
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
      v22 = __readcr3();
      __writecr3(v22);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v19), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  LODWORD(v23) = v30[0];
  __writecr8(v30[0]);
  if ( !a2 )
  {
    LODWORD(v23) = _InterlockedExchangeAdd(p_Lock + 143, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)v23 == 8 )
    {
      v24 = 0;
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAcquireKobjectLockSafe(p_Lock);
      v26 = *((_DWORD *)p_Lock + 143);
      if ( (v26 & 7) == 0 )
      {
        Group = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)Group != Group && (v26 & 0xFFFFFFF8) == 0 )
        {
          while ( 1 )
          {
            Group = v26 & 0xFFFFFFF8 | 3;
            v27 = v26;
            v26 = _InterlockedCompareExchange(p_Lock + 143, Group, v26);
            if ( v27 == v26 )
              break;
            if ( (v26 & 0xFFFFFFF8) != 0 )
              goto LABEL_43;
          }
          v24 = 1;
        }
      }
LABEL_43:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      LODWORD(v23) = v25;
      __writecr8(v25);
      if ( v24 )
      {
        v28 = (signed __int64 *)(p_Lock + 66);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v23 = KiProcessOutSwapListHead;
        do
        {
          *v28 = v23;
          Group = v23;
          v23 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v28, v23);
        }
        while ( v23 != Group );
        if ( !v23 )
          LODWORD(v23) = KeSetEvent(&KiSwapEvent, 10, 0);
      }
    }
  }
  if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v7->ApcState.ApcListHead[0].Flink != v7 )
  {
    LOBYTE(Group) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    LODWORD(v23) = HalRequestSoftwareInterrupt(Group);
  }
  return v23;
}
