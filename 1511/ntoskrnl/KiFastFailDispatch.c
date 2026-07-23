/*
 * XREFs of KiFastFailDispatch @ 0x140165E80
 * Callers:
 *     KiBoundFault @ 0x14015FA00 (KiBoundFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401640C0 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KiUmsExceptionEntry @ 0x140166780 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

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
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  _DWORD v29[12]; // [rsp+0h] [rbp-1D8h] BYREF
  __int128 v30; // [rsp+30h] [rbp-1A8h]
  __int128 v31; // [rsp+40h] [rbp-198h]
  __int128 v32; // [rsp+50h] [rbp-188h]
  __int128 v33; // [rsp+60h] [rbp-178h]
  __int128 v34; // [rsp+70h] [rbp-168h]
  __int128 v35; // [rsp+80h] [rbp-158h]
  __int128 v36; // [rsp+90h] [rbp-148h]
  __int128 v37; // [rsp+A0h] [rbp-138h]
  __int128 v38; // [rsp+B0h] [rbp-128h]
  __int128 v39; // [rsp+C0h] [rbp-118h]
  int v40; // [rsp+D0h] [rbp-108h]
  int v41; // [rsp+D8h] [rbp-100h]
  int v42; // [rsp+E0h] [rbp-F8h]
  int v43; // [rsp+E8h] [rbp-F0h]
  int v44; // [rsp+F0h] [rbp-E8h]
  int v45; // [rsp+F8h] [rbp-E0h]
  __int64 v46; // [rsp+100h] [rbp-D8h]
  __int64 v47; // [rsp+108h] [rbp-D0h]
  __int64 v48; // [rsp+110h] [rbp-C8h]
  __int64 v49; // [rsp+118h] [rbp-C0h]
  __int64 v50; // [rsp+120h] [rbp-B8h]
  __int64 v51; // [rsp+128h] [rbp-B0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+138h] [rbp-A0h] BYREF

  v30 = v14;
  v31 = v15;
  v32 = v16;
  v33 = v17;
  v34 = v18;
  v35 = v19;
  v36 = v20;
  v37 = v21;
  v38 = v22;
  v39 = v23;
  v46 = v5;
  v47 = v7;
  v48 = v8;
  v49 = v11;
  v50 = v12;
  v51 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v29[8],
      v29[10],
      v30,
      DWORD2(v30),
      v31,
      DWORD2(v31),
      v32,
      DWORD2(v32),
      v33,
      DWORD2(v33),
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
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  ExceptionRecord.ExceptionCode = a1;
  ExceptionRecord.ExceptionFlags = 1;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = a3;
  ExceptionRecord.NumberParameters = a2;
  ExceptionRecord.ExceptionInformation[0] = a4;
  ExceptionRecord.ExceptionInformation[1] = v9;
  ExceptionRecord.ExceptionInformation[2] = v10;
  v24 = *(_BYTE *)(v6 + 240) & 1;
  if ( !v24 )
    KiBugCheckDispatch(0x139u, ExceptionRecord.ExceptionInformation[0], v6 - 128, (ULONG_PTR)&ExceptionRecord);
  KiDispatchException(&ExceptionRecord, (__int64)v29, v6 - 128, v24, 0);
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
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), *(_QWORD *)(v6 - 56), *(_QWORD *)(v6 - 48), a5);
}
