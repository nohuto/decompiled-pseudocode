/*
 * XREFs of NtContinue @ 0x14015E110
 * Callers:
 *     <none>
 * Callees:
 *     KiContinueEx @ 0x1400CA74C (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     NtContinue @ 0x14015E110 (NtContinue.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __stdcall NtContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v12; // cf
  _QWORD v15[32]; // [rsp-298h] [rbp-3D0h] BYREF
  __int64 v16; // [rsp-198h] [rbp-2D0h]
  __int64 v17; // [rsp-190h] [rbp-2C8h]
  __int64 v18; // [rsp-188h] [rbp-2C0h]
  __int64 v19; // [rsp-180h] [rbp-2B8h]
  __int64 v20; // [rsp-178h] [rbp-2B0h]
  __int64 v21; // [rsp-170h] [rbp-2A8h]
  __int64 v22; // [rsp-168h] [rbp-2A0h]
  __int64 v23; // [rsp-160h] [rbp-298h]
  __int64 v24; // [rsp-158h] [rbp-290h]
  __int64 v25; // [rsp-150h] [rbp-288h]
  __int64 v26; // [rsp-148h] [rbp-280h]
  __int64 v27; // [rsp-140h] [rbp-278h]
  __int64 v28; // [rsp-138h] [rbp-270h]
  __int64 v29; // [rsp-130h] [rbp-268h]
  __int64 v30; // [rsp-128h] [rbp-260h]
  __int64 v31; // [rsp-120h] [rbp-258h]
  __int64 v32; // [rsp-118h] [rbp-250h]
  __int64 v33; // [rsp-110h] [rbp-248h]
  __int64 v34; // [rsp-108h] [rbp-240h]
  __int64 v35; // [rsp-100h] [rbp-238h]
  __int64 v36; // [rsp-F8h] [rbp-230h]
  char v38; // [rsp+160h] [rbp+28h]

  v3 = *(_QWORD *)(v2 + 192);
  v4 = *(_QWORD *)(v2 + 200);
  v5 = *(_QWORD *)(v2 + 208);
  *(_QWORD *)(v2 - 80) = 0LL;
  v16 = v3;
  v17 = v4;
  v18 = v5;
  result = KiContinueEx((unsigned __int64)Context, TestAlert, (unsigned __int64)v15, (_KTRAP_FRAME *)(v2 - 128));
  if ( result > 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v2 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v2 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v2 - 84));
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
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      ((void (*)(void))KiRestoreSetContextState)();
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
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v2 - 84));
    if ( *(_WORD *)(v2 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v2 - 48);
    v10 = *(_QWORD *)(v2 - 56);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x2EBCu, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v12 = _bittestandreset16(MK_FP(__GS__, 11960LL), 2u);
    if ( v12 )
      __writemsr(0x49u, 1uLL);
    v12 = _bittestandreset16(MK_FP(__GS__, 11960LL), 5u);
    if ( v12 )
    {
      v15[21] = 0x14015E336LL;
      v36 = 0x14015E44DLL;
      v35 = 0x14015E444LL;
      v34 = 0x14015E43BLL;
      v33 = 0x14015E432LL;
      v32 = 0x14015E429LL;
      v31 = 0x14015E420LL;
      v30 = 0x14015E417LL;
      v29 = 0x14015E40ELL;
      v28 = 0x14015E405LL;
      v27 = 0x14015E3FCLL;
      v26 = 0x14015E3F3LL;
      v25 = 0x14015E3EALL;
      v24 = 0x14015E3E1LL;
      v23 = 0x14015E3D8LL;
      v22 = 0x14015E3CFLL;
      v21 = 0x14015E3C6LL;
      v20 = 0x14015E3BDLL;
      v19 = 0x14015E3B4LL;
      v18 = 0x14015E3ABLL;
      v17 = 0x14015E3A2LL;
      v16 = 0x14015E399LL;
      v15[31] = 0x14015E390LL;
      v15[30] = 0x14015E387LL;
      v15[29] = 0x14015E37ELL;
      v15[28] = 0x14015E375LL;
      v15[27] = 0x14015E36CLL;
      v15[26] = 0x14015E363LL;
      v15[25] = 0x14015E35ALL;
      v15[24] = 0x14015E351LL;
      v15[23] = 0x14015E348LL;
      v15[22] = 0x14015E33FLL;
    }
    if ( (KiKvaShadow & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState & 0x80) != 0 )
        __asm { verw    [rsp-298h+arg_2B0] }
      __asm
      {
        swapgs
        iretq
      }
    }
    return KiKernelExit(*(_QWORD *)(v2 - 72), *(_QWORD *)(v2 - 64), v10, v9, v38);
  }
  return result;
}
