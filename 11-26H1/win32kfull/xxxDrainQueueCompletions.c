/*
 * XREFs of xxxDrainQueueCompletions @ 0x140131AD0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     NtUserDrainThreadCoreMessagingCompletions2 @ 0x1401318B0 (NtUserDrainThreadCoreMessagingCompletions2.c)
 *     _DrainThreadCoreMessagingCompletions2 @ 0x140131A30 (_DrainThreadCoreMessagingCompletions2.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x14001F5B4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxDrainQueueCompletions(void *a1)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v3; // rbx
  int v4; // esi
  __int64 result; // rax
  struct tagWND *v6; // rcx
  struct tagWND *v7; // r14
  char v8; // bp
  struct tagWND *v9; // r14
  int v10; // [rsp+28h] [rbp-70h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-58h] BYREF
  struct _FILE_IO_COMPLETION_INFORMATION v12; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v3 = (_QWORD *)*CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  v13 = 0;
  memset(&v12, 0, sizeof(v12));
  v14 = 0LL;
  v4 = 0;
  ZwSetIoCompletionEx(v3[202], v3[206], 0LL, -2147483647LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v10) = 0;
    result = ZwRemoveIoCompletionEx(v3[202], &v12, 1LL, &v13, &v14, v10);
    if ( (_DWORD)result )
      break;
    if ( ((__int64)v12.ApcContext & 0x80000000) != 0 )
    {
      if ( LODWORD(v12.ApcContext) != 0x80000000 )
        break;
      v4 = 1;
    }
    else
    {
      if ( v12.ApcContext >= (PVOID)2 || (v6 = (struct tagWND *)v3[(__int64)v12.ApcContext + 207]) == 0LL )
      {
        v7 = (struct tagWND *)v3[207];
        v8 = 0;
        if ( v7 )
        {
          v8 = 1;
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v3[207]);
          xxxSendMessage(v7, 0x60u);
          result = Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        }
        v9 = (struct tagWND *)v3[208];
        if ( v9 )
        {
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v3[208]);
          xxxSendMessage(v9, 0x60u);
          result = Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        }
        else if ( !v8 )
        {
          result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5934LL);
        }
        break;
      }
      xxxHandleCoreMessagingQueueCompletion(v6, &v12, a1);
    }
  }
  if ( v4 )
    return ZwAssociateWaitCompletionPacket(
             v3[205],
             v3[202],
             v3[204],
             0LL,
             0xFFFFFFFF80000000uLL,
             0,
             0LL,
             0LL,
             BugCheckParameter3[0]);
  return result;
}
