/*
 * XREFs of CopyHidData @ 0x14029AA94
 * Callers:
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 * Callees:
 *     AllocateHidData @ 0x140090364 (AllocateHidData.c)
 *     ?CopyHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@0KPEAUHWND__@@@Z @ 0x14029A878 (-CopyHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@0KPEAUHWND__@@@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall CopyHidData(void **a1, __int64 a2, __int64 *a3)
{
  __int64 HidData; // rax
  unsigned int ThreadId; // ebx
  __int64 v7; // rdi
  HWND v8; // rsi
  PETHREAD *v9; // rcx

  HidData = AllocateHidData(a1[8], *((unsigned int *)a1 + 14), (unsigned int)(*((_DWORD *)a1 + 15) - 24), a2, a3);
  ThreadId = 0;
  v7 = HidData;
  if ( HidData )
  {
    memmove((void *)(HidData + 56), a1 + 7, *(unsigned int *)(HidData + 60));
    if ( a3 )
      v8 = (HWND)*a3;
    else
      v8 = 0LL;
    v9 = *(PETHREAD **)(v7 + 16);
    if ( v9 )
      ThreadId = (unsigned int)PsGetThreadId(*v9);
    InputTraceLogging::RawInput::CopyHidData((struct tagHIDDATA *const)a1, (struct tagHIDDATA *const)v7, ThreadId, v8);
  }
  return v7;
}
