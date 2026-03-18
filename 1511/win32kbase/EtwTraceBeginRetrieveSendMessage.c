/*
 * XREFs of EtwTraceBeginRetrieveSendMessage @ 0x1C0070700
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cppppqq @ 0x1C00ACFC0 (Template_cppppqq.c)
 */

void __fastcall EtwTraceBeginRetrieveSendMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdi
  int v6; // r9d
  int v7; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v4 = *(__int64 **)(a1 + 112);
    if ( v4 )
      v5 = *v4;
    else
      LOBYTE(v5) = 0;
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cppppqq(
      *(_DWORD *)(a1 + 80),
      (unsigned int)&BeginRetrieveSendMessage,
      v7,
      v6,
      a1,
      v5,
      0,
      0,
      0,
      *(_DWORD *)(a1 + 80));
  }
}
