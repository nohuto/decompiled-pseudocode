/*
 * XREFs of RtlXRestore @ 0x140083A2C
 * Callers:
 *     KiRestoreProcessorState @ 0x1400837A8 (KiRestoreProcessorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140083914 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140083B40 (KeSaveExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x1400847BC (KxContextToKframes.c)
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 *     PspSetContext @ 0x1404FA330 (PspSetContext.c)
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
