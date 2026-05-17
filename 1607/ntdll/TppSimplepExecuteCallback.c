/*
 * XREFs of TppSimplepExecuteCallback @ 0x180081170
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18003B334 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B370 (TppStartThreadData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TppSimplepExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = (__int64 *)(a2 - 200);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v4[18], a2, v4[10], v4[11], v4[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(a1, (__int64)v4, 1, a4) )
  {
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(v4[18], a2, v4[10], v4[11], v4[13]);
    TppStartThreadData(&v7, v4[10], v4[11], v4[13]);
    ((void (__fastcall *)(__int64, __int64))v4[10])(a1, v4[11]);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(v4[18], a2, v4[10], v4[11], v4[13]);
    TppCompleteThreadData(v7);
  }
}
