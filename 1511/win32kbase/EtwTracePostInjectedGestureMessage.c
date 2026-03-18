/*
 * XREFs of EtwTracePostInjectedGestureMessage @ 0x1C00AC1C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cpp @ 0x1C00ACF38 (Template_cpp.c)
 */

void __fastcall EtwTracePostInjectedGestureMessage(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  int v5; // r9d
  int v6; // edx
  int v7; // r8d

  v3 = a2;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v5) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cpp(*a1, v6, v7, v5, *a1, v3);
  }
}
