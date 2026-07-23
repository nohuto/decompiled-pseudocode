/*
 * XREFs of EtwpCancelMemoryPreservation @ 0x1406A9D74
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     EtwpKsrCallback @ 0x1406A9EBC (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA840 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     KsrFreePersistedMemoryBlock_0 @ 0x1400012A8 (KsrFreePersistedMemoryBlock_0.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCancelMemoryPreservation(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 896);
  if ( *(_BYTE *)(v1 + 33) )
  {
    KsrFreePersistedMemoryBlock_0();
    v2 = *(void **)(v1 + 8);
    *(_QWORD *)v1 = 0LL;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    *(_BYTE *)(v1 + 33) = 0;
  }
}
