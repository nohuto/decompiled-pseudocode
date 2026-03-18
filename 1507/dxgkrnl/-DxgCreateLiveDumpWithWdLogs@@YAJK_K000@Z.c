/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0124038
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z @ 0x1C00B3C78 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z.c)
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C001E1A8 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rbp
  _DWORD *v8; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = 0;
  v4 = WdDbgReportCreate(0LL, a1, a2, 0LL, 0LL, 0LL);
  if ( v4 )
  {
    v7 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v8 = operator new[]((unsigned int)v7, 0x4B677844u, PagedPool);
    v10 = v8;
    if ( v8 )
    {
      v11 = TdrCollectBugcheckSecondaryDumpData(v8, v7, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v4, v10, v11) )
      {
        v13 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v13 + 24) = 31839LL;
        WdLogEvent5_WdError(v13);
        v2 = -1073741823;
      }
      operator delete(v10);
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v14 + 24) = v7;
      WdLogEvent5_WdLowResource(v14);
      v2 = -1073741801;
    }
    WdDbgReportComplete(v4);
    return v2;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = 31826LL;
    WdLogEvent5_WdError(v5);
    return 3221225473LL;
  }
}
