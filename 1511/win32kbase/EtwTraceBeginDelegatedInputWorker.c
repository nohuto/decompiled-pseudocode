/*
 * XREFs of EtwTraceBeginDelegatedInputWorker @ 0x1C0083CB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cpttttttpppqqq @ 0x1C00AD5D0 (Template_cpttttttpppqqq.c)
 */

void __fastcall EtwTraceBeginDelegatedInputWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
      v6 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5) + 1084);
    else
      v6 = -1;
    Template_cpttttttpppqqq(
      -__CFSHR__(*(_DWORD *)(a1 + 92), 7),
      (unsigned int)&BeginDelegatedInputWorker,
      -__CFSHR__(*(_DWORD *)(a1 + 92), 8),
      v6,
      a1);
  }
}
