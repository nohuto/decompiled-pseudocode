/*
 * XREFs of EtwTraceRetrieveQueueEventMessage @ 0x1C000E1C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     Template_cppqp @ 0x1C00A8EB0 (Template_cppqp.c)
 */

void __fastcall EtwTraceRetrieveQueueEventMessage(__int64 a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1092);
    Template_cppqp(
      v3,
      (unsigned int)&RetrieveQueueEventMessage,
      v4,
      v2,
      a1,
      *(_QWORD *)(a1 + 96),
      *(_DWORD *)(a1 + 88),
      *(_QWORD *)(a1 + 16));
  }
}
