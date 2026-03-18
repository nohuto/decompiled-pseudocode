/*
 * XREFs of EtwTraceEndDelegatedInputWorker @ 0x1C0083C70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cpttttttpppqqq @ 0x1C00AD5D0 (Template_cpttttttpppqqq.c)
 */

void __fastcall EtwTraceEndDelegatedInputWorker(char a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  int v7; // r9d
  char v8; // al

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
      v8 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6) + 1084);
    else
      v8 = -1;
    LOBYTE(v7) = v8;
    Template_cpttttttpppqqq(v5, (unsigned int)&EndDelegatedInputWorker, v6, v7, a1);
  }
}
