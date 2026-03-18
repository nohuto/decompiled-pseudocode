/*
 * XREFs of UsbhCancelOutOfBandwidthTimer @ 0x1C00094D4
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C001F190 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     Log @ 0x1C0013250 (Log.c)
 */

__int64 __fastcall UsbhCancelOutOfBandwidthTimer(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = a1;
  result = UsbhGetPortData(a1, a2);
  if ( result )
    return Log(v2, 8, 1869567096, result, _InterlockedExchange64((volatile __int64 *)(result + 688), 0LL));
  return result;
}
