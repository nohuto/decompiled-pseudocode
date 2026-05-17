/*
 * XREFs of RtlpHpVirtGetProcessHeap @ 0x1800EAC9C
 * Callers:
 *     RtlLockHeap @ 0x180027440 (RtlLockHeap.c)
 *     RtlpHpVirtAllocateHeap @ 0x1800EAA94 (RtlpHpVirtAllocateHeap.c)
 *     RtlpHpVirtUnlockHeap @ 0x1800EBCBC (RtlpHpVirtUnlockHeap.c)
 *     RtlpHpVirtValidateHeap @ 0x1800EBD20 (RtlpHpVirtValidateHeap.c)
 * Callees:
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 */

void *__fastcall RtlpHpVirtGetProcessHeap(unsigned int a1)
{
  _GUID *p_EffectiveContainerId; // rcx
  __int64 v3; // rax
  void *result; // rax

  p_EffectiveContainerId = &NtCurrentTeb()->EffectiveContainerId;
  v3 = *(_QWORD *)&p_EffectiveContainerId->Data1 - RtlpHpNullGUID;
  if ( *(_QWORD *)&p_EffectiveContainerId->Data1 == RtlpHpNullGUID )
    v3 = *(_QWORD *)p_EffectiveContainerId->Data4 - qword_1801475E0;
  if ( !v3 )
    return NtCurrentPeb()->ProcessHeap;
  result = (void *)RtlpHpVirtHeapTableFindOrCreateHeap(p_EffectiveContainerId, a1);
  if ( !result && (a1 & 1) == 0 )
    _InterlockedIncrement(&dword_18014485C);
  return result;
}
