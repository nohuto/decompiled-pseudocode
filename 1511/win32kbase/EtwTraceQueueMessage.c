/*
 * XREFs of EtwTraceQueueMessage @ 0x1C006E3C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     EtwTraceQueueInputMessage @ 0x1C006E3F4 (EtwTraceQueueInputMessage.c)
 *     Template_cppppqq @ 0x1C00ACFC0 (Template_cppppqq.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // ecx
  char v6; // bp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx

  result = *(unsigned int *)(a1 + 92);
  if ( (result & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 24);
      v6 = v5;
      LOBYTE(v7) = 0;
      LOBYTE(v8) = 0;
      if ( (unsigned int)(v5 - 581) <= 2 )
        v8 = *(_QWORD *)(a1 + 40);
      else
        v6 = 0;
      if ( (unsigned int)(v5 - 581) <= 2 )
        v7 = *(_QWORD *)(a1 + 32);
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
        v11 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10) + 1084);
      else
        v11 = -1;
      return Template_cppppqq(
               v11,
               (unsigned int)&QueuePostMessage,
               v10,
               (unsigned __int8)v11,
               a1,
               *(_QWORD *)(a1 + 16),
               v7,
               v8,
               v6,
               *(_DWORD *)(a1 + 48));
    }
  }
  else if ( (result & 8) != 0 )
  {
    return EtwTraceQueueInputMessage();
  }
  return result;
}
