/*
 * XREFs of MiLogKernelStackEvent @ 0x1401DE3D4
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14002C660 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14002CF40 (MmDeleteKernelStack.c)
 *     MiInPageSingleKernelStack @ 0x1400DE754 (MiInPageSingleKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  bool v3; // zf
  unsigned __int16 v4; // r8
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v3 = a3 == 1;
  v4 = 632;
  if ( !v3 )
    v4 = 633;
  v9 = 0;
  v6[2] = a2;
  v6[1] = a1;
  v7 = v6;
  v6[0] = 11LL;
  v8 = 24;
  return EtwTraceKernelEvent((int)&v7, 1, 0x20000001u, v4, 289413890);
}
