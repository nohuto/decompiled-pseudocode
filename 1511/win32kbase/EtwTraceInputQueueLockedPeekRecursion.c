/*
 * XREFs of EtwTraceInputQueueLockedPeekRecursion @ 0x1C0078C00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cpq @ 0x1C00AD400 (Template_cpq.c)
 */

void __fastcall EtwTraceInputQueueLockedPeekRecursion(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  PETHREAD *v4; // rcx
  char ThreadId; // bl
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  v3 = a1;
  v4 = *(PETHREAD **)(a1 + 24);
  if ( v4 )
    ThreadId = (unsigned __int8)PsGetThreadId(*v4);
  else
    ThreadId = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1084);
    Template_cpq(v7, (unsigned int)&InputQueueLockedPeekRecursion, v8, v6, v3, ThreadId);
  }
}
