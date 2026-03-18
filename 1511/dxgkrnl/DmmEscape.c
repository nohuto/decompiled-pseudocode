/*
 * XREFs of DmmEscape @ 0x1C0179F44
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C01779D4 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(DXGADAPTER *a1, int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  VIDPN_MGR *v9; // rbp
  __int64 v10; // rax
  int v11; // eax
  char *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)a1 + 248);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = a1;
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  v9 = *(VIDPN_MGR **)(v6 + 112);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192373LL;
  }
  v11 = *a2;
  v12 = 0LL;
  if ( *a2 > 0 && (v11 <= 9 || (unsigned int)(v11 - 12) <= 2) )
    goto LABEL_18;
  v12 = (char *)operator new[](0x2CuLL, 0x4E506456u, PagedPool);
  if ( v12 )
  {
    operator delete(0LL);
    if ( *a2 == 10 )
    {
      *(_DWORD *)v12 = a2[6];
    }
    else
    {
      if ( *a2 != 11 )
      {
        v19 = WdLogNewEntry5_WdError((unsigned int)(*a2 - 10));
        *(_QWORD *)(v19 + 24) = *a2;
        WdLogEvent5_WdError(v19);
        v18 = -1073741811;
        goto LABEL_22;
      }
      *(_DWORD *)v12 = a2[6];
      *(_OWORD *)(v12 + 4) = *(_OWORD *)(a2 + 7);
      *(_OWORD *)(v12 + 20) = *(_OWORD *)(a2 + 11);
      *(_QWORD *)(v12 + 36) = *(_QWORD *)(a2 + 15);
    }
LABEL_18:
    v20 = VIDPN_MGR::MapEscapeCodeToDiagInfoType((unsigned int)*a2);
    v21 = VIDPN_MGR::AcquireDiagInfo(v9, a2 + 6, *((_QWORD *)a2 + 1), v20, (int *)v12, (size_t *)a2 + 2);
    v18 = v21;
    if ( v21 == -2147483643 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v26 + 32) = *a2;
      WdLogEvent5_WdWarning(v26);
      v18 = 1075707914;
    }
    else if ( v21 >= 0 )
    {
      v27 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      v18 = 0;
      *(_QWORD *)(v27 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v27 + 32) = *a2;
    }
    goto LABEL_22;
  }
  v17 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
  *(_QWORD *)(v17 + 24) = 44LL;
  WdLogEvent5_WdLowResource(v17);
  v18 = -1073741801;
LABEL_22:
  operator delete(v12);
  return v18;
}
