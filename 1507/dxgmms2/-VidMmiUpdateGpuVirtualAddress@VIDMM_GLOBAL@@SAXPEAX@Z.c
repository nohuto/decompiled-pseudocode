/*
 * XREFs of ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0056B80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C000EA58 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress(VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  __int64 v2; // rax
  VIDMM_GLOBAL *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  struct VIDMM_PAGING_QUEUE *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD v12[11]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, 0x50uLL);
  v2 = *((_QWORD *)this + 11);
  v3 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  LODWORD(v12[0]) = 119;
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *((unsigned int *)this + 4);
  v12[1] = v4;
  v6 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v4 + 64) + 152 * v5);
  v12[4] = this;
  if ( (int)VIDMM_GLOBAL::QueueDeferredCommand(v3, v6, (struct _VIDMM_DEFERRED_COMMAND *)v12, 0, 0LL) < 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 21954LL;
    WdLogEvent5_WdAssertion(v11);
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(this);
  }
}
