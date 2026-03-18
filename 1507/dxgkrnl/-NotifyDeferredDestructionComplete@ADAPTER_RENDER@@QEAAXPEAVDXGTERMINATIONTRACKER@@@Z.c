/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0092120
 * Callers:
 *     ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0005470 (-ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRAC.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 848, 0LL);
  *((_QWORD *)this + 107) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 896) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 114) )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
      v8[3] = 275LL;
      v8[4] = 31LL;
      v8[5] = this;
      v8[6] = 0LL;
      v8[7] = 0LL;
      WdLogEvent5_WdCriticalError(v8);
    }
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 105);
  *((_QWORD *)this + 105) = (char *)a2 + 56;
  *((_BYTE *)this + 896) = 1;
  *((_QWORD *)this + 107) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 848, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    if ( _InterlockedAdd64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL), 1uLL) <= 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v13);
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)this + 27, DelayedWorkQueue);
  }
}
