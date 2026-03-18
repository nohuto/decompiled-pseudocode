/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x14020DA64
 * Callers:
 *     KeAbEntryFree @ 0x140033200 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70 (ExReleaseCacheAwarePushLockSharedEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int16 v7; // [rsp+3Ch] [rbp-2Ch]
  __int16 v8; // [rsp+3Eh] [rbp-2Ah]
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 1584);
  v5 = a2;
  v6 = v3;
  v8 = 0;
  v7 = a3;
  v9[0] = &v5;
  v9[1] = 16LL;
  return EtwTraceKernelEvent((int)v9, 1, 0x20000200u, 0x543u, 5249538);
}
