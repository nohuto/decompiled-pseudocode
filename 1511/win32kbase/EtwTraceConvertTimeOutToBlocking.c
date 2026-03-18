/*
 * XREFs of EtwTraceConvertTimeOutToBlocking @ 0x1C00AB930
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_c @ 0x1C00ACD38 (Template_c.c)
 */

void __fastcall EtwTraceConvertTimeOutToBlocking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_c(v5, v4, v6, v3);
  }
}
