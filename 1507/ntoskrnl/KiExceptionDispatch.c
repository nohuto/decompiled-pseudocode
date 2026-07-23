/*
 * XREFs of KiExceptionDispatch @ 0x140194180
 * Callers:
 *     KiDivideErrorFault @ 0x14018DC00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14018DFC0 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14018E7C0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14018EAC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018F3C0 (KiInvalidOpcodeFault.c)
 *     KiSegmentNotPresentFault @ 0x140190480 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401907C0 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x140190B00 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140191540 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401918C0 (KiAlignmentFault.c)
 *     KiXmmException @ 0x1401926C0 (KiXmmException.c)
 *     KiRaiseAssertion @ 0x140192D40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140193040 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x140193340 (KiSystemCall32.c)
 *     KiSystemCall32Shadow @ 0x140275B00 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiUmsExceptionEntry @ 0x140195140 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiExceptionDispatch(int a1, unsigned int a2, void *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int128 v17; // xmm9
  __int128 v18; // xmm10
  __int128 v19; // xmm11
  __int128 v20; // xmm12
  __int128 v21; // xmm13
  __int128 v22; // xmm14
  __int128 v23; // xmm15
  __int64 v24; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v26; // r9
  __int64 v27; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v29; // cf
  _DWORD v33[12]; // [rsp-338h] [rbp-510h] BYREF
  __int128 v34; // [rsp-308h] [rbp-4E0h]
  __int128 v35; // [rsp-2F8h] [rbp-4D0h]
  __int128 v36; // [rsp-2E8h] [rbp-4C0h]
  __int128 v37; // [rsp-2D8h] [rbp-4B0h]
  __int128 v38; // [rsp-2C8h] [rbp-4A0h]
  __int128 v39; // [rsp-2B8h] [rbp-490h]
  __int128 v40; // [rsp-2A8h] [rbp-480h]
  __int128 v41; // [rsp-298h] [rbp-470h]
  __int128 v42; // [rsp-288h] [rbp-460h]
  __int128 v43; // [rsp-278h] [rbp-450h]
  int v44; // [rsp-268h] [rbp-440h]
  int v45; // [rsp-260h] [rbp-438h]
  int v46; // [rsp-258h] [rbp-430h]
  int v47; // [rsp-250h] [rbp-428h]
  int v48; // [rsp-248h] [rbp-420h]
  int v49; // [rsp-240h] [rbp-418h]
  __int64 v50; // [rsp-238h] [rbp-410h]
  __int64 v51; // [rsp-230h] [rbp-408h]
  __int64 v52; // [rsp-228h] [rbp-400h]
  __int64 v53; // [rsp-220h] [rbp-3F8h]
  __int64 v54; // [rsp-218h] [rbp-3F0h]
  __int64 v55; // [rsp-210h] [rbp-3E8h]
  EXCEPTION_RECORD v56; // [rsp-200h] [rbp-3D8h] BYREF
  __int64 v57; // [rsp-168h] [rbp-340h]
  __int64 v58; // [rsp-160h] [rbp-338h]
  __int64 v59; // [rsp-158h] [rbp-330h]
  __int64 v60; // [rsp-150h] [rbp-328h]
  __int64 v61; // [rsp-148h] [rbp-320h]
  __int64 v62; // [rsp-140h] [rbp-318h]
  __int64 v63; // [rsp-138h] [rbp-310h]
  __int64 v64; // [rsp-130h] [rbp-308h]
  __int64 v65; // [rsp-128h] [rbp-300h]
  __int64 v66; // [rsp-120h] [rbp-2F8h]
  __int64 v67; // [rsp-118h] [rbp-2F0h]
  __int64 v68; // [rsp-110h] [rbp-2E8h]
  __int64 v69; // [rsp-108h] [rbp-2E0h]
  __int64 v70; // [rsp-100h] [rbp-2D8h]
  __int64 v71; // [rsp-F8h] [rbp-2D0h]

  v34 = v14;
  v35 = v15;
  v36 = v16;
  v37 = v17;
  v38 = v18;
  v39 = v19;
  v40 = v20;
  v41 = v21;
  v42 = v22;
  v43 = v23;
  v50 = v5;
  v51 = v7;
  v52 = v8;
  v53 = v11;
  v54 = v12;
  v55 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v33[8],
      v33[10],
      v34,
      DWORD2(v34),
      v35,
      DWORD2(v35),
      v36,
      DWORD2(v36),
      v37,
      DWORD2(v37),
      v38,
      DWORD2(v38),
      v39,
      DWORD2(v39),
      v40,
      DWORD2(v40),
      v41,
      DWORD2(v41),
      v42,
      DWORD2(v42),
      v43,
      DWORD2(v43),
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  v56.ExceptionCode = a1;
  v56.ExceptionFlags = 0;
  v56.ExceptionRecord = 0LL;
  v56.ExceptionAddress = a3;
  v56.NumberParameters = a2;
  v56.ExceptionInformation[0] = a4;
  v56.ExceptionInformation[1] = v9;
  v56.ExceptionInformation[2] = v10;
  KiDispatchException(&v56, (__int64)v33, v6 - 128, *(_BYTE *)(v6 + 240) & 1, 1);
  _disable();
  if ( (*(_BYTE *)(v6 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v6 - 84));
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
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(CurrentThread, v24);
  v26 = *(_QWORD *)(v6 - 48);
  v27 = *(_QWORD *)(v6 - 56);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x2EB4u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v29 = _bittestandreset16(MK_FP(__GS__, 11952LL), 2u);
  if ( v29 )
    __writemsr(0x49u, 1uLL);
  v29 = _bittestandreset16(MK_FP(__GS__, 11952LL), 5u);
  if ( v29 )
  {
    v56.ExceptionAddress = &loc_14019439B;
    v71 = 0x1401944B2LL;
    v70 = 0x1401944A9LL;
    v69 = 0x1401944A0LL;
    v68 = 0x140194497LL;
    v67 = 0x14019448ELL;
    v66 = 0x140194485LL;
    v65 = 0x14019447CLL;
    v64 = 0x140194473LL;
    v63 = 0x14019446ALL;
    v62 = 0x140194461LL;
    v61 = 0x140194458LL;
    v60 = 0x14019444FLL;
    v59 = 0x140194446LL;
    v58 = 0x14019443DLL;
    v57 = 0x140194434LL;
    v56.ExceptionInformation[14] = 0x14019442BLL;
    v56.ExceptionInformation[13] = 0x140194422LL;
    v56.ExceptionInformation[12] = 0x140194419LL;
    v56.ExceptionInformation[11] = 0x140194410LL;
    v56.ExceptionInformation[10] = 0x140194407LL;
    v56.ExceptionInformation[9] = 0x1401943FELL;
    v56.ExceptionInformation[8] = 0x1401943F5LL;
    v56.ExceptionInformation[7] = 0x1401943ECLL;
    v56.ExceptionInformation[6] = 0x1401943E3LL;
    v56.ExceptionInformation[5] = 0x1401943DALL;
    v56.ExceptionInformation[4] = 0x1401943D1LL;
    v56.ExceptionInformation[3] = 0x1401943C8LL;
    v56.ExceptionInformation[2] = 0x1401943BFLL;
    v56.ExceptionInformation[1] = 0x1401943B6LL;
    v56.ExceptionInformation[0] = 0x1401943ADLL;
    *(_QWORD *)&v56.NumberParameters = 0x1401943A4LL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x80) != 0 )
      __asm { verw    [rsp-338h+arg_350] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v27, v26, a5);
}
