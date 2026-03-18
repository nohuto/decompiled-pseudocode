/*
 * XREFs of ExpSemaphoreInitialization @ 0x14075B2D4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 */

bool ExpSemaphoreInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _DWORD v2[34]; // [rsp+30h] [rbp-88h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Semaphore");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  v2[1] = 8;
  v2[2] = 256;
  v2[9] = 512;
  *(_OWORD *)&v2[3] = ExpSemaphoreMapping;
  v2[11] = 32;
  v2[7] = 2031619;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExSemaphoreObjectType) >= 0;
}
