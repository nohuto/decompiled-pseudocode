/*
 * XREFs of ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C0088F0C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 */

void __fastcall VIDMM_GLOBAL::EvictFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  __int64 i; // rbx
  __int64 v6; // rsi
  int v7; // [rsp+20h] [rbp-28h]

  v4 = (char *)a2 + 128;
  for ( i = *((_QWORD *)a2 + 17); (char *)i != v4; i = *(_QWORD *)(i + 8) )
  {
    v6 = **(_QWORD **)(i - 56);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = i - 56;
    if ( *(_DWORD *)(v6 + 128) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v7) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v6 + 136) + 48LL))(
        *(_QWORD *)(v6 + 136),
        v6,
        a3,
        0LL,
        v7,
        0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_p((__int64)this, &EventEvictAllocation, a3, v6);
      }
    }
  }
}
