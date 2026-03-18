/*
 * XREFs of ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C009BB34
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D228 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008AB00 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_xxpqhc @ 0x1C001F584 (Template_xxpqhc.c)
 *     Template_xxpqhccccc @ 0x1C0020670 (Template_xxpqhccccc.c)
 */

void __fastcall VIDMM_GLOBAL::ReportProcessAdapterBudget(VIDMM_GLOBAL *this, struct _KTHREAD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int i; // ebx
  unsigned __int8 v7; // bp
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int8 v13; // bp
  _QWORD *v14; // r14
  __int64 v15; // [rsp+30h] [rbp-88h]
  __int64 v16; // [rsp+38h] [rbp-80h]
  __int64 v17; // [rsp+40h] [rbp-78h]
  _BYTE v18[32]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, a2 + 41);
  for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
  {
    v7 = 0;
    v8 = (__int64)a2[6] + 264 * i;
    v9 = -(__int64)a2[6];
    v10 = v8 + 24;
    do
    {
      v11 = v9 + v10 - 8;
      if ( *(_QWORD *)(v11 + *((_QWORD *)this + 5150)) )
      {
        v12 = *(_QWORD *)(v10 + 112);
        LOBYTE(v11) = *((_BYTE *)a2 + 360);
        v19 = *(_QWORD *)(v10 + 176);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LOBYTE(v4) = *((_BYTE *)a2 + 352);
          Template_xxpqhccccc(v11, v4, v5);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LOBYTE(v17) = v7;
            LOWORD(v16) = i;
            LODWORD(v15) = *((_DWORD *)a2[5] + 2);
            Template_xxpqhc(v11, &EventVidMmProcessUsageChange, v5, v12, v12, *((_QWORD *)this + 3), v15, v16, v17);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LOBYTE(v17) = v7;
              LOWORD(v16) = i;
              LODWORD(v15) = *((_DWORD *)a2[5] + 2);
              Template_xxpqhc(
                v11,
                &EventVidMmProcessCommitmentChange,
                v5,
                v19,
                v19,
                *((_QWORD *)this + 3),
                v15,
                v16,
                v17);
            }
          }
        }
      }
      ++v7;
      v10 += 8LL;
    }
    while ( v7 < 2u );
    if ( *(_QWORD *)(v8 + 152) && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_xxpqhc(v11, &EventVidMmProcessUsageChange, v5);
    v13 = 0;
    v14 = (_QWORD *)(v8 + 224);
    do
    {
      if ( *v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_xxpqhc(v11, &EventVidMmProcessDemotedCommitmentChange, v5);
      ++v13;
      ++v14;
    }
    while ( v13 < 5u );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
