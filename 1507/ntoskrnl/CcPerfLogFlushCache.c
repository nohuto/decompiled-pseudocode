/*
 * XREFs of CcPerfLogFlushCache @ 0x140126F18
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushCache(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5, char a6, char a7)
{
  signed __int64 *v7; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG_PTR v14; // r9
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  int v17; // eax
  _QWORD *v18; // [rsp+30h] [rbp-40h] BYREF
  int v19; // [rsp+38h] [rbp-38h]
  int v20; // [rsp+3Ch] [rbp-34h]
  _QWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+5Ch] [rbp-14h]
  int v25; // [rsp+60h] [rbp-10h]

  if ( a2 )
  {
    v7 = (signed __int64 *)(a2 + 96);
    v14 = ObFastReferenceObject((signed __int64 *)(a2 + 96));
    if ( !v14 )
      v14 = CcSlowReferenceSharedCacheMapFileObject(a2, v12, v13, 0LL);
    v21[1] = *(_QWORD *)(v14 + 24);
    _m_prefetchw(v7);
    v15 = *v7;
    while ( (v14 ^ v15) < 0xF )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64(v7, v15 + 1, v15);
      if ( v16 == v15 )
        goto LABEL_7;
    }
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v14, 0x746C6644u);
LABEL_7:
    if ( a3 )
      v22 = *a3;
    else
      v22 = 0LL;
    v24 = *(_DWORD *)(a2 + 152);
    v21[0] = a1;
    v23 = a4;
    v17 = a5 != 0;
    v25 = v17;
    if ( a6 )
    {
      v17 |= 2u;
      v25 = v17;
    }
    if ( a7 )
      v25 = v17 | 4;
    v20 = 0;
    v18 = v21;
    v19 = 40;
    EtwTraceKernelEvent((int)&v18, 1, 0x80020000, 0x1609u, 4200706);
  }
}
