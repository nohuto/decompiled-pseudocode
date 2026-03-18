/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x1C000A4C0
 * Callers:
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 *     UsbhResetPort @ 0x1C0009250 (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     Usbh_PcLogEntry @ 0x1C004279C (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x1C0044230 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x1C00511E0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051720 (UsbhReset2Timeout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

void (__fastcall *__fastcall Usbh_UsbdReadFrameCounter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, unsigned int *)
{
  __int64 v5; // rcx
  void (__fastcall *result)(_QWORD, unsigned int *); // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5, a3, a4);
  result = *(void (__fastcall **)(_QWORD, unsigned int *))(v5 + 4592);
  if ( result )
  {
    result(*(_QWORD *)(v5 + 4560), &v7);
    return (void (__fastcall *)(_QWORD, unsigned int *))v7;
  }
  return result;
}
