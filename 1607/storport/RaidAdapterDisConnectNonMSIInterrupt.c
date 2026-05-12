/*
 * XREFs of RaidAdapterDisConnectNonMSIInterrupt @ 0x1C005E07C
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0026BEC (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectNonMSIInterrupt(__int64 a1)
{
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&Parameters.Version = 0LL;
  Parameters.Version = *(_DWORD *)(a1 + 676);
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 664);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 664) = 0LL;
}
