/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1C006E950
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cppppqqqqq @ 0x1C00AD164 (Template_cppppqqqqq.c)
 */

char __fastcall EtwTraceBeginSendMessage(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // r8
  int v8; // r9d
  int v9; // edx
  int v10; // r8d
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x400000000400000LL) != 0 )
  {
    LOBYTE(v3) = byte_1C01020C8 - 1;
    if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u && (qword_1C01020B0 & 0x400000000400000LL) != 0 )
    {
      LOBYTE(v3) = 0;
      if ( (qword_1C01020B8 & 0x400000000400000LL) == qword_1C01020B8 )
      {
        LOBYTE(v5) = 0;
        if ( a2 && a3 )
          LOBYTE(v3) = 3;
        if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
        {
          v6 = *(__int64 **)(a1 + 112);
          if ( v6 )
            v5 = *v6;
          PsGetThreadId(**(PETHREAD **)(a1 + 40));
          LOBYTE(v8) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), *(_QWORD *)(a1 + 40), v7) + 1084);
          LOBYTE(v3) = Template_cppppqqqqq(*(_DWORD *)(a1 + 80), v9, v10, v8, a1, v5);
        }
      }
    }
  }
  return (char)v3;
}
