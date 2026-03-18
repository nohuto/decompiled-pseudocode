/*
 * XREFs of GreEnableAppContainerRestriction @ 0x1C00FD3BC
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreEnableAppContainerRestriction(int a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    *(_BYTE *)(result + 330) = a1 == 0;
  return result;
}
