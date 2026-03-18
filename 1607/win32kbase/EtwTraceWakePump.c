/*
 * XREFs of EtwTraceWakePump @ 0x1C0077880
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Template_cppppqq @ 0x1C00B67D8 (Template_cppppqq.c)
 */

void __fastcall EtwTraceWakePump(char a1, __int64 *a2, char a3)
{
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  char v9; // al

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    if ( a2 )
      v5 = *a2;
    else
      LOBYTE(v5) = 0;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v9 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    else
      v9 = -1;
    LOBYTE(v8) = v9;
    Template_cppppqq(v6, (unsigned int)&WakePump, v7, v8, a1, v5, 0, 0, a3, 0);
  }
}
