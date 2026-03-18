/*
 * XREFs of ?UnmapTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C0063980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = a2;
    v7[4] = a3;
    v7[5] = a4;
  }
}
