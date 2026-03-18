/*
 * XREFs of ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C007E2C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001C898 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress(VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  __int64 v2; // rax
  VIDMM_GLOBAL *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD v11[11]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, 0x50uLL);
  v2 = *((_QWORD *)this + 11);
  v3 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  LODWORD(v11[0]) = 119;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *((unsigned int *)this + 4);
  v11[1] = v4;
  v11[4] = this;
  if ( (int)VIDMM_GLOBAL::QueueDeferredCommand(
              v3,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v4 + 64) + 160 * v5),
              (struct _VIDMM_DEFERRED_COMMAND *)v11,
              0,
              0LL) < 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 22502LL;
    WdLogEvent5_WdAssertion(v10);
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(this);
  }
}
