/*
 * XREFs of NtQueryDebugFilterState @ 0x1400E6B14
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1400E69D8 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1401F780C (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  ULONG v2; // r8d

  v2 = ComponentId;
  if ( ComponentId >= 0x9B )
  {
    Level = 3;
    v2 = 101;
  }
  if ( Level <= 0x1F )
    Level = 1 << Level;
  return (Level & Kd_WIN2000_Mask) != 0 || (Level & *(_DWORD *)*(&KdComponentTable + v2)) != 0;
}
