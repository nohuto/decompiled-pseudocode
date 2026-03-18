/*
 * XREFs of ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01535AC
 * Callers:
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C01767FC (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0183414 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // di
  __int64 v23; // rcx
  CCD_BTL *v24; // rax
  int v25; // ebx
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  _QWORD v28[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v29; // [rsp+B0h] [rbp+40h] BYREF
  char v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  if ( !a1 || !a2 || !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 2167LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a1->NumModeArrayElements || a1->NumPathArrayElements )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 2168LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a1->PathsArray || a1->ModesArray )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 2169LL;
    WdLogEvent5_WdAssertion(v8);
  }
  LOBYTE(v28[0]) = 0;
  memset((char *)v28 + 4, 0, 0x2CuLL);
  v9 = *((unsigned int *)a3 + 34);
  HIDWORD(v28[0]) = v9;
  a1->NumPathArrayElements = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v9, 0x4E506456u);
  v28[1] = PoolWithTag;
  a1->PathsArray = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = v9;
LABEL_13:
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
  LODWORD(v28[2]) = 2 * v9;
  a1->NumModeArrayElements = 2 * v9;
  v17 = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)(2 * v9) << 6, 0x4E506456u);
  v28[3] = v17;
  a1->ModesArray = v17;
  if ( !v17 )
  {
    v15 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v15 + 24) = (unsigned int)(2 * v9);
    goto LABEL_13;
  }
  if ( (_DWORD)v9 )
    memset(a1->PathsArray, 0, 72 * v9);
  if ( 2 * (_DWORD)v9 )
    memset(a1->ModesArray, 0, (unsigned __int64)(unsigned int)(2 * v9) << 6);
  v22 = v30;
  v28[5] = v28[3];
  v28[4] = v28[1];
  LOBYTE(v28[0]) = 0;
  v29 = 0LL;
  v23 = (v30 != 0 ? 16 : 4640) | 0x80u;
  a1->SDCFlags = v23;
  v24 = CCD_BTL::Global(v23);
  v25 = CCD_BTL::ConvertVidPnToPathsModality(v24, a3, &v29);
  if ( v25 >= 0 )
  {
    v25 = ConvertPathModalityToDisplayConfig((__int64)v29, 0LL, 0LL, 0LL, 0, 0, (struct _QDC_CONTEXT *)v28);
    operator delete(v29);
    v26 = HIDWORD(v28[0]);
    if ( HIDWORD(v28[0]) )
    {
      v27 = (_DWORD *)(v28[1] + 68LL);
      do
      {
        *v27 |= 1u;
        if ( v22 )
        {
          *(v27 - 14) = -1;
          *(v27 - 9) = -1;
          *(v27 - 7) = 1;
          *((_QWORD *)v27 - 3) = 128LL;
          *((_QWORD *)v27 - 2) = 0LL;
        }
        v27 += 18;
        --v26;
      }
      while ( v26 );
    }
  }
  else
  {
    operator delete(v29);
  }
  return (unsigned int)v25;
}
