/*
 * XREFs of RtlXRestore @ 0x1400EAC88
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x140022478 (KeSaveExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x14002DEA0 (KxContextToKframes.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1400EAB70 (KeRestoreExtendedAndSupervisorState.c)
 *     KiRestoreProcessorState @ 0x1401CBE58 (KiRestoreProcessorState.c)
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     PspSetContext @ 0x1403EEEEC (PspSetContext.c)
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
