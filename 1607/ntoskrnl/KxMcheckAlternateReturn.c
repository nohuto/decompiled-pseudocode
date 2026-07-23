/*
 * XREFs of KxMcheckAlternateReturn @ 0x14016DB80
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x14023F900 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x140170DC0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1401DC564 (KiMcheckAlternateReturn.c)
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
      v33 = 0x14016DC83LL;
      v58 = 0x14016DD9ALL;
      v57 = 0x14016DD91LL;
      v56 = 0x14016DD88LL;
      v55 = 0x14016DD7FLL;
      v54 = 0x14016DD76LL;
      *((_QWORD *)&v53 + 1) = 0x14016DD6DLL;
      *(_QWORD *)&v53 = 0x14016DD64LL;
      *((_QWORD *)&v52 + 1) = 0x14016DD5BLL;
      *(_QWORD *)&v52 = 0x14016DD52LL;
      *((_QWORD *)&v51 + 1) = 0x14016DD49LL;
      *(_QWORD *)&v51 = 0x14016DD40LL;
      *((_QWORD *)&v50 + 1) = 0x14016DD37LL;
      *(_QWORD *)&v50 = 0x14016DD2ELL;
      *((_QWORD *)&v49 + 1) = 0x14016DD25LL;
      *(_QWORD *)&v49 = 0x14016DD1CLL;
      *((_QWORD *)&v48 + 1) = 0x14016DD13LL;
      *(_QWORD *)&v48 = 0x14016DD0ALL;
      v47 = 0x14016DD01LL;
      v46 = 0x14016DCF8LL;
      v45 = 0x14016DCEFLL;
      v44 = 0x14016DCE6LL;
      v43 = 0x14016DCDDLL;
      v42 = 0x14016DCD4LL;
      v41 = 0x14016DCCBLL;
      v40 = 0x14016DCC2LL;
      v39 = 0x14016DCB9LL;
      v38 = 0x14016DCB0LL;
      v37 = 0x14016DCA7LL;
      v36 = 0x14016DC9ELL;
      v35 = 0x14016DC95LL;
      v34 = 0x14016DC8CLL;
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
    v32 = 0x14016DF7CLL;
    v57 = 0x14016E093LL;
    v56 = 0x14016E08ALL;
    v55 = 0x14016E081LL;
    v54 = 0x14016E078LL;
    *((_QWORD *)&v53 + 1) = 0x14016E06FLL;
    *(_QWORD *)&v53 = 0x14016E066LL;
    *((_QWORD *)&v52 + 1) = 0x14016E05DLL;
    *(_QWORD *)&v52 = 0x14016E054LL;
    *((_QWORD *)&v51 + 1) = 0x14016E04BLL;
    *(_QWORD *)&v51 = 0x14016E042LL;
    *((_QWORD *)&v50 + 1) = 0x14016E039LL;
    *(_QWORD *)&v50 = 0x14016E030LL;
    *((_QWORD *)&v49 + 1) = 0x14016E027LL;
    *(_QWORD *)&v49 = 0x14016E01ELL;
    *((_QWORD *)&v48 + 1) = 0x14016E015LL;
    *(_QWORD *)&v48 = 0x14016E00CLL;
    v47 = 0x14016E003LL;
    v46 = 0x14016DFFALL;
    v45 = 0x14016DFF1LL;
    v44 = 0x14016DFE8LL;
    v43 = 0x14016DFDFLL;
    v42 = 0x14016DFD6LL;
    v41 = 0x14016DFCDLL;
    v40 = 0x14016DFC4LL;
    v39 = 0x14016DFBBLL;
    v38 = 0x14016DFB2LL;
    v37 = 0x14016DFA9LL;
    v36 = 0x14016DFA0LL;
    v35 = 0x14016DF97LL;
    v34 = 0x14016DF8ELL;
    v33 = 0x14016DF85LL;
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
