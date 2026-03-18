/*
 * XREFs of EtwpClockSourceRunDown @ 0x14066535C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeGetDynamicTickDisableReason @ 0x140166E88 (KeGetDynamicTickDisableReason.c)
 */

void __fastcall EtwpClockSourceRunDown(unsigned int a1, char a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  _DWORD v4[12]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD *v5; // [rsp+60h] [rbp-20h] BYREF
  int v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+6Ch] [rbp-14h]

  if ( a2 )
  {
    off_1402D28E0();
    v4[0] = v4[5];
    v4[1] = v4[6];
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v7 = 0;
    v4[2] = DynamicTickDisableReason;
    v5 = v4;
    v6 = 12;
    EtwpLogKernelEvent((__int64)&v5, a1, 1LL, 0xF5Au, 0x401802u);
  }
}
