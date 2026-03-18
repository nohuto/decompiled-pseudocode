/*
 * XREFs of VidSchReportDevice @ 0x1C008BD20
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00132E0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0017468 (VidSchiSchedulerNodeToDriverNode.c)
 *     Template_pqq @ 0x1C001E198 (Template_pqq.c)
 *     Template_pqqqqqqqqppp @ 0x1C00221E0 (Template_pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edx
  char v11; // r9
  __int64 v12; // r10
  char v13; // r11
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  _DWORD v17[8]; // [rsp+80h] [rbp-28h] BYREF

  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      memset(v17, 0, sizeof(v17));
      if ( bTracingEnabled )
      {
        VidSchiSchedulerNodeToDriverEngine(*(_QWORD *)(a1 + 32), *(_DWORD *)(v7 + 88));
        v9 = (unsigned int)VidSchiSchedulerNodeToDriverNode(*(_QWORD *)(a1 + 32), v10);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          Template_pqqqqqqqqppp(
            v17[4],
            &EventReportContext,
            v9,
            v12,
            v9,
            v13,
            v17[0],
            v17[1],
            v17[2],
            v17[3],
            v17[4],
            (2 * ((v11 & 1) != 0)) | 1,
            v7);
      }
      v14 = *(_QWORD *)(v7 + 56);
      if ( !v14 || (*(_DWORD *)(v7 + 112) & 0x40) != 0 )
        v14 = v7;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        LODWORD(v16) = *(_DWORD *)(v7 + 396);
        LODWORD(v15) = *(_DWORD *)(v7 + 392);
        Template_pqq(v8, &EventChangePriority, v9, v14, v15, v16);
      }
    }
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
