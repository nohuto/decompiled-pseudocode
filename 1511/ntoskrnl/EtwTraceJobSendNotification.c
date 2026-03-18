/*
 * XREFs of EtwTraceJobSendNotification @ 0x140660BF0
 * Callers:
 *     PspSendReliableJobNotification @ 0x140487C50 (PspSendReliableJobNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406612BC (EtwpCopyJobGuidSafe.c)
 */

__int64 __fastcall EtwTraceJobSendNotification(__int64 a1)
{
  int v1; // r8d
  _BYTE v3[16]; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+40h] [rbp-28h]
  _BYTE *v5; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  EtwpCopyJobGuidSafe(v3, a1);
  v7 = 0;
  v4 = v1;
  v5 = v3;
  v6 = 20;
  return EtwTraceKernelEvent((int)&v5, 1, 0x80000u, 0x72Au, 5249284);
}
