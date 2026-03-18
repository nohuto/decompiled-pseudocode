/*
 * XREFs of NtRaiseException @ 0x1401831C0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseException @ 0x140124BE0 (KiRaiseException.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x1401831C0 (NtRaiseException.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
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
      __writegsword(0x2EB4u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v10 = _bittestandreset16(MK_FP(__GS__, 11952LL), 2u);
    if ( v10 )
      __writemsr(0x49u, 1uLL);
    v10 = _bittestandreset16(MK_FP(__GS__, 11952LL), 5u);
    if ( v10 )
    {
      v13[21] = 0x1401833C5LL;
      v13[52] = 0x1401834DCLL;
      v13[51] = 0x1401834D3LL;
      v13[50] = 0x1401834CALL;
      v13[49] = 0x1401834C1LL;
      v13[48] = 0x1401834B8LL;
      v13[47] = 0x1401834AFLL;
      v13[46] = 0x1401834A6LL;
      v13[45] = 0x14018349DLL;
      v13[44] = 0x140183494LL;
      v13[43] = 0x14018348BLL;
      v13[42] = 0x140183482LL;
      v13[41] = 0x140183479LL;
      v13[40] = 0x140183470LL;
      v13[39] = 0x140183467LL;
      v13[38] = 0x14018345ELL;
      v13[37] = 0x140183455LL;
      v13[36] = 0x14018344CLL;
      v13[35] = 0x140183443LL;
      v13[34] = 0x14018343ALL;
      v13[33] = 0x140183431LL;
      v13[32] = 0x140183428LL;
      v13[31] = 0x14018341FLL;
      v13[30] = 0x140183416LL;
      v13[29] = 0x14018340DLL;
      v13[28] = 0x140183404LL;
      v13[27] = 0x1401833FBLL;
      v13[26] = 0x1401833F2LL;
      v13[25] = 0x1401833E9LL;
      v13[24] = 0x1401833E0LL;
      v13[23] = 0x1401833D7LL;
      v13[22] = 0x1401833CELL;
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
