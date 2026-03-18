/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C000EE20
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C000ED30 (McGenControlCallbackV2.c)
 * Callees:
 *     Template_qxq @ 0x1C001DFB8 (Template_qxq.c)
 *     ?DxgkControlVSyncForLogging@@YAXE@Z @ 0x1C013F148 (-DxgkControlVSyncForLogging@@YAXE@Z.c)
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C013F164 (-DxgkDisableStablePowerState@@YAXXZ.c)
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C013F17C (-DxgkEnableClockCalibration@@YAXE@Z.c)
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C013F198 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C013F1B4 (-DxgkEnableStablePowerState@@YAXXZ.c)
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C013F1CC (-DxgkReportGlobalState@@YAXXZ.c)
 *     DpiControlEtwLogging @ 0x1C0166AD8 (DpiControlEtwLogging.c)
 */

void __fastcall DxgkEtwEnableCallback(int a1, char a2, int a3, int a4)
{
  __int64 v5; // rcx
  bool v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // cl

  if ( a1 == 2 && bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qxq(2, a2, a3, a4, qword_1C00467F0, a2);
    DxgkReportGlobalState();
    goto LABEL_43;
  }
  v5 = qword_1C00467F0;
  if ( qword_1C00467F0 == g_OldAnyKeywords )
    goto LABEL_17;
  if ( (g_OldAnyKeywords & 8) == 0 && (qword_1C00467F0 & 8) != 0 )
  {
    v9 = 1;
LABEL_28:
    DxgkControlVSyncForLogging(v9);
    v5 = qword_1C00467F0;
    goto LABEL_6;
  }
  if ( (g_OldAnyKeywords & 8) != 0 && (qword_1C00467F0 & 8) == 0 )
  {
    v9 = 0;
    goto LABEL_28;
  }
LABEL_6:
  v6 = (v5 & 0x1000) != 0 && (v5 & 0x2000) == 0;
  if ( (g_OldAnyKeywords & 0x1000) == 0 && (v5 & 0x1000) != 0 && v6 )
  {
    DxgkEnableStablePowerState();
LABEL_35:
    v5 = qword_1C00467F0;
    goto LABEL_11;
  }
  if ( (g_OldAnyKeywords & 0x1000) != 0 && (v5 & 0x1000) == 0 )
  {
    DxgkDisableStablePowerState();
    goto LABEL_35;
  }
LABEL_11:
  v7 = v5 & 0x3000;
  v8 = 1024LL;
  if ( (g_OldAnyKeywords & 0x400) == 0 && (v5 & 0x400) != 0 )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    if ( (g_OldAnyKeywords & 0x400) == 0 || (v5 & 0x400) != 0 )
      goto LABEL_14;
    v5 = 0LL;
  }
  LOBYTE(v8) = a2;
  DpiControlEtwLogging(v5, v7, v8);
  v5 = qword_1C00467F0;
LABEL_14:
  if ( (g_OldAnyKeywords & 0x4000) == 0 && (v5 & 0x4000) != 0 )
  {
    DxgkEnableFormattingBuffer(1);
    v10 = 1;
LABEL_42:
    DxgkEnableClockCalibration(v10);
LABEL_43:
    v5 = qword_1C00467F0;
    goto LABEL_17;
  }
  if ( (g_OldAnyKeywords & 0x4000) != 0 && (v5 & 0x4000) == 0 )
  {
    DxgkEnableFormattingBuffer(0);
    v10 = 0;
    goto LABEL_42;
  }
LABEL_17:
  if ( (v5 & 0x188ED7) == 0 || (bTracingEnabled = 1, (qword_1C00467F8 & 0xFFFFFFFFFFE77128uLL) != 0) )
    bTracingEnabled = 0;
  g_OldAnyKeywords = v5;
}
