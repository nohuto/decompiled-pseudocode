/*
 * XREFs of QueueShutdownData @ 0x1C01D32C0
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00D2DD0 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 */

void __fastcall QueueShutdownData(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v5; // rax

  v2 = gspwndBSDR;
  if ( gspwndBSDR )
  {
    if ( a1 == ghwndBlocking || a1 == 0xFFFF )
      goto LABEL_8;
    v5 = ValidateHwndEx(a1, 0LL, 0LL);
    if ( v5 && *(_DWORD *)(v5 + 304) == 1 && (*(_BYTE *)(v5 + 290) & 0x40) == 0 )
    {
      v2 = gspwndBSDR;
LABEL_8:
      PostEventMessageEx(*(_QWORD *)(v2 + 16), *(_QWORD *)(*(_QWORD *)(v2 + 16) + 384LL), 0x13u, v2, 0x4Au, a2, a1, 0LL);
    }
  }
}
