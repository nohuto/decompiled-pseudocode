/*
 * XREFs of DmmCollectTdrDiagInfo @ 0x1C01A34E4
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0166A50 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(__int64 a1, void *a2, size_t a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  VIDPN_MGR *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  size_t v20; // [rsp+50h] [rbp+18h] BYREF

  v20 = a3;
  v3 = 0;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  memset(a2, 0, 0x2000uLL);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
  {
    if ( !*(_QWORD *)(v9 + 2128) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = *(VIDPN_MGR **)(*(_QWORD *)(v9 + 2128) + 88LL);
    if ( v12 )
    {
      v20 = 0LL;
      v14 = VIDPN_MGR::AcquireDiagInfo(v12, a2, 0x2000uLL, 1, 0LL, &v20);
      if ( v14 == -2147483643 )
      {
        v19 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        *(_QWORD *)(v19 + 24) = 0x2000LL;
        *(_QWORD *)(v19 + 32) = v20;
        WdLogEvent5_WdWarning(v19);
        return 2147483653LL;
      }
      else
      {
        if ( v14 < 0 )
          return (unsigned int)v14;
        return v3;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v13 + 24) = v9;
      WdLogEvent5_WdError(v13);
      return 3223192373LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
}
