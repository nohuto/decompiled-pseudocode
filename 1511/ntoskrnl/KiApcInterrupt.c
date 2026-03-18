/*
 * XREFs of KiApcInterrupt @ 0x1401575F0
 * Callers:
 *     KiApcInterruptShadow @ 0x140224A00 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14014FC60 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiApcInterrupt @ 0x1401575F0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall KiApcInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v17; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  __int64 v21; // [rsp+0h] [rbp-80h] BYREF
  __int64 v22; // [rsp+8h] [rbp-78h]
  __int64 v23; // [rsp+10h] [rbp-70h]
  __int64 v24; // [rsp+18h] [rbp-68h]
  __int64 v25; // [rsp+20h] [rbp-60h]
  __int64 v26; // [rsp+28h] [rbp-58h]
  __int64 v27; // [rsp+30h] [rbp-50h]
  __int64 v28; // [rsp+38h] [rbp-48h]
  __int64 v29; // [rsp+40h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-38h]
  __int64 v31; // [rsp+50h] [rbp-30h]
  __int64 v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-20h]
  __int64 v34; // [rsp+68h] [rbp-18h]
  __int128 v35; // [rsp+70h] [rbp-10h]
  __int128 v36; // [rsp+80h] [rbp+0h]
  __int128 v37; // [rsp+90h] [rbp+10h]
  __int128 v38; // [rsp+A0h] [rbp+20h]
  __int128 v39; // [rsp+B0h] [rbp+30h]
  __int128 v40; // [rsp+C0h] [rbp+40h]
  __int64 v41; // [rsp+D0h] [rbp+50h]
  __int64 v42; // [rsp+D8h] [rbp+58h]
  __int64 v43; // [rsp+E0h] [rbp+60h]
  __int64 v44; // [rsp+E8h] [rbp+68h]
  __int64 v45; // [rsp+F0h] [rbp+70h]
  __int16 v46; // [rsp+100h] [rbp+80h]
  char v47; // [rsp+170h] [rbp+F0h]

  BYTE3(v26) = 0;
  v27 = v5;
  v28 = a1;
  v29 = a2;
  v30 = a3;
  v31 = a4;
  v32 = v6;
  v33 = v7;
  if ( (v47 & 1) != 0 )
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
        v45 = 0x14015790FLL;
        v44 = 0x140157906LL;
        v43 = 0x1401578FDLL;
        v42 = 0x1401578F4LL;
        v41 = 0x1401578EBLL;
        *((_QWORD *)&v40 + 1) = 0x1401578E2LL;
        *(_QWORD *)&v40 = 0x1401578D9LL;
        *((_QWORD *)&v39 + 1) = 0x1401578D0LL;
        *(_QWORD *)&v39 = 0x1401578C7LL;
        *((_QWORD *)&v38 + 1) = 0x1401578BELL;
        *(_QWORD *)&v38 = 0x1401578B5LL;
        *((_QWORD *)&v37 + 1) = 0x1401578ACLL;
        *(_QWORD *)&v37 = 0x1401578A3LL;
        *((_QWORD *)&v36 + 1) = 0x14015789ALL;
        *(_QWORD *)&v36 = 0x140157891LL;
        *((_QWORD *)&v35 + 1) = 0x140157888LL;
        *(_QWORD *)&v35 = 0x14015787FLL;
        v34 = 0x140157876LL;
        v33 = 0x14015786DLL;
        v32 = 0x140157864LL;
        v31 = 0x14015785BLL;
        v30 = 0x140157852LL;
        v29 = 0x140157849LL;
        v28 = 0x140157840LL;
        v27 = 0x140157837LL;
        v26 = 0x14015782ELL;
        v25 = 0x140157825LL;
        v24 = 0x14015781CLL;
        v23 = 0x140157813LL;
        v22 = 0x14015780ALL;
        v21 = 0x140157801LL;
      }
    }
    v15 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v46 = 0;
    if ( !v15 )
      *(double *)&v8 = KiSaveDebugRegisterState();
  }
  else if ( KeGetPcr()->Prcb.IdleHalt )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      __writemsr(0x48u, 1uLL);
      if ( (KeGetPcr()->Prcb.BpbState & 4) == 0 )
      {
        v45 = 0x140157789LL;
        v44 = 0x140157780LL;
        v43 = 0x140157777LL;
        v42 = 0x14015776ELL;
        v41 = 0x140157765LL;
        *((_QWORD *)&v40 + 1) = 0x14015775CLL;
        *(_QWORD *)&v40 = 0x140157753LL;
        *((_QWORD *)&v39 + 1) = 0x14015774ALL;
        *(_QWORD *)&v39 = 0x140157741LL;
        *((_QWORD *)&v38 + 1) = 0x140157738LL;
        *(_QWORD *)&v38 = 0x14015772FLL;
        *((_QWORD *)&v37 + 1) = 0x140157726LL;
        *(_QWORD *)&v37 = 0x14015771DLL;
        *((_QWORD *)&v36 + 1) = 0x140157714LL;
        *(_QWORD *)&v36 = 0x14015770BLL;
        *((_QWORD *)&v35 + 1) = 0x140157702LL;
        *(_QWORD *)&v35 = 0x1401576F9LL;
        v34 = 0x1401576F0LL;
        v33 = 0x1401576E7LL;
        v32 = 0x1401576DELL;
        v31 = 0x1401576D5LL;
        v30 = 0x1401576CCLL;
        v29 = 0x1401576C3LL;
        v28 = 0x1401576BALL;
        v27 = 0x1401576B1LL;
        v26 = 0x1401576A8LL;
        v25 = 0x14015769FLL;
        v24 = 0x140157696LL;
        v23 = 0x14015768DLL;
        v22 = 0x140157684LL;
        v21 = 0x14015767BLL;
      }
    }
  }
  _mm_lfence();
  HIDWORD(v26) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v35 = v8;
  v36 = v9;
  v37 = v10;
  v38 = v11;
  v39 = v12;
  v40 = v13;
  __incgsdword(0x5C80u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  BYTE1(v26) = CurrentIrql;
  HalPerformEndOfInterrupt_0();
  _enable();
  if ( !KeGetPcr()->Prcb.IdleHalt )
    KiDeliverApc(0, 0LL, (__int64)&v21);
  _disable();
  __writecr8(BYTE1(v26));
  _disable();
  if ( (v47 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v26));
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
  v17 = KeGetCurrentThread();
  if ( (v17->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v17->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v17 = KeGetCurrentThread();
    }
    if ( (v17->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v17) = 1;
      KiUmsExit(v17);
    }
  }
  _mm_setcsr(HIDWORD(v26));
  if ( v46 )
    KiRestoreDebugRegisterState(v17);
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
  return KiKernelExit(v28, v29, v30, v31, a5);
}
