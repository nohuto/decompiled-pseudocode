/*
 * XREFs of KxMcheckAlternateReturn @ 0x140163700
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140224900 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x140163700 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x1401663C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1401CCAAC (KiMcheckAlternateReturn.c)
 */

__int64 __fastcall KxMcheckAlternateReturn(int a1, unsigned __int64 Object, __int64 a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rax
  bool v7; // zf
  struct _KTHREAD *v8; // r9
  struct _KTHREAD *v9; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  unsigned int v13; // [rsp+2Ch] [rbp-54h]
  int v15; // [rsp+40h] [rbp-40h]
  int v16; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+F0h] [rbp+70h] BYREF
  __int16 v19; // [rsp+100h] [rbp+80h]
  char v20; // [rsp+170h] [rbp+F0h]

  v15 = Object;
  v16 = a3;
  if ( (v20 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    CurrentThread = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      __writegsqword(0x2EA8u, *(_QWORD *)&KeGetCurrentThread()->Process[2].ThreadSeed[8]);
      Object = 0LL;
      __writemsr(0x48u, 1uLL);
      if ( (KeGetPcr()->Prcb.BpbState & 4) == 0 )
      {
        v18 = 0x140163A1ELL;
        a4 = 1075198314;
        v16 = 1075198305;
        v15 = 1075198296;
        a1 = 1075198287;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v6 = __readmsr(0xC0000102);
      Object = (unsigned __int64)HIDWORD(v6) << 32;
      if ( CurrentThread->Teb != (void *)v6 )
      {
        Object = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(Object + 128) = v6;
      }
    }
    v7 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v19 = 0;
    if ( !v7 )
      KiSaveDebugRegisterState();
  }
  else if ( KeGetPcr()->Prcb.IdleHalt )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      Object = 0LL;
      __writemsr(0x48u, 1uLL);
      if ( (KeGetPcr()->Prcb.BpbState & 4) == 0 )
      {
        v18 = 0x140163898LL;
        a4 = 1075197924;
        v16 = 1075197915;
        v15 = 1075197906;
        a1 = 1075197897;
      }
    }
  }
  _mm_lfence();
  v13 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  _enable();
  v8 = KeGetCurrentThread();
  if ( _bittest((const signed __int32 *)&v8->116, 8u) )
  {
    KiUmsTrapEntry();
    v8 = KeGetCurrentThread();
  }
  KiMcheckAlternateReturn(&v18, Object, a3, v8);
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
  if ( v19 )
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
  return KiKernelExit(a1, v15, v16, a4, a5);
}
