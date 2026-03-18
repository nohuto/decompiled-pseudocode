/*
 * XREFs of KxStartUserThread @ 0x14018AD30
 * Callers:
 *     KyStartUserThread @ 0x14018AA90 (KyStartUserThread.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KxStartUserThread @ 0x14018AD30 (KxStartUserThread.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KxStartUserThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  signed __int16 *v13; // kr00_8
  void (__fastcall *v15)(); // [rsp-288h] [rbp-3C0h]

  __writecr8(1uLL);
  v15();
  _disable();
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  if ( KeGetCurrentThread()->ApcState.UserApcPending )
  {
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(CurrentThread) = 1;
      ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v7 = *(_QWORD *)(v5 - 48);
  v8 = *(_QWORD *)(v5 - 56);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x2EB4u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  if ( _bittestandreset16(MK_FP(__GS__, 11952LL), 2u) )
    __writemsr(0x49u, 1uLL);
  v13 = MK_FP(__GS__, 11952LL);
  *v13 &= ~0x20u;
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x80) != 0 )
      __asm { verw    [rsp-298h+arg_2B0] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v8, v7, a5);
}
