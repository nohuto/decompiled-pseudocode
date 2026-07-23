/*
 * XREFs of PerfInfoLogVirtualFree @ 0x1406A31D0
 * Callers:
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogVirtualFree(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]
  _QWORD *v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 744);
  v6[0] = a1;
  v6[1] = a2;
  v7 = v4;
  v9 = v6;
  v11 = 0;
  v8 = a4;
  v10 = 24;
  return EtwTraceKernelEvent((int)&v9, 1, 0x20008000u, 611, 5249282);
}
