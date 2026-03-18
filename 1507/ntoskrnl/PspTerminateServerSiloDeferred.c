/*
 * XREFs of PspTerminateServerSiloDeferred @ 0x1406C2DDC
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     PspWaitForUsermodeExit @ 0x1406C3EC4 (PspWaitForUsermodeExit.c)
 */

LONG __fastcall PspTerminateServerSiloDeferred(PRKEVENT Event)
{
  _KPROCESS **ServerSiloGlobals; // rax
  __int64 v3; // r9
  _KPROCESS **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _KPROCESS *v7; // rcx
  LONG result; // eax
  _KPROCESS *v9; // rcx

  ServerSiloGlobals = (_KPROCESS **)PsGetServerSiloGlobals(Event);
  v4 = ServerSiloGlobals;
  v5 = *(unsigned int *)ServerSiloGlobals;
  if ( (_DWORD)v5 != -1 )
    CsrShutdownSynchronization((__int64)Event, v5, ServerSiloGlobals[5], v3);
  v6 = (__int64)v4[5];
  if ( v6 )
  {
    PsTerminateProcess(v6, 0xC00002EB);
    PspWaitForUsermodeExit(v4[5]);
    ObfDereferenceObject(v4[5]);
    v4[5] = 0LL;
  }
  v7 = v4[6];
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    v4[6] = 0LL;
  }
  KeWaitForSingleObject(&Event[9].Header.WaitListHead.Blink, Executive, 0, 0, 0LL);
  result = KeSetEvent(Event, 0, 0);
  v9 = v4[3];
  if ( v9 )
  {
    result = ZwClose(v9);
    v4[3] = 0LL;
  }
  if ( Event )
    return PspDereferenceSiloObject(Event);
  return result;
}
