/*
 * XREFs of PspFreezeProcessWorker @ 0x1406418B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     PsCaptureExceptionPort @ 0x1403F1E5C (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x140518CC0 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rax
  void *v3; // rax

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( (PEPROCESS)a1 != PsInitialSystemProcess && (PVOID)a1 != PsIdleProcess && a1 != ServerSiloGlobals[5] )
  {
    v3 = PsCaptureExceptionPort(a1);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( (*(_DWORD *)(a1 + 772) & 4) == 0 )
      PsSuspendProcess((struct _EX_RUNDOWN_REF *)a1);
  }
  return 0LL;
}
