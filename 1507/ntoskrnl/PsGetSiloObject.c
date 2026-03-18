/*
 * XREFs of PsGetSiloObject @ 0x140490B30
 * Callers:
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObpCreateSymbolicLinkName @ 0x140551904 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsGetSiloObjectByPointer @ 0x1406C0B54 (PsGetSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsGetSiloObject(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  signed __int64 *p_Lock; // rsi
  __int64 v9; // rbx
  __int64 v10; // r9
  PVOID v11; // rbx
  __int16 v12; // ax
  NTSTATUS result; // eax
  int SiloObjectByPointer; // edi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 == (void *)-1LL )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->Process;
    --CurrentThread->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    v9 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v9, (ULONG_PTR)&Process[1], v10);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v11 = *(PVOID *)&CurrentThread[1].WaitBlockFill11[160];
    if ( v11 == (PVOID)-3LL )
      v11 = (PVOID)Process[2].ActiveProcessors.Bitmap[12];
    if ( v11 )
      PspReferenceSiloObject(v11);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v11 )
      return -1073741816;
LABEL_20:
    SiloObjectByPointer = PsGetSiloObjectByPointer(v11, a2, a3);
    PspDereferenceSiloObject(v11);
    return SiloObjectByPointer;
  }
  result = ObReferenceObjectByHandle(a1, 4u, PsSiloType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  v11 = Object;
  if ( result >= 0 )
    goto LABEL_20;
  return result;
}
