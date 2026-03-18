/*
 * XREFs of KiInvalidOpcodeFault @ 0x14015FFC0
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140224300 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14015FFC0 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401663C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

__int64 __fastcall KiInvalidOpcodeFault(int a1, int a2, int a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rax
  _QWORD *Object; // rdx
  struct _KTHREAD *v8; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  unsigned int v12; // [rsp+2Ch] [rbp-54h]
  __int16 v17; // [rsp+100h] [rbp+80h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v19; // [rsp+170h] [rbp+F0h]
  __int16 v20; // [rsp+178h] [rbp+F8h]

  if ( (v19 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    CurrentThread = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      __writegsqword(0x2EA8u, *(_QWORD *)&KeGetCurrentThread()->Process[2].ThreadSeed[8]);
      __writemsr(0x48u, 1uLL);
      if ( (KeGetPcr()->Prcb.BpbState & 4) == 0 )
      {
        a4 = 1075184170;
        a3 = 1075184161;
        a2 = 1075184152;
        a1 = 1075184143;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v6 = __readmsr(0xC0000102);
      if ( CurrentThread->Teb != (void *)v6 )
      {
        Object = CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        Object[16] = v6;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState();
  }
  else if ( KeGetPcr()->Prcb.IdleHalt )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      __writemsr(0x48u, 1uLL);
      if ( (KeGetPcr()->Prcb.BpbState & 4) == 0 )
      {
        a4 = 1075183780;
        a3 = 1075183771;
        a2 = 1075183762;
        a1 = 1075183753;
      }
    }
  }
  _mm_lfence();
  v12 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v20 & 0x200) != 0 )
    _enable();
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (v19 & 1) != 0 )
    KiUmsTrapEntry();
  KiExceptionDispatch(268435458LL, 0LL, retaddr);
  _disable();
  if ( (v19 & 1) == 0 )
  {
    _mm_setcsr(v12);
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
  v8 = KeGetCurrentThread();
  if ( (v8->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v8->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v8 = KeGetCurrentThread();
    }
    if ( (v8->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v8) = 1;
      KiUmsExit(v8);
    }
  }
  _mm_setcsr(v12);
  if ( v17 )
    KiRestoreDebugRegisterState(v8);
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
  return KiKernelExit(a1, a2, a3, a4, a5);
}
