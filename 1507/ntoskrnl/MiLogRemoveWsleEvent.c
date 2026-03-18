/*
 * XREFs of MiLogRemoveWsleEvent @ 0x140213CAC
 * Callers:
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiRemoveWsle @ 0x1400AFB10 (MiRemoveWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiFillPageExtraInfo @ 0x140213B4C (MiFillPageExtraInfo.c)
 */

void *__fastcall MiLogRemoveWsleEvent(__int64 a1, int a2)
{
  unsigned __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v3 = 0LL;
  MiFillPageExtraInfo(&v3, a2, a1);
  v6 = 0;
  v4 = &v3;
  v5 = 8;
  return EtwTraceKernelEvent((int)&v4, 1, 0x28000000u, 0x283u, 289413890);
}
