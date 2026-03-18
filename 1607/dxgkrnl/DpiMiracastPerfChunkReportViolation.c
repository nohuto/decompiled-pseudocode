/*
 * XREFs of DpiMiracastPerfChunkReportViolation @ 0x1C00303F0
 * Callers:
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0030AA4 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0030D34 (DpiMiracastPerfHandleChunkSent.c)
 * Callees:
 *     DpiMiracastPerfResetPerfTrack @ 0x1C0031038 (DpiMiracastPerfResetPerfTrack.c)
 *     Template_xqqq @ 0x1C00313B4 (Template_xqqq.c)
 */

__int64 __fastcall DpiMiracastPerfChunkReportViolation(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)WdLogNewEntry5_WdError(a1);
  v6[4] = DpiMiracastPerfChunkReportViolation;
  v6[3] = retaddr;
  v6[5] = a1;
  v6[6] = v3;
  WdLogEvent5_WdError(v6);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_xqqq(v8, v7, v9, *(_QWORD *)(a1 + 96), *a2, (unsigned __int16)WORD2(*(_QWORD *)a2) >> 8, v3);
  if ( *(_BYTE *)(a1 + 809) )
  {
    KeCancelTimer((PKTIMER)(a1 + 904));
    *(_BYTE *)(a1 + 809) = 0;
  }
  DpiMiracastPerfResetPerfTrack(a1);
  result = *(_QWORD *)(a1 + 1040) + 1LL;
  *(_QWORD *)(a1 + 1048) = result;
  return result;
}
