/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0068924
 * Callers:
 *     ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0001C50 (-ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRAC.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char *v3; // rsi
  char v5; // di
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax

  v3 = (char *)this + 920;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 968) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 123) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
      v10[3] = 275LL;
      v10[4] = 31LL;
      v10[5] = this;
      v10[6] = 0LL;
      v10[7] = 0LL;
      WdLogEvent5_WdCriticalError(v10);
    }
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 114);
  *((_QWORD *)this + 114) = (char *)a2 + 56;
  *((_BYTE *)this + 968) = 1;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    if ( _InterlockedAdd64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL), 1uLL) <= 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v11 + 24) = 1141LL;
      WdLogEvent5_WdAssertion(v11);
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 936), DelayedWorkQueue);
  }
}
