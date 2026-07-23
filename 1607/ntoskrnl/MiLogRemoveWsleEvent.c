/*
 * XREFs of MiLogRemoveWsleEvent @ 0x1401E2800
 * Callers:
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiFillPageExtraInfo @ 0x1401E26A0 (MiFillPageExtraInfo.c)
 */

__int64 __fastcall MiLogRemoveWsleEvent(__int64 a1, int a2)
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
  return EtwTraceKernelEvent((int)&v4, 1, 0x28000000u, 643, 289413890);
}
