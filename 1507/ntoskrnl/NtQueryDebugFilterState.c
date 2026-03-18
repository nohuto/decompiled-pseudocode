/*
 * XREFs of NtQueryDebugFilterState @ 0x14013204C
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140131F0C (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x14024663C (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  ULONG v2; // r8d

  v2 = ComponentId;
  if ( ComponentId >= 0x9A )
  {
    Level = 3;
    v2 = 101;
  }
  if ( Level <= 0x1F )
    Level = 1 << Level;
  return (Level & Kd_WIN2000_Mask) != 0 || (Level & *(_DWORD *)*(&KdComponentTable + v2)) != 0;
}
