/*
 * XREFs of RiPeekDeviceQueue @ 0x1C00076F4
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C00046D0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C0007630 (RiGetEnqueueReason.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RiPeekDeviceQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 != a1 + 96 )
    return v1;
  v2 = a1 + 80;
  if ( *(_QWORD *)v2 != v2 )
    return *(_QWORD *)v2;
  return 0LL;
}
