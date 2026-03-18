/*
 * XREFs of DxgkCheckExclusiveOwnership @ 0x1C00DD930
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00DD968 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall DxgkCheckExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  unsigned __int8 v5; // bl
  __int64 v6; // r8

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2047);
  Global = DXGGLOBAL::GetGlobal(a1);
  v5 = DXGGLOBAL::CheckExclusiveOwnership(Global);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v6, 2047);
  return v5;
}
