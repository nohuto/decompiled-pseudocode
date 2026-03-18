/*
 * XREFs of EtwTraceEndSendMessage @ 0x1C00706E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cp @ 0x1C00ACEC0 (Template_cp.c)
 */

void __fastcall EtwTraceEndSendMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cp(v5, &EndSendMessage, v6, v4, a1);
  }
}
