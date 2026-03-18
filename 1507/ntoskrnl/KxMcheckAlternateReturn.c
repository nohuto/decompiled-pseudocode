/*
 * XREFs of KxMcheckAlternateReturn @ 0x140192100
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140274900 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x140192100 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x140194D80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x14020BE04 (KiMcheckAlternateReturn.c)
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
  struct _KTHREAD *v21; // rcx
  int v22; // r9d
  int v23; // r8d
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v25; // cf
  __int64 v29; // [rsp+0h] [rbp-90h] BYREF
  __int64 v30; // [rsp+8h] [rbp-88h]
  __int64 v31; // [rsp+10h] [rbp-80h]
  __int64 v32; // [rsp+18h] [rbp-78h]
  __int64 v33; // [rsp+20h] [rbp-70h]
  __int64 v34; // [rsp+28h] [rbp-68h]
  __int64 v35; // [rsp+30h] [rbp-60h]
  __int64 v36; // [rsp+38h] [rbp-58h]
  __int64 v37; // [rsp+40h] [rbp-50h]
  __int64 v38; // [rsp+48h] [rbp-48h]
  __int64 v39; // [rsp+50h] [rbp-40h]
  __int64 v40; // [rsp+58h] [rbp-38h]
  __int64 v41; // [rsp+60h] [rbp-30h]
  __int64 v42; // [rsp+68h] [rbp-28h]
  __int64 v43; // [rsp+70h] [rbp-20h]
  __int64 v44; // [rsp+78h] [rbp-18h]
  __int128 v45; // [rsp+80h] [rbp-10h]
  __int128 v46; // [rsp+90h] [rbp+0h]
  __int128 v47; // [rsp+A0h] [rbp+10h]
  __int128 v48; // [rsp+B0h] [rbp+20h]
  __int128 v49; // [rsp+C0h] [rbp+30h]
  __int128 v50; // [rsp+D0h] [rbp+40h]
  __int64 v51; // [rsp+E0h] [rbp+50h]
  __int64 v52; // [rsp+E8h] [rbp+58h]
  __int64 v53; // [rsp+F0h] [rbp+60h]
  __int64 v54; // [rsp+F8h] [rbp+68h]
  __int64 v55; // [rsp+100h] [rbp+70h]
  __int16 v56; // [rsp+110h] [rbp+80h]
  char v57; // [rsp+180h] [rbp+F0h]

  BYTE3(v36) = 1;
  v37 = v5;
  v38 = a1;
  v39 = BpbState;
  v40 = a3;
  v41 = a4;
  v42 = v6;
  v43 = v7;
  if ( (v57 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)&CurrentThread->Process[2].ThreadSeed[12];
    __writegsqword(0x2EA8u, v15);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x2EB4u, BpbKernelSpecCtrl);
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
      v30 = 0x140192203LL;
      v55 = 0x14019231ALL;
      v54 = 0x140192311LL;
      v53 = 0x140192308LL;
      v52 = 0x1401922FFLL;
      v51 = 0x1401922F6LL;
      *((_QWORD *)&v50 + 1) = 0x1401922EDLL;
      *(_QWORD *)&v50 = 0x1401922E4LL;
      *((_QWORD *)&v49 + 1) = 0x1401922DBLL;
      *(_QWORD *)&v49 = 0x1401922D2LL;
      *((_QWORD *)&v48 + 1) = 0x1401922C9LL;
      *(_QWORD *)&v48 = 0x1401922C0LL;
      *((_QWORD *)&v47 + 1) = 0x1401922B7LL;
      *(_QWORD *)&v47 = 0x1401922AELL;
      *((_QWORD *)&v46 + 1) = 0x1401922A5LL;
      *(_QWORD *)&v46 = 0x14019229CLL;
      *((_QWORD *)&v45 + 1) = 0x140192293LL;
      *(_QWORD *)&v45 = 0x14019228ALL;
      v44 = 0x140192281LL;
      v43 = 0x140192278LL;
      v42 = 0x14019226FLL;
      v41 = 0x140192266LL;
      v40 = 0x14019225DLL;
      v39 = 0x140192254LL;
      v38 = 0x14019224BLL;
      v37 = 0x140192242LL;
      v36 = 0x140192239LL;
      v35 = 0x140192230LL;
      v34 = 0x140192227LL;
      v33 = 0x14019221ELL;
      v32 = 0x140192215LL;
      v31 = 0x14019220CLL;
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
    v56 = 0;
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
  HIDWORD(v36) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v45 = v8;
  v46 = v9;
  v47 = v10;
  v48 = v11;
  v49 = v12;
  v50 = v13;
  _enable();
  v19 = KeGetCurrentThread();
  if ( _bittest((const signed __int32 *)&v19->116, 8u) )
  {
    KiUmsTrapEntry();
    v19 = KeGetCurrentThread();
  }
  KiMcheckAlternateReturn(&v29, BpbState, a3, v19);
  _disable();
  if ( (v57 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v36));
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
  v21 = KeGetCurrentThread();
  if ( (v21->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v21->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v21 = KeGetCurrentThread();
    }
    if ( (v21->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v21) = 1;
      KiUmsExit(v21);
    }
  }
  _mm_setcsr(HIDWORD(v36));
  if ( v56 )
    KiRestoreDebugRegisterState(v21, v20);
  v22 = v41;
  v23 = v40;
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x2EB4u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v25 = _bittestandreset16(MK_FP(__GS__, 11952LL), 2u);
  if ( v25 )
    __writemsr(0x49u, 1uLL);
  v25 = _bittestandreset16(MK_FP(__GS__, 11952LL), 5u);
  if ( v25 )
  {
    v29 = 0x1401924E6LL;
    v54 = 0x1401925FDLL;
    v53 = 0x1401925F4LL;
    v52 = 0x1401925EBLL;
    v51 = 0x1401925E2LL;
    *((_QWORD *)&v50 + 1) = 0x1401925D9LL;
    *(_QWORD *)&v50 = 0x1401925D0LL;
    *((_QWORD *)&v49 + 1) = 0x1401925C7LL;
    *(_QWORD *)&v49 = 0x1401925BELL;
    *((_QWORD *)&v48 + 1) = 0x1401925B5LL;
    *(_QWORD *)&v48 = 0x1401925ACLL;
    *((_QWORD *)&v47 + 1) = 0x1401925A3LL;
    *(_QWORD *)&v47 = 0x14019259ALL;
    *((_QWORD *)&v46 + 1) = 0x140192591LL;
    *(_QWORD *)&v46 = 0x140192588LL;
    *((_QWORD *)&v45 + 1) = 0x14019257FLL;
    *(_QWORD *)&v45 = 0x140192576LL;
    v44 = 0x14019256DLL;
    v43 = 0x140192564LL;
    v42 = 0x14019255BLL;
    v41 = 0x140192552LL;
    v40 = 0x140192549LL;
    v39 = 0x140192540LL;
    v38 = 0x140192537LL;
    v37 = 0x14019252ELL;
    v36 = 0x140192525LL;
    v35 = 0x14019251CLL;
    v34 = 0x140192513LL;
    v33 = 0x14019250ALL;
    v32 = 0x140192501LL;
    v31 = 0x1401924F8LL;
    v30 = 0x1401924EFLL;
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
  return KiKernelExit(v38, v39, v23, v22, a5);
}
