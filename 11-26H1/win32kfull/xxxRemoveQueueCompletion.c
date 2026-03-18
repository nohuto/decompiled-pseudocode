/*
 * XREFs of xxxRemoveQueueCompletion @ 0x140026360
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x14002565C (xxxDesktopThreadWaiter.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401FDDC0 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1402157B8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     NtUserRemoveQueueCompletion @ 0x1402BAD30 (NtUserRemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x14001F5B4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140026488 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxRemoveQueueCompletion(__int64 a1)
{
  const struct tagTHREADINFO **CurrentThreadWin32Thread; // rax
  const struct tagTHREADINFO *v2; // rbx
  struct _FILE_IO_COMPLETION_INFORMATION v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  CurrentThreadWin32Thread = (const struct tagTHREADINFO **)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v2 = *CurrentThreadWin32Thread;
  else
    v2 = 0LL;
  v5 = 0;
  memset(&v4, 0, sizeof(v4));
  v6 = 0LL;
  if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v2 + 202), &v4, 1LL, &v5, &v6, 0) )
    return 0LL;
  if ( ((__int64)v4.ApcContext & 0x80000000) != 0 )
  {
    if ( LODWORD(v4.ApcContext) == 0x80000000 )
      ZwAssociateWaitCompletionPacket(
        *((_QWORD *)v2 + 205),
        *((_QWORD *)v2 + 202),
        *((_QWORD *)v2 + 204),
        0LL,
        0xFFFFFFFF80000000uLL,
        0,
        0LL,
        0LL,
        v4.KeyContext);
    return 0LL;
  }
  if ( v4.ApcContext < (PVOID)2 && *((_QWORD *)v2 + (__int64)v4.ApcContext + 207) )
  {
    xxxHandleCoreMessagingQueueCompletion(
      *((struct tagWND **)v2 + (__int64)v4.ApcContext + 207),
      &v4,
      (PVOID)0x80000000LL);
    return 1LL;
  }
  else
  {
    BroadcastCoreMessagingApcContextError(v2, (unsigned __int64)v4.ApcContext);
    return 0LL;
  }
}
