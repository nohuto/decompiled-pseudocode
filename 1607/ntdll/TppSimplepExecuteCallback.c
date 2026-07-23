/*
 * XREFs of TppSimplepExecuteCallback @ 0x180081160
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18003B324 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B360 (TppStartThreadData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TppSimplepExecuteCallback(_DWORD *Instance, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)(a2 - 200);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v2[18], a2, v2[10], v2[11], v2[13]);
  if ( (unsigned int)TppWorkCallbackPrologRelease(Instance, (__int64)v2, 1) )
  {
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(v2[18], a2, v2[10], v2[11], v2[13]);
    TppStartThreadData(&v5, v2[10], v2[11], v2[13]);
    ((void (__fastcall *)(_DWORD *, __int64))v2[10])(Instance, v2[11]);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(v2[18], a2, v2[10], v2[11], v2[13]);
    TppCompleteThreadData(v5);
  }
}
