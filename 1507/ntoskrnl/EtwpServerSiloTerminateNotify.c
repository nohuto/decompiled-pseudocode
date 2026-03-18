/*
 * XREFs of EtwpServerSiloTerminateNotify @ 0x1406E6DD0
 * Callers:
 *     <none>
 * Callees:
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 */

void __fastcall EtwpServerSiloTerminateNotify(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx

  v6 = PsAttachSiloToCurrentThread((__int64)a1, a2, a3, a4);
  EtwUnregister(*(_QWORD *)(a2 + 400));
  *(_QWORD *)(a2 + 400) = 0LL;
  EtwShutdown(0);
  PsDetachSiloFromCurrentThread(v6);
  if ( a1 )
    PspDereferenceSiloObject(a1);
}
