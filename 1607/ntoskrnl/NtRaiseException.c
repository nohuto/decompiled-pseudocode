/*
 * XREFs of NtRaiseException @ 0x14015E510
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseException @ 0x140110604 (KiRaiseException.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x14015E510 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __stdcall NtRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  __int64 v3; // rbp
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v10; // cf
  _QWORD v13[87]; // [rsp-298h] [rbp-3D0h] BYREF
  char v15; // [rsp+160h] [rbp+28h]

  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 232);
  result = KiRaiseException(ExceptionRecord, (__int64)Context, (__int64)v13, v3 - 128, SearchFrames);
  if ( !result )
  {
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v3 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v3 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v3 - 84));
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
    v6 = KeGetCurrentThread();
    if ( (v6->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v6->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v6 = KeGetCurrentThread();
      }
      if ( (v6->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v6) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v6);
      }
    }
    _mm_setcsr(*(_DWORD *)(v3 - 84));
    if ( *(_WORD *)(v3 + 128) )
      KiRestoreDebugRegisterState();
    v7 = *(_QWORD *)(v3 - 48);
    v8 = *(_QWORD *)(v3 - 56);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x2EBCu, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v10 = _bittestandreset16(MK_FP(__GS__, 11960LL), 2u);
    if ( v10 )
      __writemsr(0x49u, 1uLL);
    v10 = _bittestandreset16(MK_FP(__GS__, 11960LL), 5u);
    if ( v10 )
    {
      v13[21] = 0x14015E72BLL;
      v13[52] = 0x14015E842LL;
      v13[51] = 0x14015E839LL;
      v13[50] = 0x14015E830LL;
      v13[49] = 0x14015E827LL;
      v13[48] = 0x14015E81ELL;
      v13[47] = 0x14015E815LL;
      v13[46] = 0x14015E80CLL;
      v13[45] = 0x14015E803LL;
      v13[44] = 0x14015E7FALL;
      v13[43] = 0x14015E7F1LL;
      v13[42] = 0x14015E7E8LL;
      v13[41] = 0x14015E7DFLL;
      v13[40] = 0x14015E7D6LL;
      v13[39] = 0x14015E7CDLL;
      v13[38] = 0x14015E7C4LL;
      v13[37] = 0x14015E7BBLL;
      v13[36] = 0x14015E7B2LL;
      v13[35] = 0x14015E7A9LL;
      v13[34] = 0x14015E7A0LL;
      v13[33] = 0x14015E797LL;
      v13[32] = 0x14015E78ELL;
      v13[31] = 0x14015E785LL;
      v13[30] = 0x14015E77CLL;
      v13[29] = 0x14015E773LL;
      v13[28] = 0x14015E76ALL;
      v13[27] = 0x14015E761LL;
      v13[26] = 0x14015E758LL;
      v13[25] = 0x14015E74FLL;
      v13[24] = 0x14015E746LL;
      v13[23] = 0x14015E73DLL;
      v13[22] = 0x14015E734LL;
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
    return KiKernelExit(*(_QWORD *)(v3 - 72), *(_QWORD *)(v3 - 64), v8, v7, v15);
  }
  return result;
}
