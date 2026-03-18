/*
 * XREFs of EtwTraceWakeRIT @ 0x1C00ACCB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cd @ 0x1C00AD744 (Template_cd.c)
 */

void __fastcall EtwTraceWakeRIT(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // al

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
      v8 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6) + 1084);
    else
      v8 = -1;
    LOBYTE(v7) = v8;
    Template_cd(v5, &EtwWakeRIT, v6, v7, a1);
  }
}
