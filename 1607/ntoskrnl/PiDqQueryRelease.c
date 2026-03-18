/*
 * XREFs of PiDqQueryRelease @ 0x14048C588
 * Callers:
 *     PiDqDispatch @ 0x14048B160 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14048CAD8 (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     Template_p @ 0x1401CE864 (Template_p.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     PiDqQueryFreeActiveData @ 0x14048CA74 (PiDqQueryFreeActiveData.c)
 */

void __fastcall PiDqQueryRelease(__int64 a1)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 212), 0xFFFFFFFF) == 1 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) != 0 )
      Template_p(a1, &KMPnPEvt_DevQuery_QueryStop, *(const GUID **)(a1 + 24), a1);
    PiDqQueryFreeActiveData(a1);
    v2 = *(void **)(a1 + 24);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *(_QWORD *)(a1 + 16) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a1 + 32));
    ExFreePoolWithTag((PVOID)a1, 0x58706E50u);
  }
}
