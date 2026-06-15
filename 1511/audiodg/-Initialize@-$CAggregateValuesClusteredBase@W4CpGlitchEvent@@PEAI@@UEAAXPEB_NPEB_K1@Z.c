/*
 * XREFs of ?Initialize@?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z @ 0x140017CD0
 * Callers:
 *     ??0?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@_K11@Z @ 0x140013D20 (--0-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClus.c)
 * Callees:
 *     <none>
 */

void __fastcall CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>::Initialize(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a4;
}
