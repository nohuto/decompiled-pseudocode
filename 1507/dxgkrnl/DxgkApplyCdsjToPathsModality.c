/*
 * XREFs of DxgkApplyCdsjToPathsModality @ 0x1C00B4480
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B4510 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkApplyCdsjToPathsModality(__int64 *a1, struct _D3DKMT_AUGMENT_CDSJ *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-50h]
  __int64 v11; // [rsp+38h] [rbp-48h]
  __int16 v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  bool v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+70h] [rbp-10h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *a1;
  v8 = 0;
  v9 = 0LL;
  v17 = v5 == 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = v5;
  v18 = 0;
  v19 = 1;
  CCD_BTL::Global(0LL, 0LL, a3, a4);
  v6 = CCD_BTL::CDS_JOURNAL::ApplyCdsjToPathModality((struct CCD_TOPOLOGY *)&v8, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v8);
  return v6;
}
