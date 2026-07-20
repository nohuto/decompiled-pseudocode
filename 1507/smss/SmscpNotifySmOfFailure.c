/*
 * XREFs of SmscpNotifySmOfFailure @ 0x1400136AC
 * Callers:
 *     SmscMain @ 0x140002F70 (SmscMain.c)
 * Callees:
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 */

void __noreturn SmscpNotifySmOfFailure()
{
  int v0; // ebx
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-178h] BYREF
  __int16 v2; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v3[38]; // [rsp+32h] [rbp-166h] BYREF
  int v4; // [rsp+58h] [rbp-140h]
  int v5; // [rsp+60h] [rbp-138h]

  Interval.QuadPart = -50000000LL;
  v0 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
  while ( 1 )
  {
    v2 = 0;
    memset_0(v3, 0, 0x146uLL);
    v5 = v0;
    v4 = 6;
    RtlSendMsgToSm(SmpApiConnectionPort, &v2);
    NtDelayExecution(0, &Interval);
  }
}
