/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015A850
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00D24E0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C015A818 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C0162E10 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
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
  v2 = (struct _KMUTANT *)this[296];
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v3 = (struct DXGSWAPCHAIN **)this[295];
  if ( v3 )
  {
    v4 = SwapChainAbandonInternal(*v3);
    v9 = v4;
    if ( v4 < 0 )
    {
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v10 + 24) = *(_QWORD *)this[295];
      *(_QWORD *)(v10 + 32) = v9;
      WdLogEvent5_WdWarning(v10);
    }
    ObfDereferenceObject(this[295]);
    this[295] = 0LL;
  }
  KeReleaseMutex(v2, 0);
  *((_BYTE *)this + 257) = 0;
  BLTQUEUE::FinishCommand((LARGE_INTEGER *)this, 0);
}
