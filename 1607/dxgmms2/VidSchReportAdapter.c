/*
 * XREFs of VidSchReportAdapter @ 0x1C00A12B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0015114 (VidSchiSchedulerNodeToDriverNode.c)
 *     Template_pqq @ 0x1C001FCE8 (Template_pqq.c)
 *     Template_ppqpttq @ 0x1C0022920 (Template_ppqpttq.c)
 *     Template_pqqqqqqqqppp @ 0x1C0026054 (Template_pqqqqqqqqppp.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 i; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rcx
  _BOOL8 v12; // r8
  unsigned int v13; // edx
  char v14; // r11
  char v15; // r12
  char v16; // r8
  BOOL v17; // edx
  char v18; // r9
  __int64 v19; // r9
  __int64 j; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // edx
  char v25; // r9
  char v26; // r10
  __int64 v27; // r9
  __int64 v28; // [rsp+28h] [rbp-39h]
  __int64 v29; // [rsp+30h] [rbp-31h]
  __int64 v30; // [rsp+40h] [rbp-21h]
  unsigned int v31; // [rsp+40h] [rbp-21h]
  __int64 v32; // [rsp+48h] [rbp-19h]
  _DWORD v33[8]; // [rsp+88h] [rbp+27h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 200);
    if ( v6 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v31 = (*(_DWORD *)(v6 + 48) >> 1) & 1;
      Template_ppqpttq(
        v31,
        &EventReportDevice,
        a3,
        0LL,
        *(_QWORD *)(a1 + 16),
        -1,
        v6,
        v31,
        (*(_DWORD *)(v6 + 48) >> 2) & 1);
    }
    v7 = *(_QWORD *)(a1 + 216);
    if ( v7 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v32) = (*(_DWORD *)(v7 + 48) >> 2) & 1;
      LODWORD(v30) = (*(_DWORD *)(v7 + 48) >> 1) & 1;
      LODWORD(v29) = -1;
      Template_ppqpttq((unsigned int)v30, &EventReportDevice, a3, 0LL, *(_QWORD *)(a1 + 16), v29, v7, v30, v32);
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(a1 + 8 * i + 408);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 32);
        if ( v10 )
        {
          memset(v33, 0, sizeof(v33));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v10 + 88));
            v15 = VidSchiSchedulerNodeToDriverNode(a1, v13);
            v17 = v16 != 0;
            v12 = v18 != 0;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              Template_pqqqqqqqqppp(
                (2 * (v17 || 2 * v12)) | 1,
                &EventReportContext,
                v12,
                v6,
                v15,
                v14,
                v33[0],
                v33[1],
                v33[2],
                v33[3],
                v33[4],
                (2 * (v17 || 2 * v12)) | 1,
                v10);
          }
          v19 = *(_QWORD *)(v10 + 56);
          if ( !v19 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
            v19 = v10;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v29) = *(_DWORD *)(v10 + 396);
            LODWORD(v28) = *(_DWORD *)(v10 + 392);
            Template_pqq(v11, &EventChangePriority, v12, v19, v28, v29);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 224) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 56); j = (unsigned int)(j + 1) )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * j);
        if ( v21 )
        {
          memset(v33, 0, sizeof(v33));
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v21 + 88));
            v26 = VidSchiSchedulerNodeToDriverNode(a1, v24);
            LOBYTE(v23) = v23 & 1;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              Template_pqqqqqqqqppp(
                v33[4],
                &EventReportContext,
                v23,
                v7,
                v26,
                v25,
                v33[0],
                v33[1],
                v33[2],
                v33[3],
                v33[4],
                (2 * ((_BYTE)v23 != 0)) | 1,
                v21);
          }
          v27 = *(_QWORD *)(v21 + 56);
          if ( !v27 || (*(_DWORD *)(v21 + 112) & 0x40) != 0 )
            v27 = v21;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v29) = *(_DWORD *)(v21 + 396);
            LODWORD(v28) = *(_DWORD *)(v21 + 392);
            Template_pqq(v22, &EventChangePriority, v23, v27, v28, v29);
          }
        }
      }
    }
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
