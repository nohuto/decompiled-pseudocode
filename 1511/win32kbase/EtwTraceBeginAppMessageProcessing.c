/*
 * XREFs of EtwTraceBeginAppMessageProcessing @ 0x1C006E7D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cdqq @ 0x1C00ACE2C (Template_cdqq.c)
 */

void __fastcall EtwTraceBeginAppMessageProcessing(char a1, __int64 a2, __int64 a3)
{
  char v4; // di
  int v6; // r9d
  int v7; // edx
  int v8; // ecx

  v4 = a2;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cdqq(v8, v7, *(_DWORD *)(a3 + 8), v6, a1, v4, *(_DWORD *)(a3 + 8));
  }
}
