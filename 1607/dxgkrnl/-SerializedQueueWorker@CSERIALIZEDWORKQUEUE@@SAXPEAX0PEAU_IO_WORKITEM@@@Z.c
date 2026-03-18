/*
 * XREFs of ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C00FBB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::SerializedQueueWorker(
        PVOID IoObject,
        DXGFASTMUTEX *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 **v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  if ( Context )
  {
    DXGFASTMUTEX::Acquire(Context);
    if ( !*((_BYTE *)Context + 56) )
    {
      *((_BYTE *)Context + 56) = 1;
      v5 = (__int64 **)((char *)Context + 40);
      while ( *v5 != (__int64 *)v5 )
      {
        v6 = *v5;
        v7 = **v5;
        if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
          __fastfail(3u);
        *v5 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v5;
        DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
        ((void (__fastcall *)(__int64))v6[2])(v6[3]);
        operator delete(v6);
        DXGFASTMUTEX::Acquire(Context);
      }
      *((_BYTE *)Context + 56) = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
    if ( IoWorkItem )
      IoFreeWorkItem(IoWorkItem);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(IoObject);
    *(_QWORD *)(v8 + 24) = 1225LL;
    WdLogEvent5_WdError(v8);
  }
}
