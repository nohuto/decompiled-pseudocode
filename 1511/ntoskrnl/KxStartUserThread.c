/*
 * XREFs of KxStartUserThread @ 0x14015B3A0
 * Callers:
 *     KyStartUserThread @ 0x14015B010 (KyStartUserThread.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

__int64 __fastcall KxStartUserThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  void (__fastcall *v10)(); // [rsp+10h] [rbp-128h]

  __writecr8(1uLL);
  v10();
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
      KiUmsExit(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState(CurrentThread);
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
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), *(_QWORD *)(v5 - 56), *(_QWORD *)(v5 - 48), a5);
}
