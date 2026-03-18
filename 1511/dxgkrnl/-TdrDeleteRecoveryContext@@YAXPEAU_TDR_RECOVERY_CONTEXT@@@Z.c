/*
 * XREFs of ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144198
 * Callers:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01441EC (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1C0144B20 (-Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0142CC8 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1C01442B0 (-TdrFreePool@@YAXPEAX@Z.c)
 */

void __fastcall TdrDeleteRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rcx
  CTDR_DUMP_BUFFER *v3; // rcx

  v2 = *((_QWORD *)a1 + 352);
  if ( v2 )
    WdDbgReportComplete(v2);
  v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 355);
  if ( v3 )
    CTDR_DUMP_BUFFER::`scalar deleting destructor'(v3);
  TdrFreePool(*((void **)a1 + 353));
  TdrFreePool(*((void **)a1 + 356));
  TdrFreePool(a1);
}
