/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x14052BDBC
 * Callers:
 *     <none>
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140110C4C (IoControlPnpDeviceActionQueue.c)
 *     PoDiagTraceDeviceRundown @ 0x14052BE38 (PoDiagTraceDeviceRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  __int64 v0; // rbx
  __int64 i; // rax
  __int64 v2; // rax

  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  IoControlPnpDeviceActionQueue(1);
  v0 = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    v0 = i;
  while ( v0 != IopRootDeviceNode )
  {
    PoDiagTraceDeviceRundown(v0, v0 + 40, v0 + 56, *(unsigned int *)(v0 + 140));
    v2 = *(_QWORD *)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v2;
        v2 = *(_QWORD *)(v2 + 8);
      }
      while ( v2 );
    }
    else
    {
      v0 = *(_QWORD *)(v0 + 16);
    }
  }
  return IoControlPnpDeviceActionQueue(0);
}
