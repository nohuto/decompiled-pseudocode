/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x140225734
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140013520 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbEntryFree @ 0x14002BFB0 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1592);
  v5 = a2;
  v6 = v3;
  v7 = a3;
  v8 = &v5;
  v10 = 0;
  v9 = 16;
  return EtwTraceKernelEvent((int)&v8, 1, 0x20000200u, 1347, 5249538);
}
