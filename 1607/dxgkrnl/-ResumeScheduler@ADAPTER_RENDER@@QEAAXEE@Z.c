/*
 * XREFs of ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0091370
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C0091440 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeScheduler(ADAPTER_RENDER *this, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rcx
  unsigned __int8 v6; // si
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v5 = *((_QWORD *)this + 48);
  v6 = a2;
  if ( v5 )
  {
    LOBYTE(a2) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL) + 664LL))(v5, a2);
    v11 = v7;
    if ( v7 < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
      v12[3] = 275LL;
      v12[4] = 19LL;
      v13 = *((_QWORD *)this + 2);
      v12[7] = 0LL;
      v12[5] = v13;
      v12[6] = v11;
      WdLogEvent5_WdCriticalError(v12);
    }
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, v6, a3);
  }
}
