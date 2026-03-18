/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015EB74
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00E51EC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C015EB3C (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C0167348 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 */

void __fastcall BLTQUEUE::ResetWorker(PVOID *this)
{
  struct _KMUTANT *v2; // rbx
  struct DXGSWAPCHAIN **v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rax

  BLTQUEUE::ResetInternal((BLTQUEUE *)this);
  v2 = (struct _KMUTANT *)this[299];
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v3 = (struct DXGSWAPCHAIN **)this[298];
  if ( v3 )
  {
    v4 = SwapChainAbandonInternal(*v3);
    v9 = v4;
    if ( v4 < 0 )
    {
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v10 + 24) = *(_QWORD *)this[298];
      *(_QWORD *)(v10 + 32) = v9;
      WdLogEvent5_WdWarning(v10);
    }
    ObfDereferenceObject(this[298]);
    this[298] = 0LL;
  }
  KeReleaseMutex(v2, 0);
  *((_BYTE *)this + 257) = 0;
  BLTQUEUE::FinishCommand((LARGE_INTEGER *)this, 0);
}
