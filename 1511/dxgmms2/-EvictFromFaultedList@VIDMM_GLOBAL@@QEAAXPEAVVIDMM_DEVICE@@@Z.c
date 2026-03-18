/*
 * XREFs of ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C007AB74
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 */

void __fastcall VIDMM_GLOBAL::EvictFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2, __int64 a3)
{
  char *v3; // rdi
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-28h]

  v3 = (char *)a2 + 120;
  for ( i = *((_QWORD *)a2 + 16); (char *)i != v3; i = *(_QWORD *)(i + 8) )
  {
    v5 = *(__int64 **)(i - 56);
    v6 = *v5;
    if ( *(_DWORD *)(*v5 + 120) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v8) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v6 + 128) + 48LL))(
        *(_QWORD *)(v6 + 128),
        v6,
        a3,
        0LL,
        v8,
        0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_p(v7, &EventEvictAllocation, a3, v6);
      }
    }
  }
}
