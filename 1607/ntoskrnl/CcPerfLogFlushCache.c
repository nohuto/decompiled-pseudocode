/*
 * XREFs of CcPerfLogFlushCache @ 0x1400A9064
 * Callers:
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushCache(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5, char a6, char a7)
{
  __int64 v11; // rax
  int v12; // eax
  _QWORD *v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h]
  int v15; // [rsp+3Ch] [rbp-34h]
  _QWORD v16[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+60h] [rbp-10h]

  if ( a2 )
  {
    v11 = CcReferenceSharedCacheMapFileObject(a2, a2, a3);
    v16[1] = *(_QWORD *)(v11 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v11);
    if ( a3 )
      v17 = *a3;
    else
      v17 = 0LL;
    v19 = *(_DWORD *)(a2 + 152);
    v16[0] = a1;
    v18 = a4;
    v12 = a5 != 0;
    v20 = v12;
    if ( a6 )
    {
      v12 |= 2u;
      v20 = v12;
    }
    if ( a7 )
      v20 = v12 | 4;
    v15 = 0;
    v13 = v16;
    v14 = 40;
    EtwTraceKernelEvent((int)&v13, 1, 0x80020000, 5641, 4200706);
  }
}
