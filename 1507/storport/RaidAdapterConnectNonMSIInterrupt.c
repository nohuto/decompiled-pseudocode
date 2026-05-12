/*
 * XREFs of RaidAdapterConnectNonMSIInterrupt @ 0x1C0052CB4
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1C0008414 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall RaidAdapterConnectNonMSIInterrupt(
        unsigned __int64 a1,
        ULONG a2,
        KIRQL a3,
        unsigned __int8 a4,
        int a5,
        BOOLEAN a6,
        __int64 a7)
{
  struct _DEVICE_OBJECT *v11; // rax
  NTSTATUS v12; // ecx
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF

  memset(&Parameters, 0, sizeof(Parameters));
  v11 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Parameters.FullySpecified.InterruptMode = LevelSensitive;
  Parameters.FullySpecified.PhysicalDeviceObject = v11;
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterInterruptRoutine;
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)a7;
  Parameters.FullySpecified.Group = *(_WORD *)(a7 + 8);
  Parameters.FullySpecified.ShareVector = a6;
  Parameters.Version = 4;
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(a1 + 664);
  *(_OWORD *)&Parameters.MessageBased.ServiceContext = a1;
  Parameters.FullySpecified.Vector = a2;
  Parameters.FullySpecified.Irql = a3;
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = a4;
  v12 = IoConnectInterruptEx(&Parameters);
  if ( v12 >= 0 )
    *(_DWORD *)(a1 + 676) = Parameters.Version;
  else
    *(_QWORD *)(a1 + 664) = 0LL;
  return (unsigned int)v12;
}
