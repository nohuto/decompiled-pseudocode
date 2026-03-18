/*
 * XREFs of ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004BA58
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C00642BC (-VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::VerifyGlobalResidentLimit(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  if ( VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture <= *((_QWORD *)this + 807) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 807);
    *(_QWORD *)(v6 + 32) = VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture;
  }
  return 0;
}
