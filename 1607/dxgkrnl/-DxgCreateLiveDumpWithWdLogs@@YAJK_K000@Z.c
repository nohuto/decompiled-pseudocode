/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     DpiFdoHandleDevicePower @ 0x1C00DFFA0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1C00F8A00 (DpiFdoHandleStartDevice.c)
 *     DpiInitializeEx @ 0x1C00F9FF4 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00FB6D8 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0023378 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = 0;
  v7 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5);
  if ( v7 )
  {
    v10 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v11 = operator new((unsigned int)v10, 0x4B677844u, PagedPool);
    v13 = v11;
    if ( v11 )
    {
      v14 = TdrCollectBugcheckSecondaryDumpData(v11, v10, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v7, v13, v14) )
      {
        v16 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v16 + 24) = 7817LL;
        WdLogEvent5_WdError(v16);
        v5 = -1073741823;
      }
      operator delete(v13);
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v17 + 24) = v10;
      WdLogEvent5_WdLowResource(v17);
      v5 = -1073741801;
    }
    WdDbgReportComplete(v7);
    return v5;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 7804LL;
    WdLogEvent5_WdError(v8);
    return 3221225473LL;
  }
}
