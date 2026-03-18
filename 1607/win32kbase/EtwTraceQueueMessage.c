/*
 * XREFs of EtwTraceQueueMessage @ 0x1C0073D50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     EtwTraceQueueInputMessage @ 0x1C0073E2C (EtwTraceQueueInputMessage.c)
 *     Template_cppppqq @ 0x1C00B67D8 (Template_cppppqq.c)
 *     Template_qqsp @ 0x1C00B8928 (Template_qqsp.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  int v6; // ebp
  int v7; // edx
  int v8; // r8d
  __int64 CurrentProcess; // r14
  char ThreadId; // r15
  __int64 *v11; // rsi
  __int64 *ProcessImageFileName; // rcx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rsi
  char v16; // bp
  __int64 v17; // rdi
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx

  if ( !*(_DWORD *)(a1 + 24) )
  {
    v3 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    v6 = -1;
    CurrentProcess = PsGetCurrentProcess(v5);
    if ( v3 )
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v3);
    else
      ThreadId = -1;
    v11 = qword_1C008ECF0;
    if ( CurrentProcess )
      ProcessImageFileName = (__int64 *)PsGetProcessImageFileName(CurrentProcess);
    else
      ProcessImageFileName = qword_1C008ECF0;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
    {
      if ( ProcessImageFileName )
        v11 = ProcessImageFileName;
      if ( v3 )
      {
        v13 = *(_QWORD *)(v3 + 376);
        if ( v13 )
          v6 = *(_DWORD *)(v13 + 56);
      }
      Template_qqsp((_DWORD)ProcessImageFileName, v7, v8, v6, ThreadId, (__int64)v11, *(_QWORD *)(a1 + 16));
    }
  }
  result = *(unsigned int *)(a1 + 100);
  if ( (result & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      v14 = *(_DWORD *)(a1 + 24);
      LOBYTE(v15) = 0;
      v16 = v14;
      if ( (unsigned int)(v14 - 581) <= 2 )
        v15 = *(_QWORD *)(a1 + 40);
      else
        v16 = 0;
      LOBYTE(v17) = 0;
      if ( (unsigned int)(v14 - 581) <= 2 )
        v17 = *(_QWORD *)(a1 + 32);
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        v20 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
      else
        v20 = -1;
      LOBYTE(v19) = v20;
      return Template_cppppqq(
               v20,
               (unsigned int)&QueuePostMessage,
               v18,
               v19,
               a1,
               *(_QWORD *)(a1 + 16),
               v17,
               v15,
               v16,
               *(_DWORD *)(a1 + 48));
    }
  }
  else if ( (result & 8) != 0 )
  {
    return EtwTraceQueueInputMessage(a1);
  }
  return result;
}
