/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0144900
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0143230 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0143D70 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0143F80 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144410 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01442CC (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C014480C (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144858 (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r10
  bool v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  if ( v2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 176) + 64LL);
    if ( *(_BYTE *)(v4 + 1479) || *(_BYTE *)(v4 + 1478) )
      return 0;
  }
  v6 = *((_QWORD *)a1 + 352);
  if ( !v6 || a2 )
  {
    TdrGetDbgOwnerTag(a1);
    TdrRetrieveSecondaryBucketingKey(a1, &v18);
    if ( v7 )
      v9 = *(_QWORD *)(v7 + 1992) == 0LL;
    else
      v9 = 0;
    if ( *((_DWORD *)a1 + 4) == 6 )
      v10 = (unsigned int)(*((_BYTE *)a1 + 2804) != 0) + 321;
    else
      v10 = 279LL;
    if ( v7 )
      v11 = *(_QWORD *)(v7 + 176);
    else
      v11 = 0LL;
    v12 = WdDbgReportRecreate(v11, v10, a1, v8, v18, *((_QWORD *)a1 + 349), v9, v6);
    *((_QWORD *)a1 + 352) = v12;
    if ( !v12 )
    {
      *((_DWORD *)a1 + 25) |= 0x80000000;
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = a1;
LABEL_18:
      WdLogEvent5_WdError(v14);
      return 0;
    }
    if ( !(unsigned __int8)WdDbgReportQueryInfo(v12, (char *)a1 + 112) )
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a1;
      WdLogEvent5_WdError(v16);
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
        v14 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v14 + 24) = a1;
        *(_QWORD *)(v14 + 32) = *((_QWORD *)a1 + 354);
        goto LABEL_18;
      }
    }
  }
  return 1;
}
