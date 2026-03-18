/*
 * XREFs of KiDetachProcess @ 0x1400A6A30
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400DF9CC (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x1400EFA34 (KeDetachProcess.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiMoveApcState @ 0x1400C7AB0 (KiMoveApcState.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KiSetAddressPolicy @ 0x1401CA818 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14022153C (HvlSwitchVirtualAddressSpace.c)
 */

int __fastcall KiDetachProcess(struct _KTHREAD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // r12d
  volatile signed __int32 *p_Lock; // rsi
  unsigned __int8 CurrentIrql; // al
  $E81C3296F15336D9BF9B2D43BB137B25 *v8; // rdi
  $D4FCF91253F76F57393CBFE908971F67 *v9; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Process; // rdx
  unsigned __int64 Group; // rcx
  unsigned __int64 GroupIndex; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  signed __int64 v24; // rax
  char v25; // bp
  unsigned __int8 v26; // r14
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  signed __int64 *v29; // rdx
  unsigned __int8 v31[4]; // [rsp+20h] [rbp-38h] BYREF
  int v32[13]; // [rsp+24h] [rbp-34h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a2;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v31[0] = CurrentIrql;
  v32[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v32, a2, a3);
    while ( CurrentThread->ThreadLock );
  }
  while ( CurrentThread->ApcState.KernelApcPending )
  {
    if ( CurrentThread->SpecialApcDisable )
      break;
    if ( v31[0] )
      break;
    CurrentThread->ThreadLock = 0LL;
    __writecr8(0LL);
    KiAcquireThreadLockRaiseToDpc((__int64)CurrentThread, v31);
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v8 = &CurrentThread->152, ($E81C3296F15336D9BF9B2D43BB137B25 *)v8->ApcState.ApcListHead[0].Flink != v8)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v9 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPending = CurrentThread->SavedApcState.UserApcPending;
    Flink = v9->SavedApcState.ApcListHead[0].Flink;
    if ( ($D4FCF91253F76F57393CBFE908971F67 *)v9->SavedApcState.ApcListHead[0].Flink == v9 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v8->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v8;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v8->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v8;
      Blink->Flink = (struct _LIST_ENTRY *)v8;
    }
    v12 = &CurrentThread->SavedApcState.ApcListHead[1];
    v13 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v12->Flink == v12 )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v13->Flink = v13;
      CurrentThread->ApcState.UserApcPending = 0;
    }
    else
    {
      v14 = v12->Flink;
      v15 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v13->Flink = v14;
      CurrentThread->ApcState.ApcListHead[1].Blink = v15;
      v14->Blink = v13;
      v15->Flink = v13;
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
  Process = (__int64)CurrentThread->ApcState.Process;
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  v20 = 8 * Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)(v20 + Process), GroupIndex);
  v21 = *(_QWORD *)(Process + 40);
  if ( KiKvaShadow )
  {
    v22 = *(_QWORD *)(Process + 40);
    if ( (v21 & 2) != 0 )
      v22 = v21 | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v22);
    KiSetAddressPolicy(*(unsigned __int8 *)(Process + 640));
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(v21);
  else
    __writecr3(v21);
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
      v23 = __readcr3();
      __writecr3(v23);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v20), GroupIndex);
  CurrentThread->MiscFlags &= ~0x800u;
  LODWORD(v24) = v31[0];
  __writecr8(v31[0]);
  if ( !v4 )
  {
    LODWORD(v24) = _InterlockedExchangeAdd(p_Lock + 143, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)v24 == 8 )
    {
      v25 = 0;
      v26 = KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAcquireKobjectLockSafe(p_Lock, Process, a3);
      v27 = *((_DWORD *)p_Lock + 143);
      if ( (v27 & 7) == 0 )
      {
        Group = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)Group != Group && (v27 & 0xFFFFFFF8) == 0 )
        {
          while ( 1 )
          {
            Group = v27 & 0xFFFFFFF8 | 3;
            v28 = v27;
            v27 = _InterlockedCompareExchange(p_Lock + 143, Group, v27);
            if ( v28 == v27 )
              break;
            if ( (v27 & 0xFFFFFFF8) != 0 )
              goto LABEL_43;
          }
          v25 = 1;
        }
      }
LABEL_43:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      LODWORD(v24) = v26;
      __writecr8(v26);
      if ( v25 )
      {
        v29 = (signed __int64 *)(p_Lock + 66);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v24 = KiProcessOutSwapListHead;
        do
        {
          *v29 = v24;
          Group = v24;
          v24 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v29, v24);
        }
        while ( v24 != Group );
        if ( !v24 )
          LODWORD(v24) = KeSetEvent(&KiSwapEvent, 10, 0);
      }
    }
  }
  if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v8->ApcState.ApcListHead[0].Flink != v8 )
  {
    LOBYTE(Group) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    LODWORD(v24) = HalRequestSoftwareInterrupt(Group);
  }
  return v24;
}
