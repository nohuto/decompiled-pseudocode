/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005D684
 * Callers:
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C005DAA8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165104 (-WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165198 (-WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z.c)
 * Callees:
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005D724 (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall AllocateMonitorSetIdFromAdapterSource(struct _LUID *a1, unsigned int a2, struct _UNICODE_STRING *a3)
{
  unsigned __int64 v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int MonitorSetId; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int appended; // eax
  __int64 v17; // rax
  __int64 v18; // rax

  a3->Length = 0;
  v6 = 32770LL;
  if ( !is_mul_ok(0x4001uLL, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new[](v6, 0x63644356u, PagedPool);
  a3->Buffer = v7;
  if ( v7 )
  {
    a3->MaximumLength = -32766;
    MonitorSetId = CreateMonitorSetId(a1, a2, a3);
    v14 = MonitorSetId;
    if ( MonitorSetId < 0 || (appended = SortMonitorSetIdAndAppendHash(a3), v14 = appended, appended < 0) )
    {
      v18 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v18 + 24) = v14;
      WdLogEvent5_WdError(v18);
    }
    return (unsigned int)v14;
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v17 + 24) = 32770LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
