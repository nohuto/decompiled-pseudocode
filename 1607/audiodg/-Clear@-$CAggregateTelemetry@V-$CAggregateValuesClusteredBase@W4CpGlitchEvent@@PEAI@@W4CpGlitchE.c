/*
 * XREFs of ?Clear@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140014C90
 * Callers:
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140014A70 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 * Callees:
 *     ?Clear@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXXZ @ 0x1400172A0 (-Clear@-$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$06@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Clear(
        __int64 a1)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(__int64); // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::Clear )
      CAggregateValuesClusteredCounter<enum CpGlitchEvent,7>::Clear(v2);
    else
      v3(v2);
  }
  *(_BYTE *)(a1 + 16) = 0;
}
