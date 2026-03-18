/*
 * XREFs of ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00A2378
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00A6630 (DxgkGetPathsModality.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006043C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2334 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00A29BC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveAllPaths(CCD_TOPOLOGY *this, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  CCD_BTL *v7; // rcx
  __int64 v9; // rax
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v10, 0);
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = v6;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    CCD_BTL::Global();
    LODWORD(v6) = CCD_BTL::RetrieveAllPaths(v7, this, a2);
    if ( (int)v6 >= 0 )
    {
      LODWORD(v6) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v6 >= 0 )
        LODWORD(v6) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v10);
  return (unsigned int)v6;
}
