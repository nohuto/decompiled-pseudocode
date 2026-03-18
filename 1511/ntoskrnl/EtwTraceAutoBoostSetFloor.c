/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x14020DAD8
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x140032408 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        int a7,
        int a8)
{
  char DpcRequestSummary; // al
  char v9; // cl
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+38h] [rbp-28h]
  char v13; // [rsp+3Ch] [rbp-24h]
  char v14; // [rsp+3Dh] [rbp-23h]
  char v15; // [rsp+3Eh] [rbp-22h]
  char v16; // [rsp+3Fh] [rbp-21h]
  _QWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF

  v12 = *(_DWORD *)(a1 + 1584);
  v14 = a5;
  v13 = a3;
  v15 = (16 * a6) | a4 & 0xF;
  v11 = a2;
  DpcRequestSummary = KeGetPcr()->Prcb.DpcRequestSummary;
  v17[1] = 16LL;
  v9 = (DpcRequestSummary & 1 ^ (2 * (a7 != 0))) & 2 ^ DpcRequestSummary & 1;
  v16 = (v9 ^ (4 * (a8 != 0))) & 4 ^ v9;
  v17[0] = &v11;
  return EtwTraceKernelEvent((int)v17, 1, 0x20000200u, 0x542u, 5245442);
}
