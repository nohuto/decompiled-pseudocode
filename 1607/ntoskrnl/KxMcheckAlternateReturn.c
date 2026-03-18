/*
 * XREFs of KxMcheckAlternateReturn @ 0x14016D680
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x14023F900 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x14016D680 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x1401708C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1401DC738 (KiMcheckAlternateReturn.c)
 */

__int64 __fastcall KxMcheckAlternateReturn(__int64 a1, unsigned __int64 BpbState, __int64 a3, __int64 a4, char a5)
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
  unsigned __int64 v15; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  ULONG64 v17; // rax
  bool v18; // zf
  struct _KTHREAD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // rcx
  struct _KTHREAD *v24; // rcx
  int v25; // r9d
  int v26; // r8d
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v28; // cf
  __int64 v32; // [rsp+0h] [rbp-90h] BYREF
  __int64 v33; // [rsp+8h] [rbp-88h]
  __int64 v34; // [rsp+10h] [rbp-80h]
  __int64 v35; // [rsp+18h] [rbp-78h]
  __int64 v36; // [rsp+20h] [rbp-70h]
  __int64 v37; // [rsp+28h] [rbp-68h]
  __int64 v38; // [rsp+30h] [rbp-60h]
  __int64 v39; // [rsp+38h] [rbp-58h]
  __int64 v40; // [rsp+40h] [rbp-50h]
  __int64 v41; // [rsp+48h] [rbp-48h]
  __int64 v42; // [rsp+50h] [rbp-40h]
  __int64 v43; // [rsp+58h] [rbp-38h]
  __int64 v44; // [rsp+60h] [rbp-30h]
  __int64 v45; // [rsp+68h] [rbp-28h]
  __int64 v46; // [rsp+70h] [rbp-20h]
  __int64 v47; // [rsp+78h] [rbp-18h]
  __int128 v48; // [rsp+80h] [rbp-10h]
  __int128 v49; // [rsp+90h] [rbp+0h]
  __int128 v50; // [rsp+A0h] [rbp+10h]
  __int128 v51; // [rsp+B0h] [rbp+20h]
  __int128 v52; // [rsp+C0h] [rbp+30h]
  __int128 v53; // [rsp+D0h] [rbp+40h]
  __int64 v54; // [rsp+E0h] [rbp+50h]
  __int64 v55; // [rsp+E8h] [rbp+58h]
  __int64 v56; // [rsp+F0h] [rbp+60h]
  __int64 v57; // [rsp+F8h] [rbp+68h]
  __int64 v58; // [rsp+100h] [rbp+70h]
  __int16 v59; // [rsp+110h] [rbp+80h]
  char v60; // [rsp+180h] [rbp+F0h]

  BYTE3(v39) = 1;
  v40 = v5;
  v41 = a1;
  v42 = BpbState;
  v43 = a3;
  v44 = a4;
  v45 = v6;
  v46 = v7;
  if ( (v60 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)&CurrentThread->Process[2].ThreadSeed[18];
    __writegsqword(0x2EB0u, v15);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x2EBCu, BpbKernelSpecCtrl);
      v15 = 72LL;
      HIDWORD(BpbState) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(BpbState) = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v15 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
      LODWORD(BpbState) = (unsigned __int16)BpbState;
    }
    if ( (BpbState & 2) != 0 )
    {
      v33 = 0x14016D783LL;
      v58 = 0x14016D89ALL;
      v57 = 0x14016D891LL;
      v56 = 0x14016D888LL;
      v55 = 0x14016D87FLL;
      v54 = 0x14016D876LL;
      *((_QWORD *)&v53 + 1) = 0x14016D86DLL;
      *(_QWORD *)&v53 = 0x14016D864LL;
      *((_QWORD *)&v52 + 1) = 0x14016D85BLL;
      *(_QWORD *)&v52 = 0x14016D852LL;
      *((_QWORD *)&v51 + 1) = 0x14016D849LL;
      *(_QWORD *)&v51 = 0x14016D840LL;
      *((_QWORD *)&v50 + 1) = 0x14016D837LL;
      *(_QWORD *)&v50 = 0x14016D82ELL;
      *((_QWORD *)&v49 + 1) = 0x14016D825LL;
      *(_QWORD *)&v49 = 0x14016D81CLL;
      *((_QWORD *)&v48 + 1) = 0x14016D813LL;
      *(_QWORD *)&v48 = 0x14016D80ALL;
      v47 = 0x14016D801LL;
      v46 = 0x14016D7F8LL;
      v45 = 0x14016D7EFLL;
      v44 = 0x14016D7E6LL;
      v43 = 0x14016D7DDLL;
      v42 = 0x14016D7D4LL;
      v41 = 0x14016D7CBLL;
      v40 = 0x14016D7C2LL;
      v39 = 0x14016D7B9LL;
      v38 = 0x14016D7B0LL;
      v37 = 0x14016D7A7LL;
      v36 = 0x14016D79ELL;
      v35 = 0x14016D795LL;
      v34 = 0x14016D78CLL;
    }
    if ( (BpbState & 0x100) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v15);
    _mm_lfence();
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v15 = 3221225730LL;
      v17 = __readmsr(0xC0000102);
      BpbState = (unsigned __int64)HIDWORD(v17) << 32;
      if ( v17 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v17 )
      {
        BpbState = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(BpbState + 128) = v17;
      }
    }
    v18 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v59 = 0;
    if ( !v18 )
      *(double *)&v8 = KiSaveDebugRegisterState(v15);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      BpbState = 0LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  HIDWORD(v39) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v48 = v8;
  v49 = v9;
  v50 = v10;
  v51 = v11;
  v52 = v12;
  v53 = v13;
  _enable();
  v19 = KeGetCurrentThread();
  if ( _bittest((const signed __int32 *)&v19->116, 8u) )
  {
    KiUmsTrapEntry();
    v19 = KeGetCurrentThread();
  }
  KiMcheckAlternateReturn(&v32, BpbState, a3, v19);
  _disable();
  if ( (v60 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v39));
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
  v23 = KeGetCurrentThread();
  if ( (v23->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v23, v20, v21, v22, v32);
  v24 = KeGetCurrentThread();
  if ( (v24->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v24->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v24 = KeGetCurrentThread();
    }
    if ( (v24->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v24) = 1;
      KiUmsExit(v24);
    }
  }
  _mm_setcsr(HIDWORD(v39));
  if ( v59 )
    KiRestoreDebugRegisterState(v24, v20);
  v25 = v44;
  v26 = v43;
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x2EBCu, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v28 = _bittestandreset16(MK_FP(__GS__, 11960LL), 2u);
  if ( v28 )
    __writemsr(0x49u, 1uLL);
  v28 = _bittestandreset16(MK_FP(__GS__, 11960LL), 5u);
  if ( v28 )
  {
    v32 = 0x14016DA7CLL;
    v57 = 0x14016DB93LL;
    v56 = 0x14016DB8ALL;
    v55 = 0x14016DB81LL;
    v54 = 0x14016DB78LL;
    *((_QWORD *)&v53 + 1) = 0x14016DB6FLL;
    *(_QWORD *)&v53 = 0x14016DB66LL;
    *((_QWORD *)&v52 + 1) = 0x14016DB5DLL;
    *(_QWORD *)&v52 = 0x14016DB54LL;
    *((_QWORD *)&v51 + 1) = 0x14016DB4BLL;
    *(_QWORD *)&v51 = 0x14016DB42LL;
    *((_QWORD *)&v50 + 1) = 0x14016DB39LL;
    *(_QWORD *)&v50 = 0x14016DB30LL;
    *((_QWORD *)&v49 + 1) = 0x14016DB27LL;
    *(_QWORD *)&v49 = 0x14016DB1ELL;
    *((_QWORD *)&v48 + 1) = 0x14016DB15LL;
    *(_QWORD *)&v48 = 0x14016DB0CLL;
    v47 = 0x14016DB03LL;
    v46 = 0x14016DAFALL;
    v45 = 0x14016DAF1LL;
    v44 = 0x14016DAE8LL;
    v43 = 0x14016DADFLL;
    v42 = 0x14016DAD6LL;
    v41 = 0x14016DACDLL;
    v40 = 0x14016DAC4LL;
    v39 = 0x14016DABBLL;
    v38 = 0x14016DAB2LL;
    v37 = 0x14016DAA9LL;
    v36 = 0x14016DAA0LL;
    v35 = 0x14016DA97LL;
    v34 = 0x14016DA8ELL;
    v33 = 0x14016DA85LL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x80) != 0 )
      __asm { verw    [rsp+arg_18] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(v41, v42, v26, v25, a5);
}
