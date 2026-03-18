/*
 * XREFs of UsbhCancelOutOfBandwidthTimer @ 0x1C0007600
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0006F00 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
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
