/*
 * XREFs of ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00910F4
 * Callers:
 *     VidMmReportDmaPoolState @ 0x1C001D610 (VidMmReportDmaPoolState.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008AB00 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtph @ 0x1C0013778 (Template_pppqxqqqqqqqpppqqqqqqqqqqtph.c)
 *     Template_pppppppppppp @ 0x1C001E204 (Template_pppppppppppp.c)
 *     Template_pqx @ 0x1C001E7B8 (Template_pqx.c)
 *     Template_pppxxxp @ 0x1C001F638 (Template_pppxxxp.c)
 */

void __fastcall VIDMM_DMA_POOL::ReportState(VIDMM_DMA_POOL *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v5; // rbx
  int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rsi
  int *v10; // rdx
  __int64 v11; // r9
  int v12; // ebp
  int v13; // r12d
  int v14; // r11d
  __int64 *v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-168h]
  __int64 v19; // [rsp+48h] [rbp-140h]
  int v20; // [rsp+60h] [rbp-128h]
  char v21; // [rsp+A8h] [rbp-E0h]
  int v22; // [rsp+100h] [rbp-88h]
  int v23; // [rsp+104h] [rbp-84h]
  int v24; // [rsp+108h] [rbp-80h]
  int v25; // [rsp+198h] [rbp+10h]
  int v26; // [rsp+1A0h] [rbp+18h]
  int v27; // [rsp+1A8h] [rbp+20h]

  v3 = (char *)this + 96;
  v5 = (char *)*((_QWORD *)this + 12);
  if ( v5 != (char *)this + 96 )
  {
    LOBYTE(v6) = 0;
    while ( 1 )
    {
      v7 = *((_QWORD *)v5 + 7);
      if ( !v7 )
        goto LABEL_26;
      v8 = *((_QWORD *)this + 3);
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 16);
      else
        v9 = 0LL;
      if ( bTracingEnabled )
      {
        a3 = *(_QWORD *)(v7 + 40);
        if ( a3 )
          v10 = *(int **)(a3 + 24);
        else
          v10 = 0LL;
        if ( v9 )
          v11 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL);
        else
          v11 = 0LL;
        LOBYTE(v12) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v24) = 0;
        LOBYTE(v23) = 0;
        LOBYTE(v22) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v25) = 0;
        v3 = (char *)this + 96;
        if ( v10 )
        {
          v14 = *v10;
          v12 = v10[1];
          v13 = v10[2];
          v6 = v10[3];
          v24 = v10[4];
          v23 = v10[5];
          v22 = v10[6];
          v27 = v10[7];
          v26 = v10[8];
          v3 = (char *)this + 96;
          v25 = v10[9];
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v21 = v6;
          LOBYTE(v6) = 0;
          Template_pppqxqqqqqqqpppqqqqqqqqqqtph(
            *(_QWORD *)(v7 + 16),
            &EventReportAdapterAllocation,
            a3,
            v11,
            v9,
            *(_QWORD *)(*(_QWORD *)this + 24LL),
            **(_DWORD **)(v7 + 504),
            *(_QWORD *)(v7 + 16),
            *(_DWORD *)(v7 + 32),
            v19,
            *(_DWORD *)(v7 + 68),
            *(_DWORD *)(v7 + 72),
            v20,
            *(_DWORD *)(v7 + 64),
            *(_DWORD *)(v7 + 392),
            v7,
            a3,
            0,
            v14,
            v12,
            v13,
            v21,
            v24,
            v23,
            v22,
            v27,
            v26,
            v25,
            (*(_DWORD *)(v7 + 84) & 2) != 0,
            *(_QWORD *)(v7 + 368),
            *(_BYTE *)(v7 + 76) & 0x3F);
        }
        else
        {
          LOBYTE(v6) = 0;
        }
      }
      if ( !v9 )
        break;
      v15 = (__int64 *)*((_QWORD *)v5 + 8);
      a3 = *v15;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v20 = 0;
          LODWORD(v19) = 0;
          Template_pppppppppppp(
            *(_QWORD *)(v9 + 16),
            &EventReportDeviceAllocation,
            a3,
            *(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL),
            v9,
            *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL),
            v15,
            v7,
            0LL);
        }
LABEL_26:
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v19 = *((_QWORD *)v5 + 7);
            Template_pppxxxp(
              *((unsigned int *)v5 + 13),
              *((unsigned int *)v5 + 12),
              *(_QWORD *)this,
              *((_QWORD *)this + 3),
              *(_QWORD *)(*(_QWORD *)this + 24LL),
              v5,
              *((_QWORD *)v5 + 5),
              *((unsigned int *)v5 + 12),
              *((unsigned int *)v5 + 13));
          }
        }
      }
      v5 = *(char **)v5;
      if ( v5 == v3 )
        return;
    }
    v16 = *(_QWORD *)(v7 + 136);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v17 = (unsigned int)(*(_DWORD *)(v16 + 16) + 1);
      LODWORD(v18) = v17;
      Template_pqx(v17, &EventReportCommittedGlobalAllocation, a3, v7, v18, *(_QWORD *)(v7 + 144));
    }
    goto LABEL_26;
  }
}
