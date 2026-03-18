/*
 * XREFs of PspFreezeProcessWorker @ 0x14067FCFC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x14009CF3C (SmIsCompressionProcess.c)
 *     PsCaptureExceptionPort @ 0x140509690 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x14068202C (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rax
  __int64 v3; // rcx
  void *v4; // rax

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( (PEPROCESS)a1 != PsInitialSystemProcess
    && (PVOID)a1 != PsIdleProcess
    && a1 != ServerSiloGlobals[108]
    && !SmIsCompressionProcess(a1) )
  {
    v4 = PsCaptureExceptionPort(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (*(_DWORD *)(a1 + 772) & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
