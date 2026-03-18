/*
 * XREFs of ?UpdateBufferState@CFlipChain@@AEAAXIW4BufferState@1@T_ULARGE_INTEGER@@@Z @ 0x1800AA4C0
 * Callers:
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800AA6AC (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800AA77C (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 * Callees:
 *     ?TraceBuffer@CFlipChain@@AEAAXI@Z @ 0x1800AA43C (-TraceBuffer@CFlipChain@@AEAAXI@Z.c)
 */

void __fastcall CFlipChain::UpdateBufferState(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  bool v5; // zf
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx

  if ( !a3 )
  {
    v11 = *(__int64 **)(a1 + 200);
    v12 = *v11;
    *v11 = 0LL;
    v11[1] = 0LL;
    **(_QWORD **)(a1 + 200) = v12;
    *(_DWORD *)(*(_QWORD *)(a1 + 200) + 8LL) = 0;
    goto LABEL_7;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v10 = *(_QWORD *)(a1 + 200);
    ++*(_DWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 240) = a4;
    *(_DWORD *)(v10 + 8) = 1;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v5 = *(_DWORD *)(a1 + 224) == 1;
    *(_DWORD *)(a1 + 252) = *(_DWORD *)(a1 + 232);
    if ( v5 )
      *(_DWORD *)(a1 + 248) = a4;
    *(_QWORD *)(a1 + 256) = *(_QWORD *)(**(_QWORD **)(a1 + 336) + 248LL);
    goto LABEL_6;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 200) + 8LL) = 3;
    goto LABEL_7;
  }
  if ( v9 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 224) == 1;
    *(_DWORD *)(a1 + 252) = *(_DWORD *)(a1 + 232);
    if ( v5 )
      *(_DWORD *)(a1 + 248) = a4;
    QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 256));
LABEL_6:
    v6 = *(_QWORD *)(a1 + 200);
    --*(_DWORD *)(a1 + 176);
    *(_DWORD *)(v6 + 8) = 2;
  }
LABEL_7:
  CFlipChain::TraceBuffer((CFlipChain *)a1);
}
