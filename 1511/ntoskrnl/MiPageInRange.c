/*
 * XREFs of MiPageInRange @ 0x1400C0208
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSessionWsMetaPage @ 0x1400BE144 (MiSessionWsMetaPage.c)
 *     MiActivePageClaimCandidate @ 0x1400BF620 (MiActivePageClaimCandidate.c)
 *     MiSystemWsMetaPage @ 0x1400C0118 (MiSystemWsMetaPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageInRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v4; // r11d
  unsigned __int64 v5; // r10

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  while ( v5 >= 0xFFFFF68000000000uLL
       && v5 <= 0xFFFFF6FFFFFFFFFFuLL
       && (a4 != 1 || ((v5 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL) )
  {
    if ( v5 <= a3 && v5 >= a2 )
      return (unsigned int)(v4 != 0) + 1;
    if ( v4 == 1 && a4 == 1 )
      break;
    ++v4;
    v5 = (__int64)(v5 << 25) >> 16;
    a2 &= 0xFFFFFFFFFFFFF000uLL;
  }
  return 0LL;
}
