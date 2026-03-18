/*
 * XREFs of ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0150298
 * Callers:
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C0171F7C (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C005FFDC (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017EF88 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DispConfigConvertFromVidPn(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct DXGADAPTER *a2,
        struct DMMVIDPN *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  PVOID PoolWithTag; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // di
  __int64 v20; // rcx
  CCD_BTL *v21; // rax
  int v22; // ebx
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  _QWORD v25[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v26; // [rsp+B0h] [rbp+40h] BYREF
  char v27; // [rsp+C8h] [rbp+58h]

  v27 = a4;
  if ( !a1 || !a2 || !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2066LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a1->NumModeArrayElements || a1->NumPathArrayElements )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 2067LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a1->PathsArray || a1->ModesArray )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 2068LL;
    WdLogEvent5_WdAssertion(v8);
  }
  LOBYTE(v25[0]) = 0;
  memset((char *)v25 + 4, 0, 0x2CuLL);
  v9 = *((unsigned int *)a3 + 34);
  HIDWORD(v25[0]) = v9;
  a1->NumPathArrayElements = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v9, 0x4E506456u);
  v25[1] = PoolWithTag;
  a1->PathsArray = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v12 + 24) = v9;
LABEL_13:
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
  LODWORD(v25[2]) = 2 * v9;
  a1->NumModeArrayElements = 2 * v9;
  v14 = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)(2 * v9) << 6, 0x4E506456u);
  v25[3] = v14;
  a1->ModesArray = v14;
  if ( !v14 )
  {
    v12 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v12 + 24) = (unsigned int)(2 * v9);
    goto LABEL_13;
  }
  if ( (_DWORD)v9 )
    memset(a1->PathsArray, 0, 72 * v9);
  if ( 2 * (_DWORD)v9 )
    memset(a1->ModesArray, 0, (unsigned __int64)(unsigned int)(2 * v9) << 6);
  v19 = v27;
  v25[5] = v25[3];
  v25[4] = v25[1];
  LOBYTE(v25[0]) = 0;
  v26 = 0LL;
  v20 = (v27 != 0 ? 16 : 4640) | 0x80u;
  a1->SDCFlags = v20;
  v21 = CCD_BTL::Global(v20, v15, v17, v18);
  v22 = CCD_BTL::ConvertVidPnToPathsModality(v21, a3, &v26);
  if ( v22 >= 0 )
  {
    v22 = ConvertPathModalityToDisplayConfig(v26, 0LL, 0LL, 0LL, 0, 0, (struct _QDC_CONTEXT *)v25);
    operator delete(v26);
    v23 = HIDWORD(v25[0]);
    if ( HIDWORD(v25[0]) )
    {
      v24 = (_DWORD *)(v25[1] + 68LL);
      do
      {
        *v24 |= 1u;
        if ( v19 )
        {
          *(v24 - 14) = -1;
          *(v24 - 9) = -1;
          *(v24 - 7) = 1;
          *((_QWORD *)v24 - 3) = 128LL;
          *((_QWORD *)v24 - 2) = 0LL;
        }
        v24 += 18;
        --v23;
      }
      while ( v23 );
    }
  }
  else
  {
    operator delete(v26);
  }
  return (unsigned int)v22;
}
