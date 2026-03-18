/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0092A80
 * Callers:
 *     ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0007600 (-ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRAC.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char *v3; // rsi
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax

  v3 = (char *)this + 848;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 896) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 114) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v9[3] = 275LL;
      v9[4] = 31LL;
      v9[5] = this;
      v9[6] = 0LL;
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
    }
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 105);
  *((_QWORD *)this + 105) = (char *)a2 + 56;
  *((_BYTE *)this + 896) = 1;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)this + 27, DelayedWorkQueue);
  }
}
