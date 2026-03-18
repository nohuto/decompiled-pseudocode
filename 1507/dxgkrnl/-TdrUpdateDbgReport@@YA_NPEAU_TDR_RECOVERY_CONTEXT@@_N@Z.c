/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013E4B0
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013CE00 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013D930 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C013DB40 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DFD0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DE8C (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C013E3BC (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E408 (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 v2; // r9
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r10
  bool v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  if ( v2 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 176) + 64LL) + 1439LL) )
    return 0;
  v5 = *((_QWORD *)a1 + 352);
  if ( !v5 || a2 )
  {
    TdrGetDbgOwnerTag(a1);
    TdrRetrieveSecondaryBucketingKey(a1, &v17);
    if ( v6 )
      v8 = *(_QWORD *)(v6 + 1984) == 0LL;
    else
      v8 = 0;
    if ( *((_DWORD *)a1 + 4) == 6 )
      v9 = (unsigned int)(*((_BYTE *)a1 + 2804) != 0) + 321;
    else
      v9 = 279LL;
    if ( v6 )
      v10 = *(_QWORD *)(v6 + 176);
    else
      v10 = 0LL;
    v11 = WdDbgReportRecreate(v10, v9, a1, v7, v17, *((_QWORD *)a1 + 349), v8, v5);
    *((_QWORD *)a1 + 352) = v11;
    if ( !v11 )
    {
      *((_DWORD *)a1 + 25) |= 0x80000000;
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 24) = a1;
LABEL_17:
      WdLogEvent5_WdError(v13);
      return 0;
    }
    if ( !(unsigned __int8)WdDbgReportQueryInfo(v11, (char *)a1 + 112) )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = a1;
      WdLogEvent5_WdError(v15);
    }
  }
  if ( *((_QWORD *)a1 + 353) )
  {
    if ( *((_QWORD *)a1 + 354) )
    {
      TdrUpdateDbgBuffer(a1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(
                               *((_QWORD *)a1 + 352),
                               *((_QWORD *)a1 + 353),
                               *((unsigned int *)a1 + 708)) )
      {
        *((_DWORD *)a1 + 25) |= 0x80000000;
        v13 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v13 + 24) = a1;
        *(_QWORD *)(v13 + 32) = *((_QWORD *)a1 + 354);
        goto LABEL_17;
      }
    }
  }
  return 1;
}
