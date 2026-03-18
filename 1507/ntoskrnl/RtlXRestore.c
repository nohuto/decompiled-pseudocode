/*
 * XREFs of RtlXRestore @ 0x140126714
 * Callers:
 *     KxContextToKframes @ 0x140020C1C (KxContextToKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140124FE8 (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1401265C8 (KeRestoreExtendedAndSupervisorState.c)
 *     KiRestoreProcessorState @ 0x14020ADAC (KiRestoreProcessorState.c)
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     PspSetContext @ 0x14044E5F4 (PspSetContext.c)
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
