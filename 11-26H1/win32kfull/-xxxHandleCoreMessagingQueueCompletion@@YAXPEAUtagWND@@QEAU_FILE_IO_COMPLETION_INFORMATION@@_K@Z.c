/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x14001F5B4
 * Callers:
 *     xxxMsgWaitForMultipleObjectsEx @ 0x140023060 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _GetQueueStatus @ 0x140025CC0 (_GetQueueStatus.c)
 *     NtUserGetQueueStatus @ 0x140026010 (NtUserGetQueueStatus.c)
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 *     xxxDrainQueueCompletions @ 0x140131AD0 (xxxDrainQueueCompletions.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

void __fastcall xxxHandleCoreMessagingQueueCompletion(
        struct tagWND *a1,
        struct _FILE_IO_COMPLETION_INFORMATION *const a2,
        PVOID a3)
{
  PVOID ApcContext; // rsi
  char *v7; // r12
  __int64 ULong64FromUser; // rax
  __int64 v9; // r14
  PVOID KeyContext; // rbx
  ULONG_PTR BugCheckParameter3[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+98h] [rbp+10h]

  ApcContext = a2->ApcContext;
  v7 = (char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8 * (_QWORD)ApcContext;
  ULong64FromUser = RtlReadULong64FromUser(v7 + 8);
  v9 = ULong64FromUser;
  if ( (((unsigned int)a3 & 0x80000000) != 0 || a3 != ApcContext)
    && !ULong64FromUser
    && !(unsigned int)PostMessage(a1, 96LL, 1LL, 0LL) )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
    xxxSendMessage(a1, 96LL, 2LL, 0LL);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  }
  KeyContext = a2->KeyContext;
  v12 = (-(__int64)(PsGetCurrentProcessWow64Process() != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
  ProbeForRead(a2->KeyContext, 1uLL, v12);
  RtlWriteULong64ToUser(KeyContext, v9);
  RtlWriteULong64ToUser(v7 + 8, KeyContext);
}
