/*
 * XREFs of CcPerfLogFlushSection @ 0x1400AAA58
 * Callers:
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushSection(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v9; // rax
  _QWORD *v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-40h]
  int v12; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  if ( a2 )
  {
    v9 = CcReferenceSharedCacheMapFileObject(a2, a2, a3);
    v13[1] = *(_QWORD *)(v9 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v9);
    if ( a3 )
      v14 = *a3;
    else
      v14 = 0LL;
    v12 = 0;
    v16 = a5;
    v13[0] = a1;
    v10 = v13;
    v15 = a4;
    v11 = 32;
    EtwTraceKernelEvent((int)&v10, 1, 0x80020000, 5642, 4200706);
  }
}
