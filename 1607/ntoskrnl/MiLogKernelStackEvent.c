/*
 * XREFs of MiLogKernelStackEvent @ 0x1401EECBC
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140094924 (MiInPageSingleKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  bool v3; // zf
  __int16 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 *v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v3 = a3 == 1;
  v7 = 0LL;
  v4 = 632;
  v8 = 0LL;
  if ( !v3 )
    v4 = 633;
  v11 = 0;
  v6 = 11LL;
  v8 = a2;
  v7 = a1;
  v9 = &v6;
  v10 = 24;
  return EtwTraceKernelEvent((int)&v9, 1, 0x20000001u, v4, 289413890);
}
