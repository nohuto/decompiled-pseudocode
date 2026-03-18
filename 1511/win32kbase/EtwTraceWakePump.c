/*
 * XREFs of EtwTraceWakePump @ 0x1C0072F40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cppppqq @ 0x1C00ACFC0 (Template_cppppqq.c)
 */

void __fastcall EtwTraceWakePump(char a1, __int64 *a2, __int64 a3)
{
  char v3; // di
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // r8
  int v9; // r9d
  char v10; // al

  v3 = a3;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    if ( a2 )
      v5 = *a2;
    else
      LOBYTE(v5) = 0;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3) )
      v10 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8) + 1084);
    else
      v10 = -1;
    LOBYTE(v9) = v10;
    Template_cppppqq(v7, (unsigned int)&WakePump, v8, v9, a1, v5, 0, 0, v3, 0);
  }
}
