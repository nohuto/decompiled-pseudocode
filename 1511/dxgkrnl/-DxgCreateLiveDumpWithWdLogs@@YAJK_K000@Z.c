/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0129F34
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C001E268 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v0 = 0;
  v2 = WdDbgReportCreate(0LL, 391LL, 1LL, 0LL, 0LL, 0LL);
  if ( v2 )
  {
    v5 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v6 = operator new[]((unsigned int)v5, 0x4B677844u, PagedPool);
    v11 = v6;
    if ( v6 )
    {
      v12 = TdrCollectBugcheckSecondaryDumpData(v6, v5, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v2, v11, v12) )
      {
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = 32519LL;
        WdLogEvent5_WdError(v14);
        v0 = -1073741823;
      }
      operator delete(v11);
    }
    else
    {
      v15 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
      *(_QWORD *)(v15 + 24) = v5;
      WdLogEvent5_WdLowResource(v15);
      v0 = -1073741801;
    }
    WdDbgReportComplete(v2);
    return v0;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v3 + 24) = 32506LL;
    WdLogEvent5_WdError(v3);
    return 3221225473LL;
  }
}
