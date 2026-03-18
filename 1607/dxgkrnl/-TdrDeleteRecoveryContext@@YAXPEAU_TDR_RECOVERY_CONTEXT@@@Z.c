/*
 * XREFs of ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0166E7C
 * Callers:
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0166ED0 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0165954 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1C0166F88 (-TdrFreePool@@YAXPEAX@Z.c)
 */

void __fastcall TdrDeleteRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rcx
  CTDR_DUMP_BUFFER *v3; // rcx

  v2 = *((_QWORD *)a1 + 354);
  if ( v2 )
    WdDbgReportComplete(v2);
  v3 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
  if ( v3 )
    CTDR_DUMP_BUFFER::`scalar deleting destructor'(v3);
  TdrFreePool(*((void **)a1 + 355));
  TdrFreePool(*((void **)a1 + 358));
  TdrFreePool(a1);
}
