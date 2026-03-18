/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00C9D94
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1C00C9D00 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00A382C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00ADC30 (-_FillEntry@CDS_JOURNAL@CCD_BTL@@CAXPEAU_ENTRY@12@AEBU_D3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00ADE24 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::ApplyCdsjToPathModality(
        struct CCD_TOPOLOGY *this,
        struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v10; // rax
  _QWORD v11[10]; // [rsp+20h] [rbp-68h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  memset((char *)&v11[2] + 4, 0, 60);
  v4 = BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v7 = v4;
  if ( v4 < 0
    || (CCD_BTL::CDS_JOURNAL::_FillEntry((struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v11, a2, v6),
        v8 = CCD_BTL::CDS_JOURNAL::_CommitEntry((const struct CCD_BTL::CDS_JOURNAL::_ENTRY *)v11, this),
        v7 = v8,
        v8 < 0) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v10[3] = v7;
    v10[4] = this;
    v10[5] = *((_QWORD *)this + 8);
    v10[6] = a2;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
  }
  return (unsigned int)v7;
}
