/*
 * XREFs of GreCreatePen @ 0x1C00EDB68
 * Callers:
 *     NtGdiCreatePen @ 0x1C00EDB60 (NtGdiCreatePen.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E7720 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GreExtCreatePen @ 0x1C00EDBE8 (GreExtCreatePen.c)
 */

__int64 __fastcall GreCreatePen(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 <= 6 )
    return GreExtCreatePen(a1, a2, 0LL, a3, 0LL, 0LL, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
