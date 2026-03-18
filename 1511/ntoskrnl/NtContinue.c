/*
 * XREFs of NtContinue @ 0x140154450
 * Callers:
 *     <none>
 * Callees:
 *     KiContinueEx @ 0x14002AEF0 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

NTSTATUS __stdcall NtContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v8; // rcx
  unsigned int Signalling; // eax
  unsigned __int64 TrappedSecurityDomain; // rax
  _QWORD v11[39]; // [rsp+0h] [rbp-138h] BYREF
  char v12; // [rsp+160h] [rbp+28h]

  v3 = *(_QWORD *)(v2 + 192);
  v4 = *(_QWORD *)(v2 + 200);
  v5 = *(_QWORD *)(v2 + 208);
  *(_QWORD *)(v2 - 80) = 0LL;
  v11[32] = v3;
  v11[33] = v4;
  v11[34] = v5;
  result = KiContinueEx((ULONG64)Context, TestAlert, (__int64)v11, v2 - 128);
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
        KiUmsExit(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v2 - 84));
    if ( *(_WORD *)(v2 + 128) )
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
    return KiKernelExit(*(_QWORD *)(v2 - 72), *(_QWORD *)(v2 - 64), *(_QWORD *)(v2 - 56), *(_QWORD *)(v2 - 48), v12);
  }
  return result;
}
