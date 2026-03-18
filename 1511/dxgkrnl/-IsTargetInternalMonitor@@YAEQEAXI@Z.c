/*
 * XREFs of ?IsTargetInternalMonitor@@YAEQEAXI@Z @ 0x1C00ABDB0
 * Callers:
 *     ?SourceConnectedToInternalMonitor@@YAEPEBU_DXGDMM_INTERFACE@@QEAXI@Z @ 0x1C00ABE0C (-SourceConnectedToInternalMonitor@@YAEPEBU_DXGDMM_INTERFACE@@QEAXI@Z.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 */

bool __fastcall IsTargetInternalMonitor(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rdi
  char v4; // bl
  int VideoOutputTechnology; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  _QWORD *v9; // rax
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v10 = -2;
  v4 = 0;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(a1, a2, &v10, 0LL);
  v7 = VideoOutputTechnology;
  if ( VideoOutputTechnology >= 0 )
    return IsInternalVideoOutput(v10);
  v9 = (_QWORD *)WdLogNewEntry5_WdError(v6);
  v9[3] = a1;
  v9[4] = v2;
  v9[5] = v7;
  WdLogEvent5_WdError(v9);
  return v4;
}
