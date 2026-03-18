/*
 * XREFs of EtwTraceBeginDelegatedInputWorker @ 0x1C0085610
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Template_cpttttttpppqqq @ 0x1C00B6DE8 (Template_cpttttttpppqqq.c)
 */

void __fastcall EtwTraceBeginDelegatedInputWorker(__int64 a1)
{
  int v2; // r9d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v2 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    else
      v2 = -1;
    Template_cpttttttpppqqq(
      -__CFSHR__(*(_DWORD *)(a1 + 100), 7),
      (unsigned int)&BeginDelegatedInputWorker,
      -__CFSHR__(*(_DWORD *)(a1 + 100), 8),
      v2,
      a1);
  }
}
