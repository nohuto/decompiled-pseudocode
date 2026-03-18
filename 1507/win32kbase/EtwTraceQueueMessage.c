/*
 * XREFs of EtwTraceQueueMessage @ 0x1C000B490
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceQueueInputMessage @ 0x1C000B4C4 (EtwTraceQueueInputMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_cppppqq @ 0x1C00A8B18 (Template_cppppqq.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  char v4; // bp
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // ecx

  result = *(unsigned int *)(a1 + 92);
  if ( (result & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 24);
      v4 = v3;
      LOBYTE(v5) = 0;
      LOBYTE(v6) = 0;
      if ( (unsigned int)(v3 - 581) <= 2 )
        v6 = *(_QWORD *)(a1 + 40);
      else
        v4 = 0;
      if ( (unsigned int)(v3 - 581) <= 2 )
        v5 = *(_QWORD *)(a1 + 32);
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
        v8 = *(char *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1092);
      else
        v8 = -1;
      return Template_cppppqq(
               v8,
               (unsigned int)&QueuePostMessage,
               v7,
               (unsigned __int8)v8,
               a1,
               *(_QWORD *)(a1 + 16),
               v5,
               v6,
               v4,
               *(_DWORD *)(a1 + 48));
    }
  }
  else if ( (result & 8) != 0 )
  {
    return EtwTraceQueueInputMessage();
  }
  return result;
}
