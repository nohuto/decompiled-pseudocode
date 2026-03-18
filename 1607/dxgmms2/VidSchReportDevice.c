/*
 * XREFs of VidSchReportDevice @ 0x1C00A16C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0015114 (VidSchiSchedulerNodeToDriverNode.c)
 *     Template_pqq @ 0x1C001FCE8 (Template_pqq.c)
 *     Template_pqqqqqqqqppp @ 0x1C0026054 (Template_pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // r9
  char v10; // r10
  char v11; // r11
  __int64 v12; // r9
  __int64 v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+28h] [rbp-80h]
  _DWORD v15[8]; // [rsp+80h] [rbp-28h] BYREF

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( a1 == *(_QWORD *)(v4 + 200) )
      v5 = *(_QWORD *)(v4 + 208);
    else
      v5 = 0LL;
    if ( v5 )
    {
      memset(v15, 0, sizeof(v15));
      if ( bTracingEnabled )
      {
        VidSchiSchedulerNodeToDriverEngine(v4, *(_DWORD *)(v5 + 88));
        v11 = VidSchiSchedulerNodeToDriverNode(v4, v8);
        LOBYTE(v7) = v7 & 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          Template_pqqqqqqqqppp(
            v15[4],
            &EventReportContext,
            v7,
            v9,
            v11,
            v10,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            (2 * ((_BYTE)v7 != 0)) | 1,
            v5);
      }
      v12 = *(_QWORD *)(v5 + 56);
      if ( !v12 || (*(_DWORD *)(v5 + 112) & 0x40) != 0 )
        v12 = v5;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v14) = *(_DWORD *)(v5 + 396);
        LODWORD(v13) = *(_DWORD *)(v5 + 392);
        Template_pqq(v6, &EventChangePriority, v7, v12, v13, v14);
      }
    }
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v2);
    return 3221225485LL;
  }
}
