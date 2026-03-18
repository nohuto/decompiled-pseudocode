/*
 * XREFs of EtwTraceEndRetrieveSendMessage @ 0x1C000D2A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_cp @ 0x1C00A8A18 (Template_cp.c)
 */

void __fastcall EtwTraceEndRetrieveSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1092);
    Template_cp(v3, &EndRetrieveSendMessage, v4, v2, a1);
  }
}
