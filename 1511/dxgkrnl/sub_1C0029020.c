/*
 * XREFs of sub_1C0029020 @ 0x1C0029020
 * Callers:
 *     DpiMiracastPerfHandleChunkInfo @ 0x1C0029720 (DpiMiracastPerfHandleChunkInfo.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C00299A4 (DpiMiracastPerfHandleChunkSent.c)
 * Callees:
 *     DpiMiracastPerfResetPerfTrack @ 0x1C0029CC0 (DpiMiracastPerfResetPerfTrack.c)
 *     Template_xqqq @ 0x1C0029F6C (Template_xqqq.c)
 */

__int64 __fastcall sub_1C0029020(__int64 a1, _DWORD *a2, int a3)
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
  v6[4] = sub_1C0029020;
  v6[3] = retaddr;
  v6[5] = a1;
  v6[6] = v3;
  WdLogEvent5_WdError(v6);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_xqqq(v8, v7, v9, *(_QWORD *)(a1 + 96), *a2, (unsigned __int16)WORD2(*(_QWORD *)a2) >> 8, v3);
  if ( *(_BYTE *)(a1 + 721) )
  {
    KeCancelTimer((PKTIMER)(a1 + 816));
    *(_BYTE *)(a1 + 721) = 0;
  }
  result = DpiMiracastPerfResetPerfTrack(a1);
  *(_QWORD *)(a1 + 960) = *(_QWORD *)(a1 + 952) + 1LL;
  return result;
}
