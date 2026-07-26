/*
 * XREFs of NdisMDeregisterInterrupt @ 0x1C00D32E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C005FEA0 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 */

void __stdcall NdisMDeregisterInterrupt(PNDIS_MINIPORT_INTERRUPT Interrupt)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  Miniport = Interrupt->Miniport;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x10u, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)Miniport);
  if ( Interrupt->InterruptObject )
  {
    if ( _InterlockedExchangeAdd(&Miniport->RegisteredInterrupts, 0xFFFFFFFF) == 1 )
      Interrupt->Miniport->Flags |= 0x20u;
    *(_QWORD *)&Parameters.Version = 0LL;
    Parameters.ConnectionContext.Generic = Interrupt->InterruptObject;
    Parameters.Version = 1;
    IoDisconnectInterruptEx(&Parameters);
    ndisWaitForDpcCompletion(
      &Interrupt->DpcCount,
      (volatile unsigned __int8 *)&Interrupt->8,
      &Interrupt->DpcsCompletedEvent);
    Interrupt->Miniport->Interrupt = 0LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x11u, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)Interrupt->Miniport);
}
