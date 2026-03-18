/*
 * XREFs of QueueShutdownData @ 0x1C01D168C
 * Callers:
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0130DE0 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

void __fastcall QueueShutdownData(LARGE_INTEGER a1, LARGE_INTEGER a2)
{
  LARGE_INTEGER *v2; // r9
  __int64 v5; // rax

  v2 = (LARGE_INTEGER *)gspwndBSDR;
  if ( gspwndBSDR )
  {
    if ( a1.QuadPart == ghwndBlocking || a1.QuadPart == 0xFFFF )
      goto LABEL_8;
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ValidateHwndEx)((LARGE_INTEGER)a1.QuadPart, 0LL, 0LL);
    if ( v5 && *(_DWORD *)(v5 + 304) == 1 && (*(_BYTE *)(v5 + 290) & 0x40) == 0 )
    {
      v2 = (LARGE_INTEGER *)gspwndBSDR;
LABEL_8:
      PostEventMessageEx(v2[2].QuadPart, *(_QWORD *)(v2[2].QuadPart + 392), 0x13u, v2, 0x4Au, a2, a1, 0LL);
    }
  }
}
