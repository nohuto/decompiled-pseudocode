/*
 * XREFs of IrqTranslatepQueryDeviceIrql @ 0x1C006D000
 * Callers:
 *     IrqTranslateResources @ 0x1C006B910 (IrqTranslateResources.c)
 *     IrqTransGetInterruptVector @ 0x1C00801E0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     IrqArbGetDeviceIrql @ 0x1C006CFA4 (IrqArbGetDeviceIrql.c)
 */

char __fastcall IrqTranslatepQueryDeviceIrql(unsigned int a1, int a2)
{
  _BYTE v5[16]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v6[20]; // [rsp+30h] [rbp-68h] BYREF

  memset(v6, 0, sizeof(v6));
  v6[1] = a2;
  if ( a1 >= 0xFFF00000 )
  {
    v6[0] = 3;
  }
  else
  {
    v6[0] = 0;
    v6[14] = a1;
  }
  IrqArbGetDeviceIrql(v6, v5);
  return v5[0];
}
