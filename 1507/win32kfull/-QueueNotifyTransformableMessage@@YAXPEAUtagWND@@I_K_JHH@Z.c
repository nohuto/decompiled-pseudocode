/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00D53CC
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C0008998 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxFocusSetInputContext @ 0x1C0046C38 (xxxFocusSetInputContext.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00D52D0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxActivateApp @ 0x1C00E4A30 (xxxActivateApp.c)
 *     QueueNotifyMessage @ 0x1C01ECC80 (QueueNotifyMessage.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C004DF0C (xxxSendMessageCallback.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v12;
  v12[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v11, v10);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
}
