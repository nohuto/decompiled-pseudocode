/*
 * XREFs of KiFastFailDispatch @ 0x140194580
 * Callers:
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140192A40 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiUmsExceptionEntry @ 0x140195140 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiFastFailDispatch(int a1, unsigned int a2, void *a3, unsigned __int64 a4, char a5)
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
  char v24; // r9
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v30; // cf
  _DWORD v34[12]; // [rsp-338h] [rbp-510h] BYREF
  __int128 v35; // [rsp-308h] [rbp-4E0h]
  __int128 v36; // [rsp-2F8h] [rbp-4D0h]
  __int128 v37; // [rsp-2E8h] [rbp-4C0h]
  __int128 v38; // [rsp-2D8h] [rbp-4B0h]
  __int128 v39; // [rsp-2C8h] [rbp-4A0h]
  __int128 v40; // [rsp-2B8h] [rbp-490h]
  __int128 v41; // [rsp-2A8h] [rbp-480h]
  __int128 v42; // [rsp-298h] [rbp-470h]
  __int128 v43; // [rsp-288h] [rbp-460h]
  __int128 v44; // [rsp-278h] [rbp-450h]
  int v45; // [rsp-268h] [rbp-440h]
  int v46; // [rsp-260h] [rbp-438h]
  int v47; // [rsp-258h] [rbp-430h]
  int v48; // [rsp-250h] [rbp-428h]
  int v49; // [rsp-248h] [rbp-420h]
  int v50; // [rsp-240h] [rbp-418h]
  __int64 v51; // [rsp-238h] [rbp-410h]
  __int64 v52; // [rsp-230h] [rbp-408h]
  __int64 v53; // [rsp-228h] [rbp-400h]
  __int64 v54; // [rsp-220h] [rbp-3F8h]
  __int64 v55; // [rsp-218h] [rbp-3F0h]
  __int64 v56; // [rsp-210h] [rbp-3E8h]
  EXCEPTION_RECORD v57; // [rsp-200h] [rbp-3D8h] BYREF
  __int64 v58; // [rsp-168h] [rbp-340h]
  __int64 v59; // [rsp-160h] [rbp-338h]
  __int64 v60; // [rsp-158h] [rbp-330h]
  __int64 v61; // [rsp-150h] [rbp-328h]
  __int64 v62; // [rsp-148h] [rbp-320h]
  __int64 v63; // [rsp-140h] [rbp-318h]
  __int64 v64; // [rsp-138h] [rbp-310h]
  __int64 v65; // [rsp-130h] [rbp-308h]
  __int64 v66; // [rsp-128h] [rbp-300h]
  __int64 v67; // [rsp-120h] [rbp-2F8h]
  __int64 v68; // [rsp-118h] [rbp-2F0h]
  __int64 v69; // [rsp-110h] [rbp-2E8h]
  __int64 v70; // [rsp-108h] [rbp-2E0h]
  __int64 v71; // [rsp-100h] [rbp-2D8h]
  __int64 v72; // [rsp-F8h] [rbp-2D0h]

  v35 = v14;
  v36 = v15;
  v37 = v16;
  v38 = v17;
  v39 = v18;
  v40 = v19;
  v41 = v20;
  v42 = v21;
  v43 = v22;
  v44 = v23;
  v51 = v5;
  v52 = v7;
  v53 = v8;
  v54 = v11;
  v55 = v12;
  v56 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v34[8],
      v34[10],
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
      DWORD2(v44),
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
      v55,
      v56);
  v57.ExceptionCode = a1;
  v57.ExceptionFlags = 1;
  v57.ExceptionRecord = 0LL;
  v57.ExceptionAddress = a3;
  v57.NumberParameters = a2;
  v57.ExceptionInformation[0] = a4;
  v57.ExceptionInformation[1] = v9;
  v57.ExceptionInformation[2] = v10;
  v24 = *(_BYTE *)(v6 + 240) & 1;
  if ( !v24 )
    KiBugCheckDispatch(0x139u, v57.ExceptionInformation[0], v6 - 128, (ULONG_PTR)&v57);
  KiDispatchException(&v57, (__int64)v34, v6 - 128, v24, 0);
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
    KiRestoreDebugRegisterState(CurrentThread, v25);
  v27 = *(_QWORD *)(v6 - 48);
  v28 = *(_QWORD *)(v6 - 56);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x2EB4u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v30 = _bittestandreset16(MK_FP(__GS__, 11952LL), 2u);
  if ( v30 )
    __writemsr(0x49u, 1uLL);
  v30 = _bittestandreset16(MK_FP(__GS__, 11952LL), 5u);
  if ( v30 )
  {
    v57.ExceptionAddress = &loc_1401947BD;
    v72 = 0x1401948D4LL;
    v71 = 0x1401948CBLL;
    v70 = 0x1401948C2LL;
    v69 = 0x1401948B9LL;
    v68 = 0x1401948B0LL;
    v67 = 0x1401948A7LL;
    v66 = 0x14019489ELL;
    v65 = 0x140194895LL;
    v64 = 0x14019488CLL;
    v63 = 0x140194883LL;
    v62 = 0x14019487ALL;
    v61 = 0x140194871LL;
    v60 = 0x140194868LL;
    v59 = 0x14019485FLL;
    v58 = 0x140194856LL;
    v57.ExceptionInformation[14] = 0x14019484DLL;
    v57.ExceptionInformation[13] = 0x140194844LL;
    v57.ExceptionInformation[12] = 0x14019483BLL;
    v57.ExceptionInformation[11] = 0x140194832LL;
    v57.ExceptionInformation[10] = 0x140194829LL;
    v57.ExceptionInformation[9] = 0x140194820LL;
    v57.ExceptionInformation[8] = 0x140194817LL;
    v57.ExceptionInformation[7] = 0x14019480ELL;
    v57.ExceptionInformation[6] = 0x140194805LL;
    v57.ExceptionInformation[5] = 0x1401947FCLL;
    v57.ExceptionInformation[4] = 0x1401947F3LL;
    v57.ExceptionInformation[3] = 0x1401947EALL;
    v57.ExceptionInformation[2] = 0x1401947E1LL;
    v57.ExceptionInformation[1] = 0x1401947D8LL;
    v57.ExceptionInformation[0] = 0x1401947CFLL;
    *(_QWORD *)&v57.NumberParameters = 0x1401947C6LL;
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
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v28, v27, a5);
}
