/*
 * XREFs of CcPerfLogFlushSection @ 0x1401288B4
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushSection(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  signed __int64 *v5; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR v13; // r10
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  _QWORD *v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+38h] [rbp-50h]
  int v18; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]
  int v21; // [rsp+58h] [rbp-30h]
  int v22; // [rsp+5Ch] [rbp-2Ch]

  if ( a2 )
  {
    v5 = (signed __int64 *)(a2 + 96);
    v13 = ObFastReferenceObject((signed __int64 *)(a2 + 96));
    if ( !v13 )
      v13 = CcSlowReferenceSharedCacheMapFileObject(a2, v10, v11, v12);
    v19[1] = *(_QWORD *)(v13 + 24);
    _m_prefetchw(v5);
    v14 = *v5;
    while ( (v13 ^ v14) < 0xF )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64(v5, v14 + 1, v14);
      if ( v15 == v14 )
        goto LABEL_7;
    }
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v13, 0x746C6644u);
LABEL_7:
    if ( a3 )
      v20 = *a3;
    else
      v20 = 0LL;
    v18 = 0;
    v22 = a5;
    v19[0] = a1;
    v16 = v19;
    v21 = a4;
    v17 = 32;
    EtwTraceKernelEvent((int)&v16, 1, 0x80020000, 0x160Au, 4200706);
  }
}
