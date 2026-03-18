/*
 * XREFs of DmmCollectTdrDiagInfo @ 0x1C01754CC
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013D930 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectTdrDiagInfo(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  VIDPN_MGR *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax

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
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    if ( !*(_QWORD *)(v11 + 1976) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = *(VIDPN_MGR **)(*(_QWORD *)(v11 + 1976) + 88LL);
    if ( v14 )
    {
      v16 = VIDPN_MGR::AcquireDiagInfo(v14, a2, 0x2000uLL, 1LL, 0LL, 0LL);
      if ( v16 == -2147483643 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
        *(_QWORD *)(v21 + 24) = 0x2000LL;
        WdLogEvent5_WdWarning(v21);
        return 2147483653LL;
      }
      else
      {
        if ( v16 < 0 )
          return (unsigned int)v16;
        return v2;
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v15 + 24) = v11;
      WdLogEvent5_WdError(v15);
      return 3223192373LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdError(v12);
    return 3223191554LL;
  }
}
