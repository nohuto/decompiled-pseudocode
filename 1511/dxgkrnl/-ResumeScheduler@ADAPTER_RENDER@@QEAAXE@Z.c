/*
 * XREFs of ?ResumeScheduler@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C006A824
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z @ 0x1C006A77C (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeScheduler(ADAPTER_RENDER *this, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rcx

  if ( *((_QWORD *)this + 51) )
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 664LL))();
    v8 = v4;
    if ( v4 < 0 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
      v9[3] = 275LL;
      v9[4] = 19LL;
      v10 = *((_QWORD *)this + 2);
      v9[7] = 0LL;
      v9[5] = v10;
      v9[6] = v8;
      WdLogEvent5_WdCriticalError(v9);
    }
    ADAPTER_RENDER::ResumeVidMmWorkerThread((PERESOURCE **)this, a2);
  }
}
