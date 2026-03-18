/*
 * XREFs of ?SystemMemorySegment@VIDMM_SEGMENT@@QEBAEXZ @ 0x1C00104AC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::SystemMemorySegment(VIDMM_SEGMENT *this)
{
  return (*((_DWORD *)this + 14) & 0x1001) != 0;
}
