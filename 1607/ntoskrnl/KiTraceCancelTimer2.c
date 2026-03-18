/*
 * XREFs of KiTraceCancelTimer2 @ 0x1401DAC30
 * Callers:
 *     KeDisableTimer2 @ 0x1400F79FC (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 *     KiTraceSetTimer2 @ 0x1401DADC8 (KiTraceSetTimer2.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 __fastcall KiTraceCancelTimer2(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v4 = &v3;
  v6 = 0;
  v3 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a2 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
  v5 = 8;
  return EtwTraceKernelEvent((int)&v4, 1, 0x40020000u, 3946, 1538);
}
