/*
 * XREFs of GreEnableAppContainerRestriction @ 0x1C0103A24
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreEnableAppContainerRestriction(int a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    *(_BYTE *)(result + 330) = a1 == 0;
  return result;
}
