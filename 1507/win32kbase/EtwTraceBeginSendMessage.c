/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1C000B780
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_cppppqqqqq @ 0x1C00A8CBC (Template_cppppqqqqq.c)
 */

void __fastcall EtwTraceBeginSendMessage(__int64 a1)
{
  __int64 v2; // r14
  __int64 *v3; // rax
  __int64 ThreadWin32Thread; // rax
  int v5; // edx
  int v6; // r8d

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x400000000400000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x400000000400000LL) != 0
    && (qword_1C00FEA48 & 0x400000000400000LL) == qword_1C00FEA48 )
  {
    LOBYTE(v2) = 0;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      v3 = *(__int64 **)(a1 + 112);
      if ( v3 )
        v2 = *v3;
      PsGetThreadId(**(PETHREAD **)(a1 + 40));
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      Template_cppppqqqqq(*(_DWORD *)(a1 + 80), v5, v6, *(unsigned __int8 *)(ThreadWin32Thread + 1092), a1, v2);
    }
  }
}
