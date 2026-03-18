/*
 * XREFs of PsDeleteMonitorContextServerSilo @ 0x1401F57A8
 * Callers:
 *     PspNotifyServerSiloTermination @ 0x1406406EC (PspNotifyServerSiloTermination.c)
 *     PspUnregisterMonitorDeferred @ 0x140640C04 (PspUnregisterMonitorDeferred.c)
 * Callees:
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 */

void __fastcall PsDeleteMonitorContextServerSilo(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  _QWORD *ServerSiloGlobals; // rax
  char v6; // di
  void (__fastcall *v7)(__int64); // rax

  v2 = *(_QWORD *)(a2 - 112);
  v4 = *(unsigned int *)(v2 + 104);
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v6 = *(_BYTE *)(a2 - 64);
  if ( v6 )
  {
    *(_QWORD *)(ServerSiloGlobals[8] + 8 * v4) &= 7uLL;
    *(_BYTE *)(a2 - 64) = 0;
  }
  v7 = *(void (__fastcall **)(__int64))(v2 + 72);
  if ( v7 )
    v7(a2);
  if ( v6 )
    PspDereferenceMonitorContextServerSilo(a2 - 128);
}
