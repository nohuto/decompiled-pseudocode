/*
 * XREFs of ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C017862C
 * Callers:
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A00B0 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00C06E0 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01ACB90 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DispConfigConvertFromVidPn(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct DXGADAPTER *a2,
        struct DMMVIDPN *a3,
        char a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  PVOID PoolWithTag; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  PVOID v14; // rax
  __int64 v15; // rcx
  char v16; // di
  __int64 v17; // rcx
  CCD_BTL *v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  _QWORD v22[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v23; // [rsp+B0h] [rbp+40h] BYREF
  char v24; // [rsp+C8h] [rbp+58h]

  v24 = a4;
  if ( !a1 || !a2 || !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 2193LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a1->NumModeArrayElements || a1->NumPathArrayElements )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 2194LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a1->PathsArray || a1->ModesArray )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 2195LL;
    WdLogEvent5_WdAssertion(v8);
  }
  LOBYTE(v22[0]) = 0;
  memset((char *)v22 + 4, 0, 0x2CuLL);
  v9 = *((unsigned int *)a3 + 34);
  HIDWORD(v22[0]) = v9;
  a1->NumPathArrayElements = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v9, 0x4E506456u);
  v22[1] = PoolWithTag;
  a1->PathsArray = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v12 + 24) = v9;
LABEL_13:
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
  LODWORD(v22[2]) = 2 * v9;
  a1->NumModeArrayElements = 2 * v9;
  v14 = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)(2 * v9) << 6, 0x4E506456u);
  v22[3] = v14;
  a1->ModesArray = v14;
  if ( !v14 )
  {
    v12 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v12 + 24) = (unsigned int)(2 * v9);
    goto LABEL_13;
  }
  if ( (_DWORD)v9 )
    memset(a1->PathsArray, 0, 72 * v9);
  if ( 2 * (_DWORD)v9 )
    memset(a1->ModesArray, 0, (unsigned __int64)(unsigned int)(2 * v9) << 6);
  v16 = v24;
  v22[5] = v22[3];
  v22[4] = v22[1];
  LOBYTE(v22[0]) = 0;
  v23 = 0LL;
  v17 = (v24 != 0 ? 16 : 4640) | 0x80u;
  a1->SDCFlags = v17;
  v18 = CCD_BTL::Global(v17);
  v19 = CCD_BTL::ConvertVidPnToPathsModality(v18, a3, &v23);
  if ( v19 >= 0 )
  {
    v19 = ConvertPathModalityToDisplayConfig((__int64)v23, 0LL, 0LL, 0LL, 0, 0, (struct _QDC_CONTEXT *)v22);
    operator delete(v23);
    v20 = HIDWORD(v22[0]);
    if ( HIDWORD(v22[0]) )
    {
      v21 = (_DWORD *)(v22[1] + 68LL);
      do
      {
        *v21 |= 1u;
        if ( v16 )
        {
          *(v21 - 14) = -1;
          *(v21 - 9) = -1;
          *(v21 - 7) = 1;
          *((_QWORD *)v21 - 3) = 128LL;
          *((_QWORD *)v21 - 2) = 0LL;
        }
        v21 += 18;
        --v20;
      }
      while ( v20 );
    }
  }
  else
  {
    operator delete(v23);
  }
  return (unsigned int)v19;
}
