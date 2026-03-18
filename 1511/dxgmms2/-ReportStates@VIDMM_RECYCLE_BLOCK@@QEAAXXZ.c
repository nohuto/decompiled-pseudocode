/*
 * XREFs of ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C0082BAC
 * Callers:
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C0082A84 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 * Callees:
 *     Template_pppppppqq @ 0x1C001E0A8 (Template_pppppppqq.c)
 *     Template_qpxp @ 0x1C001E2B8 (Template_qpxp.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::ReportStates(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *i; // rsi
  char *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-10h]

  v3 = (char *)this + 72;
  for ( i = (char *)*((_QWORD *)this + 9); i != v3; i = *(char **)i )
  {
    v6 = i - 120;
    v7 = *((_DWORD *)i - 14);
    if ( v7 == 1 || v7 > 1 && v7 <= 5 )
    {
      if ( bTracingEnabled )
      {
        v8 = *((_QWORD *)this + 4);
        a3 = (unsigned int)(*(_DWORD *)v8 - 3) > 3 ? *((_QWORD *)v6 + 4) : *((_QWORD *)this + 7);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          Template_qpxp(
            *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL),
            &EventCreateProcessAllocationDetails,
            a3,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 8LL),
            (_BYTE)i - 120,
            v6[40] - v6[32],
            a3);
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      v9 = *((_QWORD *)this + 4);
      LODWORD(v11) = *((_DWORD *)v6 + 16);
      LODWORD(v10) = *(_DWORD *)v9;
      Template_pppppppqq(
        v9,
        a2,
        a3,
        **(_QWORD **)(*(_QWORD *)(v9 + 8) + 8LL),
        i - 120,
        this,
        *((_QWORD *)this + 7),
        v9,
        *((_QWORD *)v6 + 4),
        *((_QWORD *)v6 + 5),
        v10,
        v11);
    }
  }
}
