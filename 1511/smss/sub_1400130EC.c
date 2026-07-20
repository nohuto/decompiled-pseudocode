/*
 * XREFs of sub_1400130EC @ 0x1400130EC
 * Callers:
 *     sub_140001914 @ 0x140001914 (sub_140001914.c)
 * Callees:
 *     memset @ 0x14000C48C (memset.c)
 */

void __noreturn sub_1400130EC()
{
  int v0; // ebx
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-178h] BYREF
  _DWORD v2[84]; // [rsp+30h] [rbp-168h] BYREF

  Interval.QuadPart = -50000000LL;
  v0 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
  while ( 1 )
  {
    memset(v2, 0, 328);
    v2[12] = v0;
    v2[10] = 6;
    RtlSendMsgToSm(qword_14001FCE0, v2);
    NtDelayExecution(0, &Interval);
  }
}
