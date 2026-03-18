/*
 * XREFs of EtwpClockSourceRunDown @ 0x1406E8450
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeGetDynamicTickDisableReason @ 0x140195C44 (KeGetDynamicTickDisableReason.c)
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
    off_140321A30();
    v4[0] = v4[5];
    v4[1] = v4[6];
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v7 = 0;
    v4[2] = DynamicTickDisableReason;
    v5 = v4;
    v6 = 12;
    EtwpLogKernelEvent((__int64)&v5, a1, 1u, 0xF5Au, 4200450);
  }
}
