/*
 * XREFs of ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C00642BC
 * Callers:
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0064D4C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004BA58 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

char __fastcall VIDMM_SEGMENT::VerifyResidentLimit(VIDMM_GLOBAL **this, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  _QWORD *v7; // rax

  if ( ((_DWORD)this[7] & 0x1001) == 0 || this[27] <= this[25] )
    return VIDMM_GLOBAL::VerifyGlobalResidentLimit(this[1], a2, a3, a4) != 0;
  v5 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = this;
    v7[4] = this[27];
    v7[5] = this[25];
    v7[6] = *((_QWORD *)this[1] + 807);
    v7[7] = VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture;
  }
  return v5;
}
