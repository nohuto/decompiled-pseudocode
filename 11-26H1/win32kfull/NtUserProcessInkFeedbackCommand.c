/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1402B9220
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1401ED1FC (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x14021F9DC (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

_BOOL8 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // r15
  BOOL v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rsi
  __int64 v10; // rdx
  int InkProcessor; // edi
  struct InkProcessor *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(a2, v3, 1u);
    v8 = (void *)Win32AllocPoolWithQuotaZInit(v3, 1768452949LL);
    v9 = v8;
    if ( v8 )
    {
      RtlCopyVolatileMemory(v8, (const void *)a2, v3);
      if ( a1 < 5 )
      {
        v13 = 0LL;
        InkProcessor = GetInkProcessor(&v13, v10);
        if ( InkProcessor >= 0 )
          InkProcessor = InkProcessor::ProcessInkFeedbackCommand((__int64)v13);
      }
      else
      {
        InkProcessor = -1073741811;
      }
      Win32FreePool(v9);
      v6 = InkProcessor >= 0;
    }
    else
    {
      UserSetLastError(8);
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
