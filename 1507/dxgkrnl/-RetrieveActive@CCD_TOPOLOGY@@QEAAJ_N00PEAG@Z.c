/*
 * XREFs of ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00663CC
 * Callers:
 *     DxgkGetPathsModality @ 0x1C0062B00 (DxgkGetPathsModality.c)
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0062F18 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00644B0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00630A0 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0063D58 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00643E0 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveActive(
        CCD_TOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  bool v5; // si
  char v6; // bp
  CCD_BTL *v8; // rcx
  __int64 v9; // rbx
  int v11; // eax
  __int64 v12; // rax
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  v5 = a4;
  v6 = a2;
  if ( (_BYTE)a3
    || (v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v13, 0), v9 = v11, v11 >= 0) )
  {
    CCD_BTL::Global((__int64)this, a2, a3, a4);
    LODWORD(v9) = CCD_BTL::RetrieveActiveTopology(v8, v6, v5, this, (CCD_BTL *)a5);
    if ( (int)v9 >= 0 )
    {
      LODWORD(v9) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v9 >= 0 )
        LODWORD(v9) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v12 + 24) = v9;
    WdLogEvent5_WdError(v12);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v13);
  return (unsigned int)v9;
}
