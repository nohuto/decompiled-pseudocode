/*
 * XREFs of EtwTraceBeginDelegatedInputWorker @ 0x1C0069400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_cpttttttpppqqq @ 0x1C00A9128 (Template_cpttttttpppqqq.c)
 */

void __fastcall EtwTraceBeginDelegatedInputWorker(__int64 a1)
{
  int v2; // r9d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v2 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1092);
    else
      v2 = -1;
    Template_cpttttttpppqqq(
      -__CFSHR__(*(_DWORD *)(a1 + 92), 7),
      (unsigned int)&BeginDelegatedInputWorker,
      -__CFSHR__(*(_DWORD *)(a1 + 92), 8),
      v2,
      a1);
  }
}
