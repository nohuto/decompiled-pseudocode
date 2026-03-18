/*
 * XREFs of ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0063D9C
 * Callers:
 *     DxgkGetPathsModality @ 0x1C0062B00 (DxgkGetPathsModality.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00631C0 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0063D58 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00643E0 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveAllPaths(CCD_TOPOLOGY *this, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  CCD_BTL *v10; // rcx
  __int64 v12; // rax
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v13, 0);
  v9 = v4;
  if ( v4 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v12 + 24) = v9;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    CCD_BTL::Global(v6, v5, v7, v8);
    LODWORD(v9) = CCD_BTL::RetrieveAllPaths(v10, this, a2);
    if ( (int)v9 >= 0 )
    {
      LODWORD(v9) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v9 >= 0 )
        LODWORD(v9) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v13);
  return (unsigned int)v9;
}
