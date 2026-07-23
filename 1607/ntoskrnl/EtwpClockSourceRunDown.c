/*
 * XREFs of EtwpClockSourceRunDown @ 0x1406A6E78
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     KeGetDynamicTickDisableReason @ 0x1400B3D94 (KeGetDynamicTickDisableReason.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpClockSourceRunDown(unsigned int a1, char a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  __int64 v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+38h] [rbp-48h]
  __int64 v6; // [rsp+44h] [rbp-3Ch]
  __int64 *v7; // [rsp+60h] [rbp-20h] BYREF
  int v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+6Ch] [rbp-14h]

  if ( a2 )
  {
    off_1402F2580();
    v4 = v6;
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v9 = 0;
    v7 = &v4;
    v5 = DynamicTickDisableReason;
    v8 = 12;
    EtwpLogKernelEvent((__int64)&v7, EtwpHostSiloState, a1, 1u, 0xF5Au, 0x401802u);
  }
}
