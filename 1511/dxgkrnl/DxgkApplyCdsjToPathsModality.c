/*
 * XREFs of DxgkApplyCdsjToPathsModality @ 0x1C00C9D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00C9D94 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkApplyCdsjToPathsModality(__int64 *a1, struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h]
  __int64 v8; // [rsp+30h] [rbp-50h]
  __int64 v9; // [rsp+38h] [rbp-48h]
  __int16 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  bool v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v15 = v3 == 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v3;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  CCD_BTL::Global(0LL);
  v4 = CCD_BTL::CDS_JOURNAL::ApplyCdsjToPathModality((struct CCD_TOPOLOGY *)&v6, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v6);
  return v4;
}
