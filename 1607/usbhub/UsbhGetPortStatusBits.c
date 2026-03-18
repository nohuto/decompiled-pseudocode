/*
 * XREFs of UsbhGetPortStatusBits @ 0x1C0043CEC
 * Callers:
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040DC8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPortResumeTimeout @ 0x1C0044354 (UsbhPortResumeTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall UsbhGetPortStatusBits(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  __int16 v4; // cx
  char result; // al

  v4 = *a3;
  result = a4 != 0;
  if ( (*a3 & 1) != 0 )
    result |= 0x10u;
  if ( (v4 & 4) != 0 )
    result |= 2u;
  if ( (v4 & 8) != 0 )
    result |= 4u;
  if ( (v4 & 2) != 0 )
    return result | 8;
  return result;
}
