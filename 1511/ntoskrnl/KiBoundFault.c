/*
 * XREFs of KiBoundFault @ 0x14015FA00
 * Callers:
 *     KiBoundFaultShadow @ 0x140224280 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14015FA00 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140165E80 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x1401663C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiHandleBound @ 0x1401C40C0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

__int64 __fastcall KiBoundFault(int a1, int a2, int a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rax
  _QWORD *Object; // rdx
  int v8; // eax
  struct _KTHREAD *v9; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  unsigned int v13; // [rsp+2Ch] [rbp-54h]
  __int16 v18; // [rsp+100h] [rbp+80h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v20; // [rsp+170h] [rbp+F0h]
  __int16 v21; // [rsp+178h] [rbp+F8h]

  if ( (v20 & 1) != 0 )
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
        a4 = 1075182698;
        a3 = 1075182689;
        a2 = 1075182680;
        a1 = 1075182671;
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
        a4 = 1075182308;
        a3 = 1075182299;
        a2 = 1075182290;
        a1 = 1075182281;
      }
    }
  }
  _mm_lfence();
  v13 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v21 & 0x200) != 0 )
    _enable();
  if ( (v20 & 1) != 0 )
  {
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) )
      KiUmsTrapEntry();
    v8 = KiHandleBound();
    if ( v8 )
    {
      if ( v8 == 1 )
        goto LABEL_27;
      if ( v8 != 2 )
        KiBugCheckDispatch(127LL, 5LL);
      KiFastFailDispatch(3221226505LL, 1LL, retaddr, 28LL);
    }
  }
  KiExceptionDispatch(3221225612LL, 0LL, retaddr);
LABEL_27:
  _disable();
  if ( (v20 & 1) == 0 )
  {
    _mm_setcsr(v13);
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
  v9 = KeGetCurrentThread();
  if ( (v9->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v9->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v9 = KeGetCurrentThread();
    }
    if ( (v9->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v9) = 1;
      KiUmsExit(v9);
    }
  }
  _mm_setcsr(v13);
  if ( v18 )
    KiRestoreDebugRegisterState(v9);
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
