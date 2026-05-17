/*
 * XREFs of RtlpTpIoCallback @ 0x1800950E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     TppStartThreadData @ 0x180009D00 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x180009FC0 (RtlSetThreadSubProcessTag.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall RtlpTpIoCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(void **)(a2 + 152);
  if ( v4 )
    RtlSetThreadSubProcessTag(v4);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 160);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  TppStartThreadData(&v8, *(_QWORD *)(a2 - 8), a3, (__int64)NtCurrentTeb()->SubProcessTag);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a2 - 8))(*a4, *((_QWORD *)a4 + 1), a3);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStop(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  if ( *(_QWORD *)(a2 + 152) )
  {
    RtlSetThreadSubProcessTag(0LL);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  TppCompleteThreadData(v8);
}
