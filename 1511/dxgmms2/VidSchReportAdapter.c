/*
 * XREFs of VidSchReportAdapter @ 0x1C008B910
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00132E0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0017468 (VidSchiSchedulerNodeToDriverNode.c)
 *     Template_pqq @ 0x1C001E198 (Template_pqq.c)
 *     Template_ppqptt @ 0x1C001F8EC (Template_ppqptt.c)
 *     Template_pqqqqqqqqppp @ 0x1C00221E0 (Template_pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 i; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  _BOOL8 v13; // r8
  unsigned int v14; // edx
  char v15; // r11
  char v16; // r12
  char v17; // r8
  BOOL v18; // edx
  char v19; // r9
  __int64 v20; // r9
  __int64 j; // rsi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // edx
  char v26; // r9
  char v27; // r10
  __int64 v28; // r9
  __int64 v29; // [rsp+28h] [rbp-39h]
  __int64 v30; // [rsp+30h] [rbp-31h]
  __int64 v31; // [rsp+40h] [rbp-21h]
  unsigned int v32; // [rsp+40h] [rbp-21h]
  __int64 v33; // [rsp+48h] [rbp-19h]
  _DWORD v34[8]; // [rsp+88h] [rbp+27h] BYREF

  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    if ( v7 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      v32 = (*(_DWORD *)(v7 + 48) >> 1) & 1;
      Template_ppqptt(
        v32,
        &EventReportDevice,
        a3,
        0LL,
        *(_QWORD *)(a1 + 16),
        -1,
        v7,
        v32,
        (*(_DWORD *)(v7 + 48) >> 2) & 1);
    }
    v8 = *(_QWORD *)(a1 + 192);
    if ( v8 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      LODWORD(v33) = (*(_DWORD *)(v8 + 48) >> 2) & 1;
      LODWORD(v31) = (*(_DWORD *)(v8 + 48) >> 1) & 1;
      LODWORD(v30) = -1;
      Template_ppqptt((unsigned int)v31, &EventReportDevice, a3, 0LL, *(_QWORD *)(a1 + 16), v30, v8, v31, v33);
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 56); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(a1 + 8 * i + 376);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32);
        if ( v11 )
        {
          memset(v34, 0, sizeof(v34));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v11 + 88));
            v16 = VidSchiSchedulerNodeToDriverNode(a1, v14);
            v18 = v17 != 0;
            v13 = v19 != 0;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              Template_pqqqqqqqqppp(
                (2 * (v18 || 2 * v13)) | 1,
                &EventReportContext,
                v13,
                v7,
                v16,
                v15,
                v34[0],
                v34[1],
                v34[2],
                v34[3],
                v34[4],
                (2 * (v18 || 2 * v13)) | 1,
                v11);
          }
          v20 = *(_QWORD *)(v11 + 56);
          if ( !v20 || (*(_DWORD *)(v11 + 112) & 0x40) != 0 )
            v20 = v11;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            LODWORD(v30) = *(_DWORD *)(v11 + 396);
            LODWORD(v29) = *(_DWORD *)(v11 + 392);
            Template_pqq(v12, &EventChangePriority, v13, v20, v29, v30);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 200) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 52); j = (unsigned int)(j + 1) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * j);
        if ( v22 )
        {
          memset(v34, 0, sizeof(v34));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v22 + 88));
            v27 = VidSchiSchedulerNodeToDriverNode(a1, v25);
            LOBYTE(v24) = v24 & 1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              Template_pqqqqqqqqppp(
                v34[4],
                &EventReportContext,
                v24,
                v8,
                v27,
                v26,
                v34[0],
                v34[1],
                v34[2],
                v34[3],
                v34[4],
                (2 * ((_BYTE)v24 != 0)) | 1,
                v22);
          }
          v28 = *(_QWORD *)(v22 + 56);
          if ( !v28 || (*(_DWORD *)(v22 + 112) & 0x40) != 0 )
            v28 = v22;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            LODWORD(v30) = *(_DWORD *)(v22 + 396);
            LODWORD(v29) = *(_DWORD *)(v22 + 392);
            Template_pqq(v23, &EventChangePriority, v24, v28, v29, v30);
          }
        }
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
