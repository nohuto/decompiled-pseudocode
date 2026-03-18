/*
 * XREFs of KiUmsFastReturnToUser @ 0x140166140
 * Callers:
 *     KiUmsTrapEntry @ 0x1401663C0 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x1401665C0 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140166780 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

__int64 KiUmsFastReturnToUser()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 p_Xmm1; // rbp
  __int64 v2; // rax
  ULONG v3; // ecx
  ULONG_PTR CombinedApcDisable; // r9
  ULONG_PTR CurrentIrql; // r8
  struct _KTHREAD *v6; // rcx
  void *InstrumentationCallback; // rax
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax

  CurrentThread = KeGetCurrentThread();
  p_Xmm1 = (__int64)&CurrentThread->TrapFrame->Xmm1;
  v2 = CurrentThread->WaitBlock[3].SpareLong | (unsigned int)(unsigned __int8)(CurrentThread->ApcStateIndex | KeGetCurrentIrql());
  if ( (_DWORD)v2 )
  {
    v3 = 74;
    CombinedApcDisable = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( !(_DWORD)CurrentIrql )
    {
      v3 = 1;
      CurrentIrql = CurrentThread->ApcStateIndex;
      CombinedApcDisable = CurrentThread->CombinedApcDisable;
    }
    KiBugCheckDispatch(v3, CurrentThread->TrapFrame->Rip, CurrentIrql, CombinedApcDisable);
  }
  _disable();
  if ( KeGetCurrentThread()->ApcState.UserApcPending )
  {
    CurrentThread->TrapFrame->Rax = 0LL;
    *(_QWORD *)(p_Xmm1 - 72) = 0LL;
    *(_QWORD *)(p_Xmm1 - 64) = 0LL;
    *(_QWORD *)(p_Xmm1 - 56) = 0LL;
    *(_QWORD *)(p_Xmm1 - 48) = 0LL;
    *(_QWORD *)(p_Xmm1 - 40) = 0LL;
    *(_QWORD *)(p_Xmm1 - 32) = 0LL;
    *(_OWORD *)(p_Xmm1 - 16) = 0LL;
    *(_OWORD *)p_Xmm1 = 0LL;
    *(_OWORD *)(p_Xmm1 + 16) = 0LL;
    *(_OWORD *)(p_Xmm1 + 32) = 0LL;
    *(_OWORD *)(p_Xmm1 + 48) = 0LL;
    *(_OWORD *)(p_Xmm1 + 64) = 0LL;
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
    v2 = *(_QWORD *)(p_Xmm1 - 80);
  }
  v6 = KeGetCurrentThread();
  if ( (v6->Header.LockNV & 0x40010000) != 0 )
  {
    *(_QWORD *)(p_Xmm1 - 80) = v2;
    if ( (v6->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v6 = KeGetCurrentThread();
    }
    if ( (v6->Header.Reserved1 & 0x40) != 0 )
      KiUmsExit(0LL);
    v2 = *(_QWORD *)(p_Xmm1 - 80);
  }
  _mm_setcsr(*(_DWORD *)(p_Xmm1 - 84));
  if ( *(_WORD *)(p_Xmm1 + 128) )
  {
    *(_QWORD *)(p_Xmm1 - 80) = v2;
    KiRestoreDebugRegisterState(v6);
    InstrumentationCallback = KeGetCurrentThread()->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback && *(_WORD *)(p_Xmm1 + 240) == 51 )
      *(_QWORD *)(p_Xmm1 + 232) = InstrumentationCallback;
    v2 = *(_QWORD *)(p_Xmm1 - 80);
  }
  *(_QWORD *)(p_Xmm1 - 80) = v2;
  Signalling = KeGetCurrentThread()->Header.Signalling;
  if ( (Signalling & 1) == 0 )
  {
    __writemsr(0x48u, Signalling);
    TrappedSecurityDomain = KeGetPcr()->Prcb.TrappedSecurityDomain;
    if ( TrappedSecurityDomain )
    {
      if ( TrappedSecurityDomain != *(_QWORD *)&KeGetCurrentThread()->Process[2].ThreadSeed[8] )
        __writemsr(0x49u, 1uLL);
    }
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      sysret
    }
  }
  return KiKernelSysretExit(*(_QWORD *)(p_Xmm1 + 232), 0LL, *(_QWORD *)(p_Xmm1 + 256), *(_QWORD *)(p_Xmm1 + 216));
}
