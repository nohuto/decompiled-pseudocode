/*
 * XREFs of NtRaiseException @ 0x1401546F0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseException @ 0x140022668 (KiRaiseException.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

NTSTATUS __stdcall NtRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  __int64 v3; // rbp
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v6; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  __int64 v9; // [rsp+0h] [rbp-138h] BYREF
  char v10; // [rsp+160h] [rbp+28h]

  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 232);
  result = KiRaiseException(ExceptionRecord, (__int64)Context, (int)&v9, v3 - 128, SearchFrames);
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
        KiUmsExit(v6);
      }
    }
    _mm_setcsr(*(_DWORD *)(v3 - 84));
    if ( *(_WORD *)(v3 + 128) )
      KiRestoreDebugRegisterState();
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
    return KiKernelExit(*(_QWORD *)(v3 - 72), *(_QWORD *)(v3 - 64), *(_QWORD *)(v3 - 56), *(_QWORD *)(v3 - 48), v10);
  }
  return result;
}
