/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x1C006E9A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cppppqqq @ 0x1C00AD088 (Template_cppppqqq.c)
 */

void __fastcall EtwTraceRetrievePostMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r9d
  int v5; // ecx
  int v6; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cppppqqq(v5, (unsigned int)&RetrievePostMessage, v6, v4, a1, *(_QWORD *)(a1 + 16));
  }
}
