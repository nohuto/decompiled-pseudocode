/*
 * XREFs of ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C005B7B4
 * Callers:
 *     VidMmReportContextAllocList @ 0x1C005C230 (VidMmReportContextAllocList.c)
 *     VidMmReportMultiGlobalAlloc @ 0x1C005C460 (VidMmReportMultiGlobalAlloc.c)
 * Callees:
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtp @ 0x1C0006EF8 (Template_pppqxqqqqqqqpppqqqqqqqqqqtp.c)
 *     Template_pcc @ 0x1C000F3F0 (Template_pcc.c)
 */

void __fastcall VidMmReportGlobalAlloc(
        struct DXGDEVICE *a1,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct DXGSHAREDRESOURCE *a3)
{
  char v3; // r10
  __int64 v5; // r9
  int *v6; // rdx
  int v7; // esi
  int v8; // ebp
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-148h]
  __int64 v15; // [rsp+28h] [rbp-140h]
  int v16; // [rsp+48h] [rbp-120h]
  int v17; // [rsp+60h] [rbp-108h]
  int v18; // [rsp+F0h] [rbp-78h]
  int v19; // [rsp+F4h] [rbp-74h]
  int v20; // [rsp+178h] [rbp+10h]
  int v21; // [rsp+188h] [rbp+20h]

  v3 = bTracingEnabled;
  if ( bTracingEnabled )
  {
    v5 = *((_QWORD *)a2 + 5);
    if ( v5 )
      v6 = *(int **)(v5 + 24);
    else
      v6 = 0LL;
    LOBYTE(v7) = 0;
    LOBYTE(v8) = 0;
    LOBYTE(v9) = 0;
    LOBYTE(v19) = 0;
    LOBYTE(v10) = 0;
    LOBYTE(v11) = 0;
    LOBYTE(v12) = 0;
    LOBYTE(v18) = 0;
    LOBYTE(v21) = 0;
    LOBYTE(v20) = 0;
    if ( v6 )
    {
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v10 = v6[3];
      v11 = v6[4];
      v12 = v6[5];
      v19 = v6[6];
      v18 = v6[7];
      v21 = v6[8];
      v20 = v6[9];
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      Template_pppqxqqqqqqqpppqqqqqqqqqqtp(
        **((unsigned int **)a2 + 59),
        &EventReportAdapterAllocation,
        (__int64)a3,
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL),
        (char)a1,
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
        **((_DWORD **)a2 + 59),
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 8),
        v16,
        *((_DWORD *)a2 + 17),
        *((_DWORD *)a2 + 18),
        v17,
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 94),
        (char)a2,
        v5,
        (char)a3,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v19,
        v18,
        v21,
        v20,
        (*((_DWORD *)a2 + 21) & 2) != 0,
        *((_QWORD *)a2 + 44));
      v3 = bTracingEnabled;
    }
  }
  v13 = *((_QWORD *)a2 + 59);
  if ( *(_DWORD *)(v13 + 4) && v3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LOBYTE(v15) = *((_BYTE *)a2 + 416);
    LOBYTE(v14) = *(_BYTE *)(v13 + 4);
    Template_pcc(v13, &EventReportOfferAllocation, (__int64)a3, a2, v14, v15);
  }
}
