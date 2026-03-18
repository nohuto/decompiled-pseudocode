/*
 * XREFs of DmmEscape @ 0x1C01A3850
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C01A13A4 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
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
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)a1 + 266);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = a1;
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  v9 = *(VIDPN_MGR **)(v6 + 88);
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
  v12 = (char *)operator new(0x2CuLL, 0x4E506456u, PagedPool);
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
        v16 = WdLogNewEntry5_WdError((unsigned int)(*a2 - 10));
        *(_QWORD *)(v16 + 24) = *a2;
        WdLogEvent5_WdError(v16);
        v15 = -1073741811;
        goto LABEL_22;
      }
      *(_DWORD *)v12 = a2[6];
      *(_OWORD *)(v12 + 4) = *(_OWORD *)(a2 + 7);
      *(_OWORD *)(v12 + 20) = *(_OWORD *)(a2 + 11);
      *(_QWORD *)(v12 + 36) = *(_QWORD *)(a2 + 15);
    }
LABEL_18:
    v17 = VIDPN_MGR::MapEscapeCodeToDiagInfoType((unsigned int)*a2);
    v18 = VIDPN_MGR::AcquireDiagInfo(v9, a2 + 6, *((_QWORD *)a2 + 1), v17, (int *)v12, (size_t *)a2 + 2);
    v15 = v18;
    if ( v18 == -2147483643 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v23 + 32) = *a2;
      WdLogEvent5_WdWarning(v23);
      v15 = 1075707914;
    }
    else if ( v18 >= 0 )
    {
      v24 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
      v15 = 0;
      *(_QWORD *)(v24 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v24 + 32) = *a2;
    }
    goto LABEL_22;
  }
  v14 = WdLogNewEntry5_WdLowResource(v13);
  *(_QWORD *)(v14 + 24) = 44LL;
  WdLogEvent5_WdLowResource(v14);
  v15 = -1073741801;
LABEL_22:
  operator delete(v12);
  return v15;
}
