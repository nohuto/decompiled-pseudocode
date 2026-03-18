/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017EF88
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0150298 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00646A0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C017EE60 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct _D3DKMT_GETPATHSMODALITY **a3,
        __int64 a4)
{
  unsigned __int16 v4; // bx
  __int64 v8; // rax
  unsigned __int16 v9; // si
  int v10; // eax
  SIZE_T v11; // r15
  struct _D3DKMT_GETPATHSMODALITY *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  int *v24; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v25; // [rsp+30h] [rbp-31h]
  int v26; // [rsp+38h] [rbp-29h] BYREF
  __int64 v27; // [rsp+40h] [rbp-21h]
  __int64 v28; // [rsp+48h] [rbp-19h]
  __int64 v29; // [rsp+50h] [rbp-11h]
  __int16 v30; // [rsp+58h] [rbp-9h]
  __int64 v31; // [rsp+60h] [rbp-1h]
  __int64 v32; // [rsp+68h] [rbp+7h]
  __int64 v33; // [rsp+70h] [rbp+Fh]
  struct _D3DKMT_GETPATHSMODALITY *v34; // [rsp+78h] [rbp+17h]
  bool v35; // [rsp+80h] [rbp+1Fh]
  int v36; // [rsp+84h] [rbp+23h]
  int v37; // [rsp+88h] [rbp+27h]

  v4 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_WORD *)a2 + 68);
  v10 = v9;
  if ( v9 <= 1u )
    v10 = 1;
  v11 = (unsigned int)(216 * (v10 - 1) + 264);
  v12 = (struct _D3DKMT_GETPATHSMODALITY *)operator new[](v11, 0x63644356u, PagedPool);
  *a3 = v12;
  if ( v12 )
  {
    memset(v12, 0, v11);
    *((_WORD *)*a3 + 11) = v9;
    if ( v9 )
    {
      v34 = *a3;
      v27 = 0LL;
      v28 = 0LL;
      v35 = v34 == 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v26 = 0;
      v29 = 0LL;
      v30 = 0;
      v33 = 0LL;
      v36 = 0;
      v37 = 1;
      v24 = &v26;
      v25 = 0;
      v20 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
              (CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v24,
              a2,
              v17,
              v18);
      v22 = v20;
      if ( v20 >= 0 )
      {
        if ( v34 )
          v4 = *((_WORD *)v34 + 10);
        if ( v4 < v25 )
          LODWORD(v22) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v26);
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v23[5] = v9;
        v23[3] = v22;
        v23[4] = a2;
        WdLogEvent5_WdError(v23);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v26);
      return (unsigned int)v22;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
      v19[3] = this;
      v19[4] = a2;
      v19[5] = a3;
      WdLogEvent5_WdDmmEvent(v19);
      return 0LL;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
    v14[5] = v9;
    v14[3] = v11;
    v14[4] = a2;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
}
