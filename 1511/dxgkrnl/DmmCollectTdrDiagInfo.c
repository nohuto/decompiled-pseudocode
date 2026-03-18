/*
 * XREFs of DmmCollectTdrDiagInfo @ 0x1C0179A64
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0143D70 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  VIDPN_MGR *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax

  v2 = 0;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v5 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = a1;
    goto LABEL_3;
  }
  memset(a2, 0, 0x2000uLL);
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    if ( !*(_QWORD *)(v8 + 1984) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *(VIDPN_MGR **)(*(_QWORD *)(v8 + 1984) + 112LL);
    if ( v11 )
    {
      v13 = VIDPN_MGR::AcquireDiagInfo(v11, a2, 0x2000uLL, 1, 0LL, 0LL);
      if ( v13 == -2147483643 )
      {
        v18 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        *(_QWORD *)(v18 + 24) = 0x2000LL;
        WdLogEvent5_WdWarning(v18);
        return 2147483653LL;
      }
      else
      {
        if ( v13 < 0 )
          return (unsigned int)v13;
        return v2;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v12 + 24) = v8;
      WdLogEvent5_WdError(v12);
      return 3223192373LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
}
