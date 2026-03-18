/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x14021171C
 * Callers:
 *     IovpLogStackTrace @ 0x140701694 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004F390 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14015DB50 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v2, (__int64)&v3) )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)&KeGetCurrentStackPointer()[-v2] >= 0xE30;
  return v0;
}
