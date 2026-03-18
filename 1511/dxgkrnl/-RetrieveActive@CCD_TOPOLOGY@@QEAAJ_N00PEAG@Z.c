/*
 * XREFs of ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98
 * Callers:
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0060194 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00A2A8C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkGetPathsModality @ 0x1C00A6630 (DxgkGetPathsModality.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00C69B4 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00C9138 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006031C (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2334 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00A29BC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveActive(CCD_TOPOLOGY *this, char a2, char a3, bool a4, unsigned __int16 *a5)
{
  CCD_BTL *v8; // rcx
  __int64 v9; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  if ( a3
    || (v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v14, 0), v9 = v11, v11 >= 0) )
  {
    CCD_BTL::Global();
    LODWORD(v9) = CCD_BTL::RetrieveActiveTopology(v8, a2, a4, this, (CCD_BTL *)a5);
    if ( (int)v9 >= 0 )
    {
      LODWORD(v9) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v9 >= 0 )
        LODWORD(v9) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = v9;
    WdLogEvent5_WdError(v13);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v14);
  return (unsigned int)v9;
}
