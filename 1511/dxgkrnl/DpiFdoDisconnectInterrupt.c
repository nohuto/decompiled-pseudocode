/*
 * XREFs of DpiFdoDisconnectInterrupt @ 0x1C016BABC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoDisconnectInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  Parameters.Version = *(_DWORD *)(v1 + 1176);
  Parameters.ConnectionContext.Generic = *(PVOID *)(v1 + 1184);
  *(_QWORD *)(v1 + 1184) = 0LL;
  IoDisconnectInterruptEx(&Parameters);
}
