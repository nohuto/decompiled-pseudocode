/*
 * XREFs of NtQueryDebugFilterState @ 0x140084E70
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140084D34 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1402111DC (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  ULONG v2; // r8d

  v2 = ComponentId;
  if ( ComponentId >= 0x9C )
  {
    Level = 3;
    v2 = 101;
  }
  if ( Level <= 0x1F )
    Level = 1 << Level;
  return (Level & Kd_WIN2000_Mask) != 0 || (Level & *(_DWORD *)*(&KdComponentTable + v2)) != 0;
}
