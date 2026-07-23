/*
 * XREFs of TtmiCreateEventQueue @ 0x140679F80
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140679890 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiLogQueueCreated @ 0x14067B4F8 (TtmiLogQueueCreated.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r9
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  int v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-18h]
  void *v17; // [rsp+98h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v12 = 48;
  v13 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v15 = 32;
  v14 = 0LL;
  v16 = 0LL;
  v6 = ObCreateObject(0, TtmpQueueObjectType, (__int64)&v12, PreviousMode, 0, 176, 0, 0, &v17);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (char *)v17;
    memset(v17, 0, 0xB0uLL);
    *((_QWORD *)v8 + 20) = v8 + 152;
    *((_QWORD *)v8 + 19) = v8 + 152;
    ExInitializeResourceLite((PERESOURCE)(v8 + 24));
    KeInitializeEvent((PRKEVENT)(v8 + 128), NotificationEvent, 0);
    v8[168] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v9 = v17;
    *((_QWORD *)v17 + 2) = a1;
    v10 = *(_QWORD **)(a1 + 88);
    if ( *v10 != a1 + 80 )
      __fastfail(3u);
    v9[1] = v10;
    *v9 = a1 + 80;
    *v10 = v9;
    *(_QWORD *)(a1 + 88) = v9;
    TtmiLogQueueCreated(v9);
    *a2 = v9;
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateEventQueue", 565, v6, v6);
  }
  return v7;
}
