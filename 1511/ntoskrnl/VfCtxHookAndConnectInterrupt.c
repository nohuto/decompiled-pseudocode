/*
 * XREFs of VfCtxHookAndConnectInterrupt @ 0x1406CB064
 * Callers:
 *     VerifierIoConnectInterrupt @ 0x1406B94F0 (VerifierIoConnectInterrupt.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoConnectInterrupt @ 0x1405461EC (IoConnectInterrupt.c)
 *     ViCtxAllocateIsrContext @ 0x1406CB2BC (ViCtxAllocateIsrContext.c)
 */

__int64 __fastcall VfCtxHookAndConnectInterrupt(
        PKINTERRUPT *InterruptObject,
        PKSERVICE_ROUTINE ServiceRoutine,
        PVOID ServiceContext,
        PKSPIN_LOCK SpinLock,
        ULONG Vector,
        KIRQL Irql,
        KIRQL SynchronizeIrql,
        KINTERRUPT_MODE InterruptMode,
        BOOLEAN ShareVector,
        KAFFINITY ProcessorEnableMask,
        BOOLEAN FloatingSave)
{
  void *v11; // rbx
  PVOID v13; // r10
  KSERVICE_ROUTINE *v14; // r11
  __int64 IsrContext; // rax
  int v18; // edi

  v11 = 0LL;
  v13 = ServiceContext;
  v14 = ServiceRoutine;
  if ( ViCtxInitializedIsrStateBlocks )
  {
    IsrContext = ViCtxAllocateIsrContext(ServiceRoutine, ServiceContext, 0LL);
    v11 = (void *)IsrContext;
    if ( !IsrContext )
      return 3221225626LL;
    v14 = (KSERVICE_ROUTINE *)ViCtxIsr;
    v13 = (PVOID)IsrContext;
  }
  v18 = pXdvIoConnectInterrupt(
          InterruptObject,
          v14,
          v13,
          SpinLock,
          Vector,
          Irql,
          SynchronizeIrql,
          InterruptMode,
          ShareVector,
          ProcessorEnableMask,
          FloatingSave);
  if ( v18 < 0 )
  {
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)v18;
}
