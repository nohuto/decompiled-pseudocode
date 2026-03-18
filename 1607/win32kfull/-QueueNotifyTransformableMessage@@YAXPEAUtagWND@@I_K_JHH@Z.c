/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F994C
 * Callers:
 *     xxxActivateApp @ 0x1C0099540 (xxxActivateApp.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C009C938 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxFocusSetInputContext @ 0x1C00A8920 (xxxFocusSetInputContext.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00F96D4 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00F9850 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     QueueNotifyMessage @ 0x1C01E3D50 (QueueNotifyMessage.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v12;
  v12[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v11, v10);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
}
