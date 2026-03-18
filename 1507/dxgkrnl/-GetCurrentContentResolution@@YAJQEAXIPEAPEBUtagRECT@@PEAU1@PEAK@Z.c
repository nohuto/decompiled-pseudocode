/*
 * XREFs of ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00AC500
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall GetCurrentContentResolution(
        DXGADAPTER *a1,
        unsigned int a2,
        const struct tagRECT **a3,
        struct tagRECT *a4,
        unsigned int *a5)
{
  __int64 v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct tagRECT v16; // xmm0
  const struct tagRECT *v17; // rax
  unsigned int v18; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v20 + 24) = 1070LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v13 = *((_QWORD *)a1 + 247);
  v14 = *(_QWORD *)(v13 + 112) + 1008 * v6;
  if ( !v14 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13, v9, v11, v12);
    *(_QWORD *)(v21 + 24) = 1073LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v15 = *(_QWORD *)(v14 + 48);
  if ( v15 )
  {
    v16 = *(struct tagRECT *)(v14 + 652);
    v17 = (const struct tagRECT *)(v15 + 24);
    v18 = *(_DWORD *)(v15 + 40);
    *a3 = v17;
    *a4 = v16;
    *a5 = v18;
    return 0LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v22 + 24) = v14;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
}
