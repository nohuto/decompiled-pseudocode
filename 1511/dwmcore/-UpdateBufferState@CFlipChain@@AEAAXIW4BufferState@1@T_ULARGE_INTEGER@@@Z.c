/*
 * XREFs of ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800AE21C
 * Callers:
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800AE4BC (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AE51C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?UpdateTimingInfo@CFlipChain@@AEAAXXZ @ 0x180125DA4 (-UpdateTimingInfo@CFlipChain@@AEAAXXZ.c)
 * Callees:
 *     ?TraceBuffer@CFlipChain@@AEAAXI@Z @ 0x1800AE190 (-TraceBuffer@CFlipChain@@AEAAXI@Z.c)
 */

void __fastcall CFlipChain::UpdateBufferState(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx

  if ( !a3 )
  {
    v11 = *(__int64 **)(a1 + 128);
    v12 = *v11;
    *v11 = 0LL;
    v11[1] = 0LL;
    **(_QWORD **)(a1 + 128) = v12;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0;
    goto LABEL_16;
  }
  v5 = a3 - 1;
  if ( !v5 )
  {
    v10 = *(_QWORD *)(a1 + 128);
    ++*(_DWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 168) = a4;
    *(_DWORD *)(v10 + 8) = 1;
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *(_DWORD *)(a1 + 152) == 1;
    *(_DWORD *)(a1 + 180) = *(_DWORD *)(a1 + 160);
    if ( v8 )
      *(_DWORD *)(a1 + 176) = a4;
    *(_QWORD *)(a1 + 184) = *(_QWORD *)(**(_QWORD **)(a1 + 264) + 248LL);
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      *(_DWORD *)(a1 + 180) = *(_DWORD *)(a1 + 160);
      if ( *(_DWORD *)(a1 + 152) == 1 )
        *(_DWORD *)(a1 + 176) = a4;
      QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 184));
LABEL_13:
      v9 = *(_QWORD *)(a1 + 128);
      --*(_DWORD *)(a1 + 104);
      *(_DWORD *)(v9 + 8) = 2;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 3;
  }
LABEL_16:
  CFlipChain::TraceBuffer((CFlipChain *)a1);
}
