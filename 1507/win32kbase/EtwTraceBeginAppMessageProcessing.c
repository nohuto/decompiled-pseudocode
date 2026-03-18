/*
 * XREFs of EtwTraceBeginAppMessageProcessing @ 0x1C000B740
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_cdqq @ 0x1C00A8984 (Template_cdqq.c)
 */

void __fastcall EtwTraceBeginAppMessageProcessing(char a1, char a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  int v7; // edx
  int v8; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    Template_cdqq(
      *(_DWORD *)(a3 + 8),
      v7,
      v8,
      *(unsigned __int8 *)(ThreadWin32Thread + 1092),
      a1,
      a2,
      *(_DWORD *)(a3 + 8));
  }
}
