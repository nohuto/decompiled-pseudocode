/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1C00774C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Template_cppppqqq @ 0x1C00B68A0 (Template_cppppqqq.c)
 */

void __fastcall EtwTraceRetrievePseudoMessage(char a1, _QWORD *a2)
{
  int v4; // r9d
  int v5; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    Template_cppppqqq(*a2, (unsigned int)&RetrievePseudoMessage, v5, v4, a1, *a2);
  }
}
