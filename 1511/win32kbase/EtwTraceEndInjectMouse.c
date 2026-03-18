/*
 * XREFs of EtwTraceEndInjectMouse @ 0x1C0079970
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cddd @ 0x1C00ACDA0 (Template_cddd.c)
 */

void __fastcall EtwTraceEndInjectMouse(char a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  v3 = a3;
  v4 = a2;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cddd(v7, (unsigned int)&EndInjectMouse, v8, v6, a1, v4, v3);
  }
}
