/*
 * XREFs of PepUpdatePerformanceConstraint @ 0x1C001C76C
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C0005450 (PepDevicePowerControlCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepUpdatePerformanceConstraint(__int64 a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1128) )
  {
    _m_prefetchw((const void *)(a1 + 1124));
    v2 = *(_DWORD *)(a1 + 1124);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1124), v2 | 1, v2);
    }
    while ( v3 != v2 );
    if ( !(_BYTE)v2 )
      IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1128), PepUpdatePerformanceConstraintWorker, CriticalWorkQueue, 0LL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
