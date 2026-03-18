/*
 * XREFs of PspSystemThreadStartup @ 0x1400DAAD4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeSynchronizeAddressPolicy @ 0x1401FF8D4 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x140209EF0 (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x14040FEA8 (SeTokenIsAdmin.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     MmSynchronizeAddressPolicy @ 0x1406A85EC (MmSynchronizeAddressPolicy.c)
 */

__int64 __fastcall PspSystemThreadStartup(void (__fastcall *a1)(__int64), __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int16 v10; // ax
  PACCESS_TOKEN v11; // rbx
  BOOL v12; // edi
  signed __int32 v14[16]; // [rsp+0h] [rbp-58h] BYREF

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFu);
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v14, 0);
    if ( (*(_QWORD *)&Process[1].Header.Lock & 1) != 0 )
    {
      v8 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, a4);
      ExfAcquirePushLockExclusiveEx(&Process[1], v8, &Process[1]);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 32);
        *(_BYTE *)(v8 + 26) |= 1u;
      }
      ExfReleasePushLockExclusive(&Process[1], v9);
      if ( v8 )
        KeAbPostRelease((ULONG_PTR)&Process[1]);
    }
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(a1);
    }
  }
  if ( ((unsigned int)KeKvaShadowingActive() || (KeGetCurrentPrcb()->BpbFeatures & 2) != 0)
    && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x800) == 0 )
  {
    v11 = PsReferencePrimaryToken(Process);
    v12 = SeTokenIsAdmin(v11) != 0;
    ObfDereferenceObject(v11);
    if ( Process->SecurePid )
      v12 = 1;
    if ( v12 )
    {
      Process->AddressPolicy = 1;
      _InterlockedOr(v14, 0);
    }
    if ( Process->AddressPolicy == 1 )
      *(_QWORD *)&Process[2].ThreadSeed[12] = 0LL;
    KeSynchronizeAddressPolicy(Process);
    if ( !_interlockedbittestandset((volatile signed __int32 *)&Process[2].ReadyListHead.Blink + 1, 0xBu)
      && Process->AddressPolicy == 1 )
    {
      MmSynchronizeAddressPolicy(Process);
    }
    _interlockedbittestandset((volatile signed __int32 *)&Process[2].ReadyListHead.Blink + 1, 0xBu);
  }
  if ( (((unsigned __int8)*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) ^ 1) & 3) == 3 )
    a1(a2);
  return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread);
}
