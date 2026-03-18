/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00DBB38
 * Callers:
 *     xxxFocusSetInputContext @ 0x1C008120C (xxxFocusSetInputContext.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008E100 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00DB8C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00DBA3C (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxActivateApp @ 0x1C00EBFD0 (xxxActivateApp.c)
 *     QueueNotifyMessage @ 0x1C01ED1A0 (QueueNotifyMessage.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 */

void __fastcall QueueNotifyTransformableMessage(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[4]; // [rsp+50h] [rbp-28h] BYREF
  char v12; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v11;
  v11[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1LL, 0, a5);
  ThreadUnlock1(v10, v9);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
}
