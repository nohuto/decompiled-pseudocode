/*
 * XREFs of ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C00559A8
 * Callers:
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00558B0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VIDMM_SEGMENT::VerifyResidentLimit(VIDMM_SEGMENT *this)
{
  return ((*((_DWORD *)this + 14) & 0x1001) == 0 || *((_QWORD *)this + 27) <= *((_QWORD *)this + 25))
      && VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture <= *(_QWORD *)(*((_QWORD *)this + 1) + 6456LL);
}
