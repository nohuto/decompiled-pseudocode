/*
 * XREFs of PspFreezeProcessWorker @ 0x1406C3DD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsSuspendProcess @ 0x1404098CC (PsSuspendProcess.c)
 *     PsCaptureExceptionPort @ 0x140420D34 (PsCaptureExceptionPort.c)
 */

__int64 __fastcall PspFreezeProcessWorker(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rax

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( (PEPROCESS)a1 != PsInitialSystemProcess && (PVOID)a1 != PsIdleProcess && a1 != ServerSiloGlobals[5] )
  {
    v6 = PsCaptureExceptionPort(a1, v3, v4, v5);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( (*(_DWORD *)(a1 + 772) & 4) == 0 )
      PsSuspendProcess((struct _EX_RUNDOWN_REF *)a1);
  }
  return 0LL;
}
