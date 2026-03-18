/*
 * XREFs of VidSchReportContext @ 0x1C008BCB0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqq @ 0x1C001E198 (Template_pqq.c)
 */

__int64 __fastcall VidSchReportContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( !v6 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      v6 = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      v8 = *(_DWORD *)(a1 + 396);
      v7 = *(_DWORD *)(a1 + 392);
      Template_pqq(a1, &EventChangePriority, a3, v6, v7, v8);
    }
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
