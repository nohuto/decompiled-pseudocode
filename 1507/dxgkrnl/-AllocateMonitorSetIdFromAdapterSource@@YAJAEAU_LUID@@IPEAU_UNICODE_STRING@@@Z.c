/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005EEAC
 * Callers:
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C009F5A8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160D2C (-WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160DB8 (-WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z.c)
 * Callees:
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C005EF4C (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005F000 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall AllocateMonitorSetIdFromAdapterSource(struct _LUID *a1, unsigned int a2, struct _UNICODE_STRING *a3)
{
  unsigned __int64 v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rcx
  int MonitorSetId; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int appended; // eax
  __int64 v14; // rax
  __int64 v15; // rax

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
    v11 = MonitorSetId;
    if ( MonitorSetId < 0 || (appended = SortMonitorSetIdAndAppendHash(a3), v11 = appended, appended < 0) )
    {
      v15 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v15 + 24) = v11;
      WdLogEvent5_WdError(v15);
    }
    return (unsigned int)v11;
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v14 + 24) = 32770LL;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
}
