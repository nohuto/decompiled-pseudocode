/*
 * XREFs of DxgkCheckExclusiveOwnership @ 0x1C00B2FA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C00B2FD8 (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall DxgkCheckExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  unsigned __int8 v6; // bl
  __int64 v7; // r8

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2047);
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  v6 = DXGGLOBAL::CheckExclusiveOwnership(Global);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v5, &EventProfilerExit, v7, 2047);
  return v6;
}
