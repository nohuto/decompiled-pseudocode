/*
 * XREFs of VerifierIoConnectInterrupt @ 0x140739A0C
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoConnectInterrupt @ 0x1405BC228 (IoConnectInterrupt.c)
 *     ViCtxAllocateIsrContext @ 0x14074E950 (ViCtxAllocateIsrContext.c)
 */

__int64 __fastcall VerifierIoConnectInterrupt(
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
  int v17; // edi

  v11 = 0LL;
  v13 = ServiceContext;
  v14 = ServiceRoutine;
  if ( ViCtxInitializedIsrStateBlocks )
  {
    IsrContext = ViCtxAllocateIsrContext(ServiceRoutine, ServiceContext, 0LL);
    v11 = (void *)IsrContext;
    if ( !IsrContext )
      return (unsigned int)-1073741670;
    v14 = (KSERVICE_ROUTINE *)ViCtxIsr;
    v13 = (PVOID)IsrContext;
  }
  v17 = pXdvIoConnectInterrupt(
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
  if ( v17 < 0 && v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v17;
}
