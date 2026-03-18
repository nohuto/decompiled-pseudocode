/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1C0072B30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cppppqqq @ 0x1C00AD088 (Template_cppppqqq.c)
 */

void __fastcall EtwTraceRetrievePseudoMessage(char a1, _QWORD *a2, __int64 a3)
{
  int v5; // r9d
  int v6; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000) != 0 )
  {
    LOBYTE(v5) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3) + 1084);
    Template_cppppqqq(*a2, (unsigned int)&RetrievePseudoMessage, v6, v5, a1, *a2);
  }
}
