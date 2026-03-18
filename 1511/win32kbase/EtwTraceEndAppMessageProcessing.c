/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x1C006E9F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cd @ 0x1C00AD744 (Template_cd.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cd(v5, &EndAppMessageProcessing, v6, v4, a1);
  }
}
