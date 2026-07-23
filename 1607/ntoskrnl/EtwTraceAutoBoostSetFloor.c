/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x1402257A8
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x14000C360 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  char DpcRequestSummary; // al
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-28h]
  char v14; // [rsp+3Ch] [rbp-24h]
  char v15; // [rsp+3Dh] [rbp-23h]
  char v16; // [rsp+3Eh] [rbp-22h]
  char v17; // [rsp+3Fh] [rbp-21h]
  _QWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF

  v13 = *(_DWORD *)(a1 + 1592);
  v15 = a6;
  v14 = a3;
  v12 = a2;
  v16 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  DpcRequestSummary = KeGetPcr()->Prcb.DpcRequestSummary;
  v18[1] = 16LL;
  v18[0] = &v12;
  v17 = DpcRequestSummary & 1 | (2 * ((a9 != 0) | (2 * (a10 & 3))));
  return EtwTraceKernelEvent((int)v18, 1, 0x20000200u, 1346, 5245442);
}
