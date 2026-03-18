/*
 * XREFs of ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C0091F00
 * Callers:
 *     VidMmReportContextAllocList @ 0x1C00923C0 (VidMmReportContextAllocList.c)
 *     VidMmReportMultiGlobalAlloc @ 0x1C00925F0 (VidMmReportMultiGlobalAlloc.c)
 * Callees:
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtph @ 0x1C0013778 (Template_pppqxqqqqqqqpppqqqqqqqqqqtph.c)
 *     Template_pcc @ 0x1C001E188 (Template_pcc.c)
 */

void __fastcall VidMmReportGlobalAlloc(
        struct DXGDEVICE *a1,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct DXGSHAREDRESOURCE *a3)
{
  int *v3; // rax
  char v5; // r10
  int *v6; // rdx
  __int64 v7; // r9
  int v8; // esi
  int v9; // ebp
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-158h]
  __int64 v17; // [rsp+28h] [rbp-150h]
  int v18; // [rsp+48h] [rbp-130h]
  int v19; // [rsp+60h] [rbp-118h]
  int v20; // [rsp+100h] [rbp-78h]
  int v21; // [rsp+104h] [rbp-74h]
  int v22; // [rsp+108h] [rbp-70h]
  int v23; // [rsp+10Ch] [rbp-6Ch]
  int v24; // [rsp+198h] [rbp+20h]

  v3 = (int *)*((_QWORD *)a2 + 63);
  v5 = bTracingEnabled;
  v6 = 0LL;
  v24 = *v3;
  if ( bTracingEnabled )
  {
    v7 = *((_QWORD *)a2 + 5);
    if ( v7 )
      v6 = *(int **)(v7 + 24);
    LOBYTE(v23) = 0;
    LOBYTE(v8) = 0;
    LOBYTE(v22) = 0;
    LOBYTE(v9) = 0;
    LOBYTE(v21) = 0;
    LOBYTE(v10) = 0;
    LOBYTE(v20) = 0;
    LOBYTE(v11) = 0;
    LOBYTE(v12) = 0;
    LOBYTE(v13) = 0;
    v14 = *v3;
    if ( v6 )
    {
      v8 = *v6;
      v9 = v6[1];
      v10 = v6[2];
      v11 = v6[3];
      v12 = v6[4];
      v13 = v6[5];
      v23 = v6[6];
      v22 = v6[7];
      v21 = v6[8];
      v20 = v6[9];
      v14 = v24;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      Template_pppqxqqqqqqqpppqqqqqqqqqqtph(
        *((_QWORD *)a2 + 2),
        &EventReportAdapterAllocation,
        (__int64)a3,
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL),
        (char)a1,
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
        v14,
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 8),
        v18,
        *((_DWORD *)a2 + 17),
        *((_DWORD *)a2 + 18),
        v19,
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 98),
        (char)a2,
        v7,
        (char)a3,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v23,
        v22,
        v21,
        v20,
        (*((_DWORD *)a2 + 21) & 2) != 0,
        *((_QWORD *)a2 + 46),
        *((_BYTE *)a2 + 76) & 0x3F);
      v5 = bTracingEnabled;
    }
  }
  v15 = *((_QWORD *)a2 + 63);
  if ( *(_WORD *)(v15 + 4) && v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LOBYTE(v17) = *((_BYTE *)a2 + 448);
    LOBYTE(v16) = *(_BYTE *)(v15 + 4);
    Template_pcc(v15, &EventReportOfferAllocation, (__int64)a3, a2, v16, v17);
  }
}
