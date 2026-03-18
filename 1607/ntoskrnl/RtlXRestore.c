/*
 * XREFs of RtlXRestore @ 0x140082DAC
 * Callers:
 *     KxContextToKframes @ 0x140081D84 (KxContextToKframes.c)
 *     KiRestoreProcessorState @ 0x140082B28 (KiRestoreProcessorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140082C94 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140082EC0 (KeSaveExtendedAndSupervisorState.c)
 *     KiParkUmsThread @ 0x1401DC264 (KiParkUmsThread.c)
 *     PspSetContext @ 0x140516F40 (PspSetContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlXRestore(__int64 a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 result; // rax

  if ( *(__int64 *)(a1 + 520) >= 0 && (a2 & 6) == 4 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = _mm_getcsr();
    result = a2;
    _xrstor((void *)a1, a2);
    *(_DWORD *)(a1 + 24) = v2;
  }
  else
  {
    result = a2;
    _xrstor((void *)a1, a2);
  }
  return result;
}
