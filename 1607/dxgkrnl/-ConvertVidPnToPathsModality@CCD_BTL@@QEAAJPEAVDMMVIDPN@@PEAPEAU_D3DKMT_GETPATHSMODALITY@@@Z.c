/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01ACB90
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C017862C (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008AFEC (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01ACA68 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct _D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rax
  unsigned __int16 v8; // si
  int v9; // eax
  SIZE_T v10; // r15
  struct _D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // rax
  int *v21; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v22; // [rsp+30h] [rbp-31h]
  int v23; // [rsp+38h] [rbp-29h] BYREF
  __int64 v24; // [rsp+40h] [rbp-21h]
  __int64 v25; // [rsp+48h] [rbp-19h]
  __int64 v26; // [rsp+50h] [rbp-11h]
  __int16 v27; // [rsp+58h] [rbp-9h]
  __int64 v28; // [rsp+60h] [rbp-1h]
  __int64 v29; // [rsp+68h] [rbp+7h]
  __int64 v30; // [rsp+70h] [rbp+Fh]
  _WORD *v31; // [rsp+78h] [rbp+17h]
  bool v32; // [rsp+80h] [rbp+1Fh]
  int v33; // [rsp+84h] [rbp+23h]
  int v34; // [rsp+88h] [rbp+27h]
  int v35; // [rsp+8Ch] [rbp+2Bh]

  v3 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_WORD *)a2 + 68);
  v9 = v8;
  if ( v8 <= 1u )
    v9 = 1;
  v10 = (unsigned int)(216 * (v9 - 1) + 264);
  v11 = (struct _D3DKMT_GETPATHSMODALITY *)operator new(v10, 0x63644356u, PagedPool);
  *a3 = v11;
  if ( v11 )
  {
    memset(v11, 0, v10);
    *((_WORD *)*a3 + 11) = v8;
    if ( v8 )
    {
      v31 = *a3;
      v24 = 0LL;
      v25 = 0LL;
      v32 = v31 == 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v23 = 0;
      v26 = 0LL;
      v27 = 0;
      v30 = 0LL;
      v33 = 0;
      v34 = 1;
      v35 = 0;
      v21 = &v23;
      v22 = 0;
      v17 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v21, a2);
      v19 = v17;
      if ( v17 >= 0 )
      {
        if ( v31 )
          v3 = v31[10];
        if ( v3 < v22 )
          LODWORD(v19) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v23);
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v20[5] = v8;
        v20[3] = v19;
        v20[4] = a2;
        WdLogEvent5_WdError(v20);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v23);
      return (unsigned int)v19;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v15);
      v16[3] = this;
      v16[4] = a2;
      v16[5] = a3;
      WdLogEvent5_WdDmmEvent(v16);
      return 0LL;
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v13[5] = v8;
    v13[3] = v10;
    v13[4] = a2;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
}
